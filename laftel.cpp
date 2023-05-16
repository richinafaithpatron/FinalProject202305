//Hornilla , Angela L
//Patron, Richina Faith M.
#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

void viewBoard();
void inventory();
void growingPlants();
void productMarketValue();


int main() {
    char choice;

    do {
        cout <<"------------------------"<< endl;
        cout << "\t  Menu" << endl;
        cout <<"------------------------"<< endl;
        cout << "a. Viewboard" << endl;
        cout << "b. Inventory" << endl;
        cout << "c. Growing Plants" << endl;
        cout << "d. Product Market Value" << endl;
        cout << "e. Exit" << endl;
        cout << "Enter (a, b, c, d, e): ";
        cin >> choice;
        cin.ignore();
        switch (choice) {
            case 'a':
                viewBoard();
                break;
            case 'b':
                inventory();
                break;
            case 'c':
                growingPlants();
                break;
            case 'd':
                productMarketValue();
                break;
            case 'e':
                cout << "Exiting program..." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
                break;
        }

        cout << endl;

    } while (choice != 'e');

    return 0;
}

void viewBoard() {
    cout << endl;
    cout <<"--------------------------"<< endl;
    cout << "Prutas*\t\t*Veggies" << endl;
    cout <<"--------------------------"<< endl;
    cout << "Dragon Fruit\tAmpalaya" << endl;
    cout << "Pipino\t\tOkra" << endl;
    cout << "Kalamansi\tSayote" << endl;
    cout << "Kamatis\t\tSibuyas" << endl;
    cout << "Saging\t\tTalong" << endl;
    cout <<"--------------------------"<< endl;
    
}

void inventory() {
    string item; // to store unput items
    int option; // to strore the selected option 
    string inventoryList[100];// to store inventory items
    int itemCount = 0; // to count the numberof items in the inventory 
    bool itemFound; // to track whether an item is found in the inventory.

    do {
        cout <<"--------------------------"<< endl;
        cout << "\tInventory" << endl;
        cout <<"--------------------------"<< endl;
        cout << "1. Add an item" << endl;
        cout << "2. Remove an item" << endl;
        cout << "3. Search an item" << endl;
        cout << "4. Sort items according to their length" << endl;
        cout << "5. Back to Menu" << endl;
        cout << "Enter (1-5): ";
        cin >> option;
        cin.ignore();

        switch (option) {
            case 1:
                do {
                    cout << "Enter an item (type 'next' to stop): ";
                    getline(cin, item);
                    if (item != "next") {
                        if (item == "Dragon Fruit" || item == "Pipino" || item == "Kalamansi" || item == "Kamatis" || item == "Saging" || item == "Ampalaya" || item == "Okra" || item == "Sayote" || item == "Sibuyas" || item == "Talong") {
                            inventoryList[itemCount] = item;
                            itemCount++;
                        } else {
                            cout << "Invalid item. Please enter a valid item from the view board." << endl;
                        }
                    }
                } while (item != "next");
                break;
            case 2:
                cout << "Enter an item to remove: ";
                getline(cin, item);
                for (int i = 0; i < itemCount; i++) {
                    if (inventoryList[i] == item) {
                        for (int j = i; j < itemCount - 1; j++) {
                            inventoryList[j] = inventoryList[j + 1];
                        }
                        itemCount--;
                        break;
                    }
                }
                break;
            case 3:
                cout << "Enter an item to search: ";
                getline(cin, item);
                itemFound = false;
                for (int i = 0; i < itemCount; i++) {
                    if (inventoryList[i] == item) {
                        itemFound = true;
                        break;
                    }
                }
                if (itemFound) {
                    cout << "Item found in Inventory." << endl;
                } else {
                    cout << "Item not found in Inventory." << endl;
                }
                break;
            case 4:
                for (int i = 0; i < itemCount - 1; i++) {
                    for (int j = 0; j < itemCount - i - 1; j++) {
                        if (inventoryList[j].length() > inventoryList[j + 1].length()) {
                            swap(inventoryList[j], inventoryList[j + 1]);
                        }
                    }
                }
                cout << "Sorting items..." << endl;
                break;
            case 5:
                cout << "Returning to Menu..." << endl;
                break;
            default:
                cout << "Invalid option. Please try again." << endl;
                break;
        }

        if (option != 5) {
            cout << "Current items in Inventory:" << endl;
            if (itemCount > 0) {
                for (int i = 0; i < itemCount; i++) {
                    cout << inventoryList[i] << endl;
                }
            } else {
                cout << "Inventory is empty." << endl;
            }
            cout << endl;
        }

    } while (option != 5);
}

