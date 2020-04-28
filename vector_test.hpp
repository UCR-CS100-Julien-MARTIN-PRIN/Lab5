#include "VectorContainer.hpp"


TEST(VectorContainerTestSet, SwapTest)
{
	Op* seven = new Op(7);

	VectorContainer* test_container = new VectorContainer();

	test_container->add_element(seven);

	ASSERT_EQ(test_container->size(),1);
	EXPECT_EQ(test_container->at(0)->evaluate(),7);
}

TEST(VectorContainerTestSet, SizeTest)
{
	Op* seven=new Op(7);

	VectorContainer* test_container= new VectorContainer();
	test_container->add_element(seven);

	EXPECT_EQ(test_container->size(),1);
}
