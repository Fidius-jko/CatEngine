// STL includes
#include <iostream>
// Engine includes
#include "Config/VERSION.hpp"

namespace CatEngine {
	void SayHello() {
		std::cout << "Hello from Engine. The Engine's version " << CAT_ENGINE_VERSION_MAJOR << "." << CAT_ENGINE_VERSION_MINOR << std::endl;
	}
}