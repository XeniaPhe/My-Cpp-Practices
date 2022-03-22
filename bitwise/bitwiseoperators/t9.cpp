#include <iostream>
#include <cstdint>

void PrintBiome(std::string biome)
{
    std::cout<< "The biome is " << biome << "\n";
}

void CheckBiomes(std::uint8_t flag)
{
    //we could instead make bitmasks a global variable to use them in this function instead of shifting operators but i did it for demonstration purposes
    if(flag == 0)
        std::cout<<'\n';
    if(flag & (1<<0))
        PrintBiome("Plains");
    if(flag & (1<<1))
        PrintBiome("Forest");
    if(flag & (1<<2))
        PrintBiome("Jungle");
    if(flag & (1<<3))
        PrintBiome("Mountains");
    if(flag & (1<<4))
        PrintBiome("Desert");
    if(flag & (1<<5))
        PrintBiome("Taiga");
    if(flag & (1<<6))
        PrintBiome("Snowy Tundra");
    if(flag & (1<<7))
        PrintBiome("Swamp");
    

    std::cout<<"\n----------------------------\n\n";
}

int main()
{
    float animalSpawnChance=0;

    constexpr std::uint8_t plains {0b0000'0001};
    constexpr std::uint8_t forest {0b0000'0010};
    constexpr std::uint8_t jungle {0b0000'0100};
    constexpr std::uint8_t mountains {0b0000'1000};

    constexpr std::uint8_t desert {1<<4};
    constexpr std::uint8_t taiga {1<<5};
    constexpr std::uint8_t snowyTunda {1<<6};
    constexpr std::uint8_t swamp {1<<7};

    std::uint8_t biome{1};

    std::cout<<"First : \n";
    CheckBiomes(biome);

    if(biome & plains) animalSpawnChance=0.9f; // testing if a biome is plains

    biome |= forest; //setting the forest bit(second bit from the left) of our bitmask biome so that it's now a forest and a plains

    std::cout<<"Second : \n";
    CheckBiomes(biome);

    biome &= ~forest; //resetting our forest bit so that our biome mask is just a plains again

    std::cout<<"Third : \n";
    CheckBiomes(biome);

    biome^=jungle; // flipping the jungle bit [setting to 1 if 0 or setting to 0 if 1]

    std::cout<<"Fourth : \n";
    CheckBiomes(biome);

    biome |= UINT8_MAX; // setting all the bits to 1

    std::cout<<"Fifth : \n";
    CheckBiomes(biome);

    biome &= 0; // setting all the bits to 0

    std::cout<<"Sixth : \n";
    CheckBiomes(biome);

    std::cout<<"No biomes : void\n\n";
}