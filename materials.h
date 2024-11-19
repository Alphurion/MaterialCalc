/*Materials
Iron, Nickel, Silicon, Gravel, Cobalt, Silver, Gold, Magnesium, Platinum, Uranium

Crafted Materials
Steel Plates, Metal Grids, Computers, Construction Components, Motors,  Small Steel Tubes, Large Steel Tubes
Solar Cells, Gravity Components, Superconductors
*/
class Ore
{
    public:
    float getRefine(float kgOfOre);
    private:
    //Ores per Kilo of ore
    float FeConversion = 0.7; //iron 
    float NiConversion = 0.4; //nickel
    float SiConversion = 0.7; //silicon
};
class Refine
{
    public:
    int getMaterial();
    private:
    int steelPlate, metalGrid, computer;
};
