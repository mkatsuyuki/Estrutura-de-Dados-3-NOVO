#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

char pkmnList[807][30] = {"BULBASAUR", "IVYSAUR", "VENUSAUR", "CHARMANDER", "CHARMELEON", "CHARIZARD", "SQUIRTLE", "WARTORTLE", "BLASTOISE", "CATERPIE", "METAPOD", "BUTTERFREE", "WEEDLE", "KAKUNA", "BEEDRILL", "PIDGEY", "PIDGEOTTO", "PIDGEOT", "RATTATA", "RATICATE", "SPEAROW", "FEAROW", "EKANS", "ARBOK", "PIKACHU", "RAICHU", "SANDSHREW", "SANDSLASH", "NIDORANf", "NIDORINA", "NIDOQUEEN", "NIDORANm", "NIDORINO", "NIDOKING", "CLEFAIRY", "CLEFABLE", "VULPIX", "NINETALES", "JIGGLYPUFF", "WIGGLYTUFF", "ZUBAT", "GOLBAT", "ODDISH", "GLOOM", "VILEPLUME", "PARAS", "PARASECT", "VENONAT", "VENOMOTH", "DIGLETT", "DUGTRIO", "MEOWTH", "PERSIAN", "PSYDUCK", "GOLDUCK", "MANKEY", "PRIMEAPE", "GROWLITHE", "ARCANINE", "POLIWAG", "POLIWHIRL", "POLIWRATH", "ABRA", "KADABRA", "ALAKAZAM", "MACHOP", "MACHOKE", "MACHAMP", "BELLSPROUT", "WEEPINBELL", "VICTREEBEL", "TENTACOOL", "TENTACRUEL", "GEODUDE", "GRAVELER", "GOLEM", "PONYTA", "RAPIDASH", "SLOWPOKE", "SLOWBRO", "MAGNEMITE", "MAGNETON", "FARFETCHD", "DODUO", "DODRIO", "SEEL", "DEWGONG", "GRIMER", "MUK", "SHELLDER", "CLOYSTER", "GASTLY", "HAUNTER", "GENGAR", "ONIX", "DROWZEE", "HYPNO", "KRABBY", "KINGLER", "VOLTORB", "ELECTRODE", "EXEGGCUTE", "EXEGGUTOR", "CUBONE", "MAROWAK", "HITMONLEE", "HITMONCHAN", "LICKITUNG", "KOFFING", "WEEZING", "RHYHORN", "RHYDON", "CHANSEY", "TANGELA", "KANGASKHAN", "HORSEA", "SEADRA", "GOLDEEN", "SEAKING", "STARYU", "STARMIE", "MRMIME", "SCYTHER", "JYNX", "ELECTABUZZ", "MAGMAR", "PINSIR", "TAUROS", "MAGIKARP", "GYARADOS", "LAPRAS", "DITTO", "EEVEE", "VAPOREON", "JOLTEON", "FLAREON", "PORYGON", "OMANYTE", "OMASTAR", "KABUTO", "KABUTOPS", "AERODACTYL", "SNORLAX", "ARTICUNO", "ZAPDOS", "MOLTRES", "DRATINI", "DRAGONAIR", "DRAGONITE", "MEWTWO", "MEW", "CHIKORITA", "BAYLEEF", "MEGANIUM", "CYNDAQUIL", "QUILAVA", "TYPHLOSION", "TOTODILE", "CROCONAW", "FERALIGATR", "SENTRET", "FURRET", "HOOTHOOT", "NOCTOWL", "LEDYBA", "LEDIAN", "SPINARAK", "ARIADOS", "CROBAT", "CHINCHOU", "LANTURN", "PICHU", "CLEFFA", "IGGLYBUFF", "TOGEPI", "TOGETIC", "NATU", "XATU", "MAREEP", "FLAAFFY", "AMPHAROS", "BELLOSSOM", "MARILL", "AZUMARILL", "SUDOWOODO", "POLITOED", "HOPPIP", "SKIPLOOM", "JUMPLUFF", "AIPOM", "SUNKERN", "SUNFLORA", "YANMA", "WOOPER", "QUAGSIRE", "ESPEON", "UMBREON", "MURKROW", "SLOWKING", "MISDREAVUS", "UNOWN", "WOBBUFFET", "GIRAFARIG", "PINECO", "FORRETRESS", "DUNSPARCE", "GLIGAR", "STEELIX", "SNUBBULL", "GRANBULL", "QWILFISH", "SCIZOR", "SHUCKLE", "HERACROSS", "SNEASEL", "TEDDIURSA", "URSARING", "SLUGMA", "MAGCARGO", "SWINUB", "PILOSWINE", "CORSOLA", "REMORAID", "OCTILLERY", "DELIBIRD", "MANTINE", "SKARMORY", "HOUNDOUR", "HOUNDOOM", "KINGDRA", "PHANPY", "DONPHAN", "PORYGON2", "STANTLER", "SMEARGLE", "TYROGUE", "HITMONTOP", "SMOOCHUM", "ELEKID", "MAGBY", "MILTANK", "BLISSEY", "RAIKOU", "ENTEI", "SUICUNE", "LARVITAR", "PUPITAR", "TYRANITAR", "LUGIA", "HO-OH", "CELEBI", "TREECKO", "GROVYLE", "SCEPTILE", "TORCHIC", "COMBUSKEN", "BLAZIKEN", "MUDKIP", "MARSHTOMP", "SWAMPERT", "POOCHYENA", "MIGHTYENA", "ZIGZAGOON", "LINOONE", "WURMPLE", "SILCOON", "BEAUTIFLY", "CASCOON", "DUSTOX", "LOTAD", "LOMBRE", "LUDICOLO", "SEEDOT", "NUZLEAF", "SHIFTRY", "TAILLOW", "SWELLOW", "WINGULL", "PELIPPER", "RALTS", "KIRLIA", "GARDEVOIR", "SURSKIT", "MASQUERAIN", "SHROOMISH", "BRELOOM", "SLAKOTH", "VIGOROTH", "SLAKING", "NINCADA", "NINJASK", "SHEDINJA", "WHISMUR", "LOUDRED", "EXPLOUD", "MAKUHITA", "HARIYAMA", "AZURILL", "NOSEPASS", "SKITTY", "DELCATTY", "SABLEYE", "MAWILE", "ARON", "LAIRON", "AGGRON", "MEDITITE", "MEDICHAM", "ELECTRIKE", "MANECTRIC", "PLUSLE", "MINUN", "VOLBEAT", "ILLUMISE", "ROSELIA", "GULPIN", "SWALOT", "CARVANHA", "SHARPEDO", "WAILMER", "WAILORD", "NUMEL", "CAMERUPT", "TORKOAL", "SPOINK", "GRUMPIG", "SPINDA", "TRAPINCH", "VIBRAVA", "FLYGON", "CACNEA", "CACTURNE", "SWABLU", "ALTARIA", "ZANGOOSE", "SEVIPER", "LUNATONE", "SOLROCK", "BARBOACH", "WHISCASH", "CORPHISH", "CRAWDAUNT", "BALTOY", "CLAYDOL", "LILEEP", "CRADILY", "ANORITH", "ARMALDO", "FEEBAS", "MILOTIC", "CASTFORM", "KECLEON", "SHUPPET", "BANETTE", "DUSKULL", "DUSCLOPS", "TROPIUS", "CHIMECHO", "ABSOL", "WYNAUT", "SNORUNT", "GLALIE", "SPHEAL", "SEALEO", "WALREIN", "CLAMPERL", "HUNTAIL", "GOREBYSS", "RELICANTH", "LUVDISC", "BAGON", "SHELGON", "SALAMENCE", "BELDUM", "METANG", "METAGROSS", "REGIROCK", "REGICE", "REGISTEEL", "LATIAS", "LATIOS", "KYOGRE", "GROUDON", "RAYQUAZA", "JIRACHI", "DEOXYS", "TURTWIG", "GROTLE", "TORTERRA", "CHIMCHAR", "MONFERNO", "INFERNAPE", "PIPLUP", "PRINPLUP", "EMPOLEON", "STARLY", "STARAVIA", "STARAPTOR", "BIDOOF", "BIBAREL", "KRICKETOT", "KRICKETUNE", "SHINX", "LUXIO", "LUXRAY", "BUDEW", "ROSERADE", "CRANIDOS", "RAMPARDOS", "SHIELDON", "BASTIODON", "BURMY", "WORMADAM", "MOTHIM", "COMBEE", "VESPIQUEN", "PACHIRISU", "BUIZEL", "FLOATZEL", "CHERUBI", "CHERRIM", "SHELLOS", "GASTRODON", "AMBIPOM", "DRIFLOON", "DRIFBLIM", "BUNEARY", "LOPUNNY", "MISMAGIUS", "HONCHKROW", "GLAMEOW", "PURUGLY", "CHINGLING", "STUNKY", "SKUNTANK", "BRONZOR", "BRONZONG", "BONSLY", "MIMEJR", "HAPPINY", "CHATOT", "SPIRITOMB", "GIBLE", "GABITE", "GARCHOMP", "MUNCHLAX", "RIOLU", "LUCARIO", "HIPPOPOTAS", "HIPPOWDON", "SKORUPI", "DRAPION", "CROAGUNK", "TOXICROAK", "CARNIVINE", "FINNEON", "LUMINEON", "MANTYKE", "SNOVER", "ABOMASNOW", "WEAVILE", "MAGNEZONE", "LICKILICKY", "RHYPERIOR", "TANGROWTH", "ELECTIVIRE", "MAGMORTAR", "TOGEKISS", "YANMEGA", "LEAFEON", "GLACEON", "GLISCOR", "MAMOSWINE", "PORYGON-Z", "GALLADE", "PROBOPASS", "DUSKNOIR", "FROSLASS", "ROTOM", "UXIE", "MESPRIT", "AZELF", "DIALGA", "PALKIA", "HEATRAN", "REGIGIGAS", "GIRATINA", "CRESSELIA", "PHIONE", "MANAPHY", "DARKRAI", "SHAYMIN", "ARCEUS", "VICTINI", "SNIVY", "SERVINE", "SERPERIOR", "TEPIG", "PIGNITE", "EMBOAR", "OSHAWOTT", "DEWOTT", "SAMUROTT", "PATRAT", "WATCHOG", "LILLIPUP", "HERDIER", "STOUTLAND", "PURRLOIN", "LIEPARD", "PANSAGE", "SIMISAGE", "PANSEAR", "SIMISEAR", "PANPOUR", "SIMIPOUR", "MUNNA", "MUSHARNA", "PIDOVE", "TRANQUILL", "UNFEZANT", "BLITZLE", "ZEBSTRIKA", "ROGGENROLA", "BOLDORE", "GIGALITH", "WOOBAT", "SWOOBAT", "DRILBUR", "EXCADRILL", "AUDINO", "TIMBURR", "GURDURR", "CONKELDURR", "TYMPOLE", "PALPITOAD", "SEISMITOAD", "THROH", "SAWK", "SEWADDLE", "SWADLOON", "LEAVANNY", "VENIPEDE", "WHIRLIPEDE", "SCOLIPEDE", "COTTONEE", "WHIMSICOTT", "PETILIL", "LILLIGANT", "BASCULIN", "SANDILE", "KROKOROK", "KROOKODILE", "DARUMAKA", "DARMANITAN", "MARACTUS", "DWEBBLE", "CRUSTLE", "SCRAGGY", "SCRAFTY", "SIGILYPH", "YAMASK", "COFAGRIGUS", "TIRTOUGA", "CARRACOSTA", "ARCHEN", "ARCHEOPS", "TRUBBISH", "GARBODOR", "ZORUA", "ZOROARK", "MINCCINO", "CINCCINO", "GOTHITA", "GOTHORITA", "GOTHITELLE", "SOLOSIS", "DUOSION", "REUNICLUS", "DUCKLETT", "SWANNA", "VANILLITE", "VANILLISH", "VANILLUXE", "DEERLING", "SAWSBUCK", "EMOLGA", "KARRABLAST", "ESCAVALIER", "FOONGUS", "AMOONGUSS", "FRILLISH", "JELLICENT", "ALOMOMOLA", "JOLTIK", "GALVANTULA", "FERROSEED", "FERROTHORN", "KLINK", "KLANG", "KLINKLANG", "TYNAMO", "EELEKTRIK", "EELEKTROSS", "ELGYEM", "BEHEEYEM", "LITWICK", "LAMPENT", "CHANDELURE", "AXEW", "FRAXURE", "HAXORUS", "CUBCHOO", "BEARTIC", "CRYOGONAL", "SHELMET", "ACCELGOR", "STUNFISK", "MIENFOO", "MIENSHAO", "DRUDDIGON", "GOLETT", "GOLURK", "PAWNIARD", "BISHARP", "BOUFFALANT", "RUFFLET", "BRAVIARY", "VULLABY", "MANDIBUZZ", "HEATMOR", "DURANT", "DEINO", "ZWEILOUS", "HYDREIGON", "LARVESTA", "VOLCARONA", "COBALION", "TERRAKION", "VIRIZION", "TORNADUS", "THUNDURUS", "RESHIRAM", "ZEKROM", "LANDORUS", "KYUREM", "KELDEO", "MELOETTA", "GENESECT", "CHESPIN", "QUILLADIN", "CHESNAUGHT", "FENNEKIN", "BRAIXEN", "DELPHOX", "FROAKIE", "FROGADIER", "GRENINJA", "BUNNELBY", "DIGGERSBY", "FLETCHLING", "FLETCHINDER", "TALONFLAME", "SCATTERBUG", "SPEWPA", "VIVILLON", "LITLEO", "PYROAR", "FLABEBE", "FLOETTE", "FLORGES", "SKIDDO", "GOGOAT", "PANCHAM", "PANGORO", "FURFROU", "ESPURR", "MEOWSTIC", "HONEDGE", "DOUBLADE", "AEGISLASH", "SPRITZEE", "AROMATISSE", "SWIRLIX", "SLURPUFF", "INKAY", "MALAMAR", "BINACLE", "BARBARACLE", "SKRELP", "DRAGALGE", "CLAUNCHER", "CLAWITZER", "HELIOPTILE", "HELIOLISK", "TYRUNT", "TYRANTRUM", "AMAURA", "AURORUS", "SYLVEON", "HAWLUCHA", "DEDENNE", "CARBINK", "GOOMY", "SLIGGOO", "GOODRA", "KLEFKI", "PHANTUMP", "TREVENANT", "PUMPKABOO", "GOURGEIST", "BERGMITE", "AVALUGG", "NOIBAT", "NOIVERN", "XERNEAS", "YVELTAL", "ZYGARDE", "DIANCIE", "HOOPA", "VOLCANION", "ROWLET", "DARTRIX", "DECIDUEYE", "LITTEN", "TORRACAT", "INCINEROAR", "POPPLIO", "BRIONNE", "PRIMARINA", "PIKIPEK", "TRUMBEAK", "TOUCANNON", "YUNGOOS", "GUMSHOOS", "GRUBBIN", "CHARJABUG", "VIKAVOLT", "CRABRAWLER", "CRABOMINABLE", "ORICORIO", "CUTIEFLY", "RIBOMBEE", "ROCKRUFF", "LYCANROC", "WISHIWASHI", "MAREANIE", "TOXAPEX", "MUDBRAY", "MUDSDALE", "DEWPIDER", "ARAQUANID", "FOMANTIS", "LURANTIS", "MORELULL", "SHIINOTIC", "SALANDIT", "SALAZZLE", "STUFFUL", "BEWEAR", "BOUNSWEET", "STEENEE", "TSAREENA", "COMFEY", "ORANGURU", "PASSIMIAN", "WIMPOD", "GOLISOPOD", "SANDYGAST", "PALOSSAND", "PYUKUMUKU", "TYPENULL", "SILVALLY", "MINIOR", "KOMALA", "TURTONATOR", "TOGEDEMARU", "MIMIKYU", "BRUXISH", "DRAMPA", "DHELMISE", "JANGMO-O", "HAKAMO-O", "KOMMO-O", "TAPUKOKO", "TAPULELE", "TAPUBULU", "TAPUFINI", "COSMOG", "COSMOEM", "SOLGALEO", "LUNALA", "NIHILEGO", "BUZZWOLE", "PHEROMOSA", "XURKITREE", "CELESTEELA", "KARTANA", "GUZZLORD", "NECROZMA", "MAGEARNA", "MARSHADOW", "POIPOLE", "NAGANADEL", "STAKATAKA", "BLACEPHALON", "ZERAORA", };

