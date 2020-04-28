#include "ListContainer.hpp"

TEST(ListContainerTestSet, SwapTest)
{
	Op* seven = new Op(7);
	ListContainer* test_container = new ListContainer();

	test_container->add_element(seven);

	ASSERT_EQ(test_container->size(),1);
	EXPECT_EQ(test_container->at(0)->evaluate(),7);
}

TEST(ListContainerTestSet, SizeTest)
{
	Op* seven = new Op(7);

	ListContainer * test_container= new ListContainer();
	test_container-> add_element(seven);

	EXPECT_EQ(test_container->size(),1);
}