void growingPlants() {
    string item; // to store input items.
    int option, choice; // to store the selected option
	// to store the quantity of an item
    do {
        cout << "Growing Plants" << endl;
        cout << "1. Display an item" << endl;
        cout << "2. Back to Menu" << endl;
        cout << "Enter (1-2): ";
        cin >> option;
        cin.ignore();

        switch (option) {
            case 1:
                cout << "Enter an item: ";
                getline(cin, item);
                if (item == "Dragon Fruit") {
					cout <<"-------------------------------------------------------"<< endl;
					cout << " \t***=How to grow your own Dragon Fruit=*** "<< endl;
					cout <<"-------------------------------------------------------"<< endl;
					cout << "Best Month to plant Dragon Fruit: May to October" << endl;
					cout << "Takes about 28 to 32 days to grow up" << endl;
					cout <<"======================================================="<< endl;
					cout << "\t\t*Soil preparation* " << endl;
					cout <<"======================================================="<< endl;
					cout << "Choose a sunny spot and then boost the soil with" << endl 
						 << "compost, manure and certified organic pelletised " << endl
						 << "fertiliser. A dose of lime is also beneficial. Soil" << endl
                         << "needs to be free draining as these plants rot easily" << endl
						 << "if the roots sit in water.  Clay soils are not ideal " << endl
						 << "but if that’s all you have then treat with gypsum and " << endl
						 << "plant on a raised mound. Alternatively they will " << endl
						 << "happily grow in a large pot. " << endl;
					cout <<"======================================================="<< endl;
					cout << "\t\t\t*Sow* " << endl;
					cout <<"======================================================="<< endl;
					cout << "Plant against a thick stake or some other support"<< endl 
						 << "and tie one or two main stems to the support to "<< endl
						 << "encourage vertical straight growth. Trim away any "<< endl
						 << "other side shoots. Once the stems have reached the "<< endl
						 << "desired height cut off their ends to encourage new "<< endl
						 << "branching shoots."<< endl;
					cout <<"======================================================="<< endl;
					cout << "\t\t*Seal and Nurture* " << endl;
					cout <<"======================================================="<< endl;
					cout <<"Periodically remove some of the longer shoots to keep it" << endl 
						 <<"under control and allow space for new growth to develop. " << endl 
						 <<"This is important because flowers form on the ends of new " << endl 
						 <<"season growth so each year you need new growth to get fruit. " << endl 
						 <<"Less congestion tends to lead to bigger fruit as well. " << endl; 
                } else if (item == "Pipino") {
					cout <<"-------------------------------------------------------"<< endl;
					cout << " \t***=How to grow your own Pipino=*** "<< endl;
					cout <<"-------------------------------------------------------"<< endl;
					cout << "Best Month to plant Pipino: April to June" << endl;
					cout << "Takes about 50 to 70 days to grow up" << endl;
					cout <<"======================================================="<< endl;
					cout << "\t\t*Soil preparation* " << endl;
					cout <<"======================================================="<< endl;
					cout << "Cucumbers are a subtropical crop, requiring long, warm" << endl 
						 << "days, plenty of sunshine, and adequate moisture. " << endl 
						 << "Cucumbers can be grown successfully in many types of " << endl 
						 << "soils. The preferred soil is loose, well drained, and " << endl 
						 << "well supplied with organic matter and plant nutrients" << endl;
					cout <<"======================================================="<< endl;
					cout << "\t\t\t*Sow* " << endl;
					cout <<"======================================================="<< endl;
					cout << "Cucumbers can be planted in hills consisting of four"<< endl  
						 << "or five seeds per hill spaced 4-5' apart"<< endl;
					cout <<"======================================================="<< endl;
					cout << "\t\t*Seal and Nurture* " << endl;
					cout <<"======================================================="<< endl;
					cout <<"Black plastic mulch or landscape fabric can also be" << endl  
						 <<"used as a method of keeping the soil moist and " << endl 
						 <<"minimizing weed problems. Control weeds, insects, " << endl 
						 <<"and diseases for optimum yield. Cucumber beetles, " << endl 
						 <<"aphids, mites, pickle worms, bacterial wilt, " << endl 
						 <<"anthracnose, powdery and downy mildew, and angular " << endl 
						 <<"leaf spot are potential problems in cucumbers" << endl;
                } else if (item == "Kalamansi") {
					cout <<"-------------------------------------------------------"<< endl;
					cout << " \t***=How to grow your own Kalamansi=*** "<< endl;
					cout <<"-------------------------------------------------------"<< endl;
					cout << "Best Month to plant Kalamansi: August to October" << endl;
					cout << "Takes about 2 to 3 years to grow up" << endl;
					cout <<"======================================================="<< endl;
					cout << "\t\t*Soil preparation* " << endl;
					cout <<"======================================================="<< endl;
					cout << "The tree can grow up to 5 feet when grown in pots, and" << endl 
						 << "even taller if planted directly into the ground.  It is " << endl
						 << "better to transplant the seedling into a large container " << endl
						 << "pot from the start, rather than wait until it has fully " << endl
						 << "grown into a woody shrub before transplanting it to its " << endl
						 << "final location" << endl;
					cout <<"======================================================="<< endl;
					cout << "\t\t\t*Sow* " << endl;
					cout <<"======================================================="<< endl;
					cout << "An ideal pot size should have at least 18 inches in "<< endl  
						 << "diameter at the opening and  24 inches in depth."<< endl  
						 << "Choose a location where there is a lot of sunlight.  "<< endl  
						 << "In order to sustain and bear lots of fruits all year "<< endl  
						 << "round, the plant needs to be exposed to at least 6 "<< endl  
						 << "hours of sunlight."<< endl;  
					cout <<"======================================================="<< endl;
					cout << "\t\t*Seal and Nurture* " << endl;
					cout <<"======================================================="<< endl;
					cout <<"When grown in pots, the plant tends to deplete the" << endl  
						 <<"nutrients in the soil quite easily. There is a need to " << endl 
						 <<"replenish the soil nutrients regularly, to ensure continued " << endl 
					     <<"harvest. I use commercially available compost or organic " << endl 
						 <<"fertilizers. Alternatively,  discarded fish parts or coffee " << endl 
						 <<"grounds can also be buried into the soil for conditioning. " << endl 
						 <<"Fertilizer should be applied along the sides of the pot where " << endl 
						 <<"the root tips are present." << endl; 
                } else if (item == "Kamatis") {
					cout <<"-------------------------------------------------------"<< endl;
					cout << " \t***=How to grow your own Kamatis=*** "<< endl;
					cout <<"-------------------------------------------------------"<< endl;
					cout << "Best Month to plant Kamatis: May to September" << endl;
					cout << "Takes about 65 to 80 days to grow up" << endl;
					cout <<"======================================================="<< endl;
					cout << "\t\t*Soil preparation* " << endl;
					cout <<"======================================================="<< endl;
					cout << "If you are starting tomatoes from seed, give the" << endl 
						 << "seedlings plenty of room to branch out. Yes, that means" << endl
						 << "thinning the seedlings to one strong plant per cell or" << endl
						 << "small pot. Snip the weaker, smaller seedlings in favor " << endl
						 << "of the best grower. Crowded conditions inhibit their " << endl
						 << "growth, which stresses them and leads to disease later on." << endl;
					cout <<"======================================================="<< endl;
					cout << "\t\t\t*Sow* " << endl;
					cout <<"======================================================="<< endl;
					cout << "Tomato seedlings need strong, direct light. Days are"<< endl 
						 << "short during winter, so even placing them near a sunny "<< endl
						 << "window may not provide them with sufficient natural light. "<< endl
						 << "Unless you are growing them in a greenhouse, your best "<< endl
						 << "option is to use some type of artificial plant lighting "<< endl
						 << "for 14 to 18 hours every day.Plant your tomato plants "<< endl
						 << "deeper than they come in the pot, all the way up to the "<< endl
						 << "top few leaves. When planted this way, tomatoes are able "<< endl
						 << "to develop roots all along their stems. And more roots make "<< endl
						 << "for a stronger plant."<< endl;
					cout <<"======================================================="<< endl;
					cout << "\t\t*Seal and Nurture* " << endl;
					cout <<"======================================================="<< endl;
					cout <<"Tomatoes love heat, allow the sun to warm the soil in the" << endl   
						 <<"spring. After temperatures remain warm, both during the day" << endl   
						 <<"and at night, you can add a layer of mulch to retain moisture." << endl;
                } else if (item == "Saging") {
					cout <<"-------------------------------------------------------"<< endl;
					cout << " \t***=How to grow your own Saging=*** "<< endl;
					cout <<"-------------------------------------------------------"<< endl;
					cout << "Best Month to plant Saging: October to November" << endl;
					cout << "Takes about 9 to 12 months to grow up" << endl;
					cout <<"======================================================="<< endl;
					cout << "\t\t*Soil preparation* " << endl;
					cout <<"======================================================="<< endl;
					cout << "Soaking the banana seed is an important step because" << endl 
						 << "wild seeds can only germinate when water reaches the" << endl 
						 << "internal embryo. Banana seeds have a durable outer shell," << endl 
						 << "but it is leaky. Soaking the seed allows water to permeate" << endl 
						 << "the shell slowly, and the internal sexual organs of the" << endl 
						 << "seed absorb water to begin the germination process. Use a" << endl 
						 << "permeable soil to allow drainage. Otherwise, the seed will" << endl 
						 << "be prone to rot. We recommend trying potting soil for the" << endl 
						 << "best results. " << endl;
					cout <<"======================================================="<< endl;
					cout << "\t\t\t*Sow* " << endl;
					cout <<"======================================================="<< endl;
					cout << "In the wild, non-dormant banana seeds can lie for several"<< endl 
						 << "years, waiting for ideal soil temperatures as a cue that "<< endl
						 << "it is time for germination. It is not yet understood how "<< endl
						 << "seeds sense temperature, but the fluctuation in soil "<< endl
						 << "temperature is necessary for successful germination."<< endl
						 << "Use a heating mat or a heat lamp to increase the "<< endl
						 << "temperature of the soil for several hours daily"<< endl;
					cout <<"======================================================="<< endl;
					cout << "\t\t*Seal and Nurture* " << endl;
					cout <<"======================================================="<< endl;
					cout <<"Keep the soil moist to promote germination. If you are" << endl   
						 <<"planting in a seed tray or pot, cover it with plastic to" << endl   
						 <<"maintain a humid environment." << endl;   
                } else if (item == "Ampalaya") {
					cout <<"-------------------------------------------------------"<< endl;
					cout << " \t***=How to grow your own Ampalaya=*** "<< endl;
					cout <<"-------------------------------------------------------"<< endl;
					cout << "Best Month to plant Ampalaya: October to February" << endl;
					cout << "Takes about 60 to 70 days to grow up" << endl;
					cout <<"======================================================="<< endl;
					cout << "\t\t*Soil preparation* " << endl;
					cout <<"======================================================="<< endl;
					cout << "Empty the soil bag to the very environmentally friendly " << endl;
					cout << "coconut pot. Don't forget to leave about a quarter of " << endl;
					cout << "an inch or so of empty space in between the surface of " << endl;
					cout << "the soil and rim of the pot to ensure proper growth. " << endl;
					cout <<"======================================================="<< endl;
					cout << "\t\t\t*Sow* " << endl;
					cout <<"======================================================="<< endl;
					cout << "Drop at least 3 seeds into the pot. Cover them lightly " << endl <<"with some soil at least 2-3 mm deep or just cover the " << endl <<"seeds with the thickness not exceeding its diameter." << endl <<"Water the pot very lightly to ensure good seed to" << endl <<"mix contact. " << endl;
					cout << endl;
					cout << "(Take note: It takes 5-10 days before Ampalaya germinate)" << endl;
					cout <<"======================================================="<< endl;
					cout << "\t\t*Seal and Nurture* " << endl;
					cout <<"======================================================="<< endl;
					cout <<"Leaving the pot completely open will allow too much " << endl 
						 <<"heat as well as allowing moisture to escape.To prevent " << endl
					     <<"this, look for a clear plastic kitchen wrap and spray " << endl
					     <<"it with some water. Secure the plastic with a rubber" << endl
					     <<"band, acting as the pot’s lid. This will help to" << endl
					     <<"retain the moisture that the seeds need to germinate" << endl
					     <<"properly. Twice daily, remove the wrap and sprinkle" << endl
					     <<"the pot with some water especially when it’s hot. " << endl;
				

                } else if (item == "Okra") {
					cout <<"-------------------------------------------------------"<< endl;
					cout << " \t***=How to grow your own Okra=*** "<< endl;
					cout <<"-------------------------------------------------------"<< endl;
					cout << "Best Month to plant Okra: March to May" << endl;
					cout << "Takes about 50 to 65 days to grow up" << endl;
					cout <<"======================================================="<< endl;
					cout << "\t\t*Soil preparation* " << endl;
					cout <<"======================================================="<< endl;
					cout << "Plant okra seeds about 1/2 to 1 inch deep and 12 to"<< endl 
					     << "18 inches apart in a row. You can soak the seeds"<< endl  
						 << "overnight in tepid water to help speed up germination." << endl;
					cout <<endl;
					cout << "If you are planting okra transplants, be sure to space " << endl
						 << "them 1 to 2 feet apart to give them ample room to grow." << endl;
					cout <<endl;
					cout << "Okra plants are tall, so space out the rows" << endl
						 <<"3 to 4 feet apart. " << endl;
					cout <<"======================================================="<< endl;
					cout << "\t\t\t*Sow* " << endl;
					cout <<"======================================================="<< endl;
					cout << "Directly into the garden 3 to 4 weeks before the last"<< endl 
						 << "spring frost date and cover the plants with a 2- to"<< endl
						 << "3-foot-high cold frame or grow tunnel until the weather"<< endl
						 << "warms up fully. " << endl;
					cout <<"======================================================="<< endl;
					cout << "\t\t*Seal and Nurture* " << endl;
					cout <<"======================================================="<< endl;
					cout <<"Make sure that the covering is this high so that plants" << endl 
						 <<"have room to grow or to direct sow okra seeds without " << endl 
						 <<"any protection from the cold.  " << endl;
                    
                } else if (item == "Sayote") {
					cout <<"-------------------------------------------------------"<< endl;
					cout << " \t***=How to grow your own Sayote=*** "<< endl;
					cout <<"-------------------------------------------------------"<< endl;
					cout << "Best Month to plant Sayote:  November to June" << endl;
					cout << "Takes about 120 to 150 days to grow up" << endl;
					cout <<"======================================================="<< endl;
					cout << "\t\t*Soil preparation* " << endl;
					cout <<"======================================================="<< endl;
					cout << "Plant chayote 3 to 4 weeks after the last average "<< endl 
						 << "frost date in spring when the soil temperature has"<< endl 
						 << "reached at least 65°F (18°C). Chayote grows best "<< endl 
						 << "where summer temperatures are warm to hot, in "<< endl 
						 << "tropical or subtropical regions"<< endl;
					cout <<"======================================================="<< endl;
					cout << "\t\t\t*Sow* " << endl;
					cout <<"======================================================="<< endl;
					cout << "Set a whole chayote fruit about 4 to 6 inches "<< endl
						 << "(10-15cm)deep, fat end down, and at an angle so "<< endl
						 << "that the stem end is just level with the soil "<< endl
						 << "surface. Sow seeds or fruits 10 feet apart. "<< endl
						 << "Chayote is a vigorous climber; set a sturdy "<< endl
						 << "trellis or support in place at planting"<< endl;
					cout <<"======================================================="<< endl;
					cout << "\t\t*Seal and Nurture* " << endl;
					cout <<"======================================================="<< endl;
					cout <<"Chayote can be grown in a container, but the yield will" << endl
						 <<"not be significant. Grow chayote in a container about " << endl
						 <<"24 inches deep. Chayote is a vigorous climber and a " << endl
						 <<"trellis or support should be set in the container at " << endl
						 <<"planting time." << endl;
                } else if (item == "Sibuyas") {
					cout <<"-------------------------------------------------------"<< endl;
					cout << " \t***=How to grow your own Sibuyas=*** "<< endl;
					cout <<"-------------------------------------------------------"<< endl;
					cout << "Best Month to plant Sibuyas: October to December" << endl;
					cout << "Takes about 90 to 100 days to grow up" << endl;
					cout <<"======================================================="<< endl;
					cout << "\t\t*Soil preparation* " << endl;
					cout <<"======================================================="<< endl;
					cout << "Select a location with full sun, where your onions "<< endl
						 << "won’t be shaded by other plants. The more energy they"<< endl
						 << "can get from the sunlight, the larger their bulbs can grow."<< endl
						 << "In the fall or early spring, mix aged manure or compost "<< endl
						 << "into the soil to improve texture. Ensure there are no "<< endl
						 << "rocks or debris. Soil needs to be well-draining and loose;"<< endl 
						 << "compacted soil affects bulb development."<< endl;
					cout <<"======================================================="<< endl;
					cout << "\t\t\t*Sow* " << endl;
					cout <<"======================================================="<< endl;
					cout << "Bury onion sets 2 to 6 inches apart, gently pressing "<< endl
						 << "them 1 to 2 inches deep into loose soil. (Use the "<< endl
						 << "closer spacing if you want to pull immature onions "<< endl
						 << "as scallions.) Space transplants 4 to 5 inches apart"<< endl
						 << "and rows 12 to 18 inches apart. "<< endl;
					cout <<"======================================================="<< endl;
					cout << "\t\t*Seal and Nurture* " << endl;
					cout <<"======================================================="<< endl;
					cout <<"Set the bulbs with the point end up. Again, don’t bury" << endl
						 <<"them more than 2 inches under the soil. It’s important" << endl
						 <<"that onions aren’t planted too deep, as this can affect" << endl
						 <<"bulb development.Mulch with straw between rows to help " << endl
						 <<"retain moisture and stifle weeds." << endl;
                } else if (item == "Talong") {
					cout <<"-------------------------------------------------------"<< endl;
					cout << " \t***=How to grow your own Talong=*** "<< endl;
					cout <<"-------------------------------------------------------"<< endl;
					cout << "Best Month to plant Talong: October to February" << endl;
					cout << "Takes about 60 to 80 days to grow up" << endl;
					cout <<"======================================================="<< endl;
					cout << "\t\t*Soil preparation* " << endl;
					cout <<"======================================================="<< endl;
					cout << "Plow and cultivate the land for planting. Clean the"<< endl 
						 << "field and apply organic fertilizer. Mix animal manure"<< endl 
						 << "in the field, 10-20 tons per hectare or 1-2 kilos per"<< endl 
						 << "square meter. "<< endl;
					cout <<"======================================================="<< endl;
					cout << "\t\t\t*Sow* " << endl;
					cout <<"======================================================="<< endl;
					cout << "Prepare seedbed. For example, 200 to 300 seeds are"<< endl 
						 << "right for one acre of land. Mix with decomposed manure"<< endl 
						 << "or compost and carbonized hull.Water the seedling and"<< endl 
						 << "line it horizontally with a spacing of 10-15 cm.Sprinkle"<< endl 
						 << "the seeds sparingly and cover them with thin compost."<< endl 
						 << "Cover with chaff or straw and re-hose, and cover with"<< endl 
						 << "plastic or net during the rainy season.Water with tea"<< endl 
						 << "manure if the seedlings lack vigor. You can also use"<< endl 
						 << "a nursery tray to make the seedling look better "<< endl;
					cout <<"======================================================="<< endl;
					cout << "\t\t*Seal and Nurture* " << endl;
					cout <<"======================================================="<< endl;
					cout <<"Seedlings can be transplanted after 4 weeks of sowing." << endl
						 <<"The line or tudling has a spacing of 1-1.2 meters. Water" << endl
						 <<"before and after planting and cover with straw or grass." << endl
						 <<"Fertilize with manure and ash once a month, cut off the " << endl
						 <<"branches and leaves below the first fruit.When this is " << endl
						 <<"done correctly, a bountiful harvest follows" << endl;
                } else {
                    cout << "Item not found." << endl;
                }
                break;
            case 2:
                cout << "Returning to Menu..." << endl;
                break;
            default:
                cout << "Invalid option. Please try again." << endl;
                break;
        }

        cout << endl;

    } while (option != 2);
}

