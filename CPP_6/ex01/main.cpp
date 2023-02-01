#include "Serialize.hpp"

int main()
{
    Data *data = new Data();
    uintptr_t raw = serialize(data);
    Data *data2 = deserialize(raw);
    std::cout << "data: " << data << std::endl;
    std::cout << "data2: " << data2 << std::endl;
    return 0;
}