char pokemonRarity[8][20] = {"COMMON", "UNCOMMON", "RARE", "EX", "STAR", "LEGEND", "PRIME", "GX"};

typedef struct PokemonData{
    int pkmnNum;
    char pkmnName[30];
    char pkmnRarity[20];
    char catchDate[10];
}PkmnDt;

void generateFile(int n, char* nome);
void randomDate(char *date);
void readFile(char* nome);

int main(int argc, char* argv[]) {
    if(atoi(argv[1]) == 1){
        srand((unsigned int) time(NULL));
        generateFile(atoi(argv[3]), argv[2]);
        return 0;        
    }else if(atoi(argv[1]) == 2){
        readFile(argv[2]);
    }
}

void randomDate(char *date){
    //1996 data de lançamento do primeiro jogo do pkmn
    int day, month = ((rand() % 12) + 1);
    //Meses diferentes possuem mais ou menos dias
    if(month == 2){
        day = ((rand() % 28) + 1);
    }
    else if(month == 4 || month == 6 || month == 9 || month == 11){
        day = ((rand() % 30) + 1);
    }
    else
    day = ((rand() % 31) + 1);
    sprintf(date, "%02d/%02d/%d", day, month,((rand() % 22) + 1996));
}

void generateFile(int n, char* nome){
    int i, j;
    FILE *arq;
    char status;
    PkmnDt pkmn; //struct que recebera os dados do pokemons gerados


    //criação de um arquivo binario
    arq = fopen( nome, "wb");
    if(arq == NULL){
        printf("Falha no processamento.");
    }

    //setando o arquivo como consistente
    status = '0';
    fwrite(&status, sizeof(char), sizeof(char), arq);

    //Geracao de dados
    for(i=0; i<n; i++){
        //geração de um PokemonData aleatório
        int randomName, randomRarity;
        pkmn.pkmnNum = ((rand() % 50000) + 1);
        randomName = (rand() % 807);
        for(j=0; j<30; j++){
            pkmn.pkmnName[j] = pkmnList[(randomName % 807)][j];
        }
        randomRarity = (rand() % 8);
        for(j=0; j<20; j++){
            pkmn.pkmnRarity[j] = pokemonRarity[randomRarity][j];
        }
        randomDate(pkmn.catchDate);

        //Escrevendo o registro no arquivo
        fwrite(&pkmn, sizeof(char), sizeof(pkmn),arq);
    }

    //setando o arquivo como consistente
    status = '1';
    fseek(arq,0,SEEK_SET);
    fwrite(&status, sizeof(char), sizeof(char), arq);

    fclose(arq);

    printf("Arquivo gerado.");
}


void readFile(char* nome){
    FILE *arquivo;
    PkmnDt temp;
    int sz;

    arquivo = fopen(nome, "rb");//abre o arquivo para leitura binária

    if(arquivo == NULL){
        printf("Falha no processamento.\n");
        return;
    }
    //verifica o tamanho do arquivo, se é 1, o arquivo não tem registros
    fseek(arquivo, 0L, SEEK_END);
    sz = ftell(arquivo);
    if(sz == 1){
        printf("Arquivo vazio.\n");
        fclose(arquivo);
        return;
    }

    //se tá tudo certo com o arquivo, faz a leitura
    fseek(arquivo, 1, SEEK_SET);//pula o byte de status do arquivo
    while(!feof(arquivo)){//faz a leitura dos registros até o final do arquivo
        fread(&temp, sizeof(PkmnDt), 1, arquivo);
        printf("%d ",temp.pkmnNum);
        printf("%s ",temp.pkmnName);        
        printf("%s ",temp.pkmnRarity);
        printf("%s \n",temp.catchDate);        
    }
    fclose(arquivo);
    return;
}






