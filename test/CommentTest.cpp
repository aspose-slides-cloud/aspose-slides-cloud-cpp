// --------------------------------------------------------------------------------------------------------------------
// <copyright company="Aspose" file="ApiBase.cs">
//   Copyright (c) 2020 Aspose.Slides for Cloud
// </copyright>
// <summary>
//  Permission is hereby granted, free of charge, to any person obtaining a copy
//  of this software and associated documentation files (the "Software"), to deal
//  in the Software without restriction, including without limitation the rights
//  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
//  copies of the Software, and to permit persons to whom the Software is
//  furnished to do so, subject to the following conditions:
// 
//  The above copyright notice and this permission notice shall be included in all
//  copies or substantial portions of the Software.
// 
//  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
//  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
//  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
//  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
//  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
//  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
//  SOFTWARE.
// </summary>
// --------------------------------------------------------------------------------------------------------------------


#include "gtest/gtest.h"

#include "TestUtils.h"
#include "model/SlideComment.h"
#include "model/SlideModernComment.h"

class CommentTest : public ::testing::Test
{
public:
	static TestUtils* utils;

protected:
	void SetUp()
	{
		if (utils == nullptr)
		{
			utils = new TestUtils();
		}
	}
};

TestUtils* CommentTest::utils = nullptr;

TEST_F(CommentTest, commentCreate) {
	utils->initialize("", "", "");

	std::shared_ptr<SlideComment> dto(new SlideComment());
	dto->setText(L"Comment text");
	dto->setAuthor(L"Test author");
	std::shared_ptr<SlideComment> childComment(new SlideComment());
	childComment->setText(L"Child comment text");
	childComment->setAuthor(L"Test author");
	dto->setChildComments({ childComment });
		
	std::shared_ptr<SlideComments> comments = utils->getSlidesApi()->createComment(L"test.pptx", 3, dto, boost::none, L"password", L"TempSlidesSDK").get();
	EXPECT_EQ(L"Test author", comments->getList()[0]->getAuthor());
	EXPECT_EQ(L"Comment text", comments->getList()[0]->getText());
	EXPECT_EQ(L"Test author", comments->getList()[0]->getChildComments()[0]->getAuthor());
	EXPECT_EQ(L"Child comment text", comments->getList()[0]->getChildComments()[0]->getText());
}

TEST_F(CommentTest, commentCreateOnline) {
	utils->initialize("", "", "");

	std::shared_ptr<SlideComment> dto(new SlideComment());
	dto->setText(L"Comment text");
	dto->setAuthor(L"Test author");
	std::shared_ptr<SlideComment> childComment(new SlideComment());
	childComment->setText(L"Child comment text");
	childComment->setAuthor(L"Test author");
	dto->setChildComments({ childComment });

	std::shared_ptr<HttpContent> data = std::make_shared<HttpContent>();
	data->setData(std::make_shared<std::ifstream>(L"TestData/test.pptx", std::ios::binary));
	HttpContent result = utils->getSlidesApi()->createCommentOnline(data, 3, dto, boost::none, L"password").get();
	EXPECT_NE(nullptr, result.getData());
}

TEST_F(CommentTest, commentsGet) {
	utils->initialize("", "", "");

	std::shared_ptr<SlideComments> comments = utils->getSlidesApi()->getSlideComments(L"test.pptx", 1, L"password", L"TempSlidesSDK").get();
	EXPECT_EQ(2, comments->getList().size());
	EXPECT_EQ(1, comments->getList()[0]->getChildComments().size());
}

TEST_F(CommentTest, commentsDelete) {
	utils->initialize("", "", "");
	utility::string_t fileName = L"test.pptx";
	utility::string_t folderName = L"TempSlidesSDK";
	utility::string_t password = L"password";

	utils->getSlidesApi()->deleteComments(fileName, L"", password, folderName).wait();
	std::shared_ptr<SlideComments> comments = utils->getSlidesApi()->getSlideComments(fileName, 1, password, folderName).get();
	EXPECT_EQ(0, comments->getList().size());
}

