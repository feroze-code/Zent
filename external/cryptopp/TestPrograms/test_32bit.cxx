#include <cstddef>
int main(int argc, char* argv[])
{
	enum {N = (sizeof(std::size_t) == 4 ? 4 : -1)};
	int x[N];
	return 0;
}
