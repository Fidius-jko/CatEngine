// STL includes
#include <iostream>
// Engine includes
#include "Config/VERSION.hpp"
#include "CatEngineCore/test.hpp"

int main(const int argc, const char** argv) {
	std::cout << "Hello from Editor. The Editor's version " << CAT_EDITOR_VERSION_MAJOR << "." << CAT_EDITOR_VERSION_MINOR << std::endl;
	CatEngine::SayHello();

	system("pause");
	return 0;
}