TEST_F(CommentTest, commentsDeleteOnline) {
	utils->initialize("", "", "");

	std::shared_ptr<HttpContent> data = std::make_shared<HttpContent>();
	data->setData(std::make_shared<std::ifstream>(L"TestData/test.pptx", std::ios::binary));
	HttpContent result = utils->getSlidesApi()->deleteCommentsOnline(data, L"", L"password").get();
	EXPECT_NE(nullptr, result.getData());
}

TEST_F(CommentTest, commentsDeleteForSlide) {
	utils->initialize("", "", "");
	utility::string_t fileName = L"test.pptx";
	utility::string_t folderName = L"TempSlidesSDK";
	utility::string_t password = L"password";
	int slideIndex = 1;

	utils->getSlidesApi()->deleteSlideComments(fileName, slideIndex, L"", password, folderName).wait();
	std::shared_ptr<SlideComments> comments = utils->getSlidesApi()->getSlideComments(fileName, 1, password, folderName).get();
	EXPECT_EQ(0, comments->getList().size());
}

TEST_F(CommentTest, commentsDeleteForSlideOnline) {
	utils->initialize("", "", "");

	std::shared_ptr<HttpContent> data = std::make_shared<HttpContent>();
	data->setData(std::make_shared<std::ifstream>(L"TestData/test.pptx", std::ios::binary));
	HttpContent result = utils->getSlidesApi()->deleteSlideCommentsOnline(data, 1, L"", L"password").get();
	EXPECT_NE(nullptr, result.getData());
}

TEST_F(CommentTest, commentCreateModern) {
	utils->initialize("", "", "");

	std::shared_ptr<SlideModernComment> dto(new SlideModernComment());
	dto->setText(L"Comment text");
	dto->setAuthor(L"Test author");
	dto->setStatus(L"Active");
	dto->setTextSelectionStart(1);
	dto->setTextSelectionLength(5);
	std::shared_ptr<SlideModernComment> childComment(new SlideModernComment());
	childComment->setText(L"Child comment text");
	childComment->setAuthor(L"Test author");
	dto->setStatus(L"Resolved");
	dto->setChildComments({ childComment });

	std::shared_ptr<SlideComments> comments = utils->getSlidesApi()->createComment(L"test.pptx", 3, dto, boost::none, L"password", L"TempSlidesSDK").get();
	EXPECT_EQ(1, comments->getList().size());
	EXPECT_EQ(L"Modern", comments->getList()[0]->getType());
}

TEST_F(CommentTest, commentCreateModernForShape) {
	utils->initialize("", "", "");

	std::shared_ptr<SlideModernComment> dto(new SlideModernComment());
	dto->setText(L"Comment text");
	dto->setAuthor(L"Test author");
	dto->setStatus(L"Active");
	dto->setTextSelectionStart(1);
	dto->setTextSelectionLength(5);
	std::shared_ptr<SlideModernComment> childComment(new SlideModernComment());
	childComment->setText(L"Child comment text");
	childComment->setAuthor(L"Test author");
	dto->setStatus(L"Resolved");
	dto->setChildComments({ childComment });

	std::shared_ptr<SlideComments> comments = utils->getSlidesApi()->createComment(L"test.pptx", 3, dto, 1, L"password", L"TempSlidesSDK").get();
	EXPECT_EQ(1, comments->getList().size());
	EXPECT_EQ(L"Modern", comments->getList()[0]->getType());
}

TEST_F(CommentTest, commentsGetAuthors) {
	utils->initialize("", "", "");

	std::shared_ptr<CommentAuthors> comments = utils->getSlidesApi()->getCommentAuthors(L"test.pptx", L"password", L"TempSlidesSDK").get();
	EXPECT_EQ(1, comments->getList().size());
}