void productMarketValue() {
    string item; //to store input items
    int quantity, sprice; // to store the quantity of an item.
	// to store the selling price per kilo of an item.
    cout << "Product Market Value" << endl;
    cout << "Enter an item: ";
    getline(cin, item);

    if (item == "Dragon Fruit") {
        int retailPrice = 120;
        cout << "Retail price: " << retailPrice << endl;
        cout << "How many kg of Dragon Fruit do you want? ";
        cin >> quantity;
        cout << "How much do you sell per kilo? ";
        cin >> sprice;
        cout << "Profit: " << (sprice - retailPrice) * quantity << endl;
    } else if (item == "Pipino") {
        int retailPrice = 30;
        cout << "Retail price: " << retailPrice << endl;
        cout << "How many kg of Pipino do you want? ";
        cin >> quantity;
        cout << "How much do you sell per kilo? ";
        cin >> sprice;
        cout << "Profit: " << (sprice - retailPrice) * quantity << endl;
    } else if (item == "Kalamansi") {
                int retailPrice = 60;
        cout << "Retail price: " << retailPrice << endl;
        cout << "How many kg of Kalamansi do you want? ";
        cin >> quantity;
        cout << "How much do you sell per kilo? ";
        cin >> sprice;
        cout << "Profit: " << (sprice - retailPrice) * quantity << endl;
    } else if (item == "Kamatis") {
                int retailPrice = 45;
        cout << "Retail price: " << retailPrice << endl;
        cout << "How many kg of Kamatis do you want? ";
        cin >> quantity;
        cout << "How much do you sell per kilo? ";
        cin >> sprice;
        cout << "Profit: " << (sprice - retailPrice) * quantity << endl;
    } else if (item == "Saging") {
                int retailPrice = 70;
        cout << "Retail price: " << retailPrice << endl;
        cout << "How many kg of Saging do you want? ";
        cin >> quantity;
        cout << "How much do you sell per kilo? ";
        cin >> sprice;
        cout << "Profit: " << (sprice - retailPrice) * quantity << endl;
    } else if (item == "Ampalaya") {
                int retailPrice = 41;
        cout << "Retail price: " << retailPrice << endl;
        cout << "How many kg of Ampalaya do you want? ";
        cin >> quantity;
        cout << "How much do you sell per kilo? ";
        cin >> sprice;
        cout << "Profit: " << (sprice - retailPrice) * quantity << endl;
    } else if (item == "Okra") {
                int retailPrice = 60;
        cout << "Retail price: " << retailPrice << endl;
        cout << "How many kg of Okra do you want? ";
        cin >> quantity;
        cout << "How much do you sell per kilo? ";
        cin >> sprice;
        cout << "Profit: " << (sprice - retailPrice) * quantity << endl;
    } else if (item == "Sayote") {
                int retailPrice = 30;
        cout << "Retail price: " << retailPrice << endl;
        cout << "How many kg of Sayote do you want? ";
        cin >> quantity;
        cout << "How much do you sell per kilo? ";
        cin >> sprice;
        cout << "Profit: " << (sprice - retailPrice) * quantity << endl;
    } else if (item == "Sibuyas") {
                int retailPrice = 90;
        cout << "Retail price: " << retailPrice << endl;
        cout << "How many kg of Sibuyas do you want? ";
        cin >> quantity;
        cout << "How much do you sell per kilo? ";
        cin >> sprice;
        cout << "Profit: " << (sprice - retailPrice) * quantity << endl;
    } else if (item == "Talong") {
                int retailPrice = 30;
        cout << "Retail price: " << retailPrice << endl;
        cout << "How many kg of Talong do you want? ";
        cin >> quantity;
        cout << "How much do you sell per kilo? ";
        cin >> sprice;
        cout << "Profit: " << (sprice - retailPrice) * quantity << endl;
        
    } else {
        cout << "Item not found." << endl;
    }
}

/*Please keep in mind that the offered code is merely an example and should only be used for educational purposes. 
It is designed to demonstrate fundamental programming ideas and may not be appropriate for production-level applications.
1. Crop selection is limited: The code presently supports a limited variety of crops for input. 
If you need more crops or more freedom in introducing new crops, you may need to change the code.
2. No data persistence: There is no data storage or database integration in the code. 
As a result, any data input or updated during program execution will not survive the program's execution. 
Additional programming and proper data storage techniques would be required to provide data persistence.
3.Security considerations: The code does not have security features such as input sanitization and user authentication.
When implementing this code in a production environment, it is critical to assess any security vulnerabilities
and apply suitable security measures to protect against such threats.
4.Dependencies and compatibility: The provided code requires a basic environment with C++ and standard libraries. 
It might not be compatible with all systems or C++ versions. Make sure your development environment has the appropriate dependencies, then edit
the code as needed to meet your individual platform or compiler.
5. Maintenance and updates: The code may not follow the most recent best practices or coding conventions. 
It is critical to evaluate and update the code on a regular basis to ensure its functionality and maintainability in 
accordance with changing industry standards./*