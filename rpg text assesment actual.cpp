
//libaries
#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

#define narrator SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 3);
#define system SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2);
#define talking SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
#define inputs SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 6);


int main()
{
	//values    
	::string player;
	::string buddy;
	::string summoner;
	int choice;
	int udead;
	char retry;
	
	//start and exposition
	system
	cout << "Into .Cognis\n";
	cout << "press ENTER to continue...";
	cin.get();
	inputs
		cout << "------------------------------------------------------------------------------------------------------\n";
	narrator
		cout << "\nTwo Adventures have gone on a quest to doccument what is at the bottom of this otherworldly Dungeon.\n"
		" This Dungeon first appeard several months ago, over the remains of a burnt down Jazz club.\n"
		" It seems every bright-eyed, and bushy tailed adventurer that's descended into it depths hasn't returned...\n"
		" Despite this for some reason this daft, dynamic duo of Adventurers have decide to go in anyway.\n\n";
	system
	cout << "[PRESS ENTER TO CONTINUE]\n";
	cin.get();
	narrator
		cout << " Before we can continue anyfurther what are the names of our two happless heroes?\n\n";
	system
		cout <<
		"[PLEASE ENTER THE FIRST ADVENTURERS NAME]\n"
		"[:SHE IS VERY DEADPAN AND RUDE WITCH CAPABLE OF DARK AND PYROKENETIC MAGIC]\n";
	inputs
	cin >> player;
	narrator
	cout << "\nOk, so our glass half-empty gal is called... " << player << ". Hmm, groovy.\n";
	cout << "Now what is the name of our other Adventurer?\n\n";
	system
	cout<<" [PLEASE ENTER THE NAME OF THE SECOND ADVRENTURER]\n"
		"[:HE IS A DASHING CHIPPER AND UNSERIOUS SWORD DANCER WITH HEALING AND TELEPORTATION MAGIC]\n";
	inputs
	cin >> buddy;
	narrator
	cout << "\n So then, our dandy Swordsman is called... " << buddy << ". Ok, an odd but good choice.\n\n";

	//deathloop for act 1 here now
	//chapter 1 the stairs are looking at me funny
	do
	{
		udead = false;
		retry = 'n';


		cout << " Now then lets pick up with our two Heroes " << player << " and " << buddy << ".\n"
			"Who are currently wandering through the first floor of this dungeon and are, Bickering... how wonderfull.\n\n\n";
		inputs
		cout << "------------------------------------------------------------------------------------------------------\n";
		talking
		cout << "[" << player << "]" " Oh real smoove " << buddy << ".\n"
			"You just HAD,to take most of the day to get ready and forget your Sleeping bag.\n\n"
			"[" << buddy << "]" " oh come on " << player << ", have a heart. This only the third time this has happend.\n\n"
			"[" << player << "]" " Like Hell im going to share with you. You snore WAY too loud.\n\n";
		narrator
			cout << "during there rather miffed wandering our heroes have come across a fork in the road\n";
			
		
		inputs
			cout <<"(1) one way leads up a flight of stairs, our duo cant make out whats at the top but see a bright light.\n"
			"(2) the other way is  to continue on down this dark corridor.\n"
			" witch way should our heroes go?\n";
			system
			cout<<
				"[PLEASE SELECT EITHER NUMBER 1 OR 2]\n";
			
		inputs
		cin >> choice;
		
		//choice making logic super new put this everywhere		
		switch (choice){
		
		
		case 1:
		
		
			talking
			cout << "[" << player << "] lets go up the stairs it's a bit brighter that way.\n\n";
			narrator
			"Our heroes go up the stairs and into a tall well lit room\n";
			talking
			cout << "[" << buddy << "] isn't it a rule of adventuring that a well lit room that's not near the exit has something strong inside?\n\n";
			narrator
			cout <<	"Before" << player << " can retort A loud Hiss draws the attention of the duo, and in less than asecond the situation escalates exponentially.\n"
				"as they are bound in every witch dirrection by thick brass pneumatic tendrills.\n"
				<< player << "attempts to muster up a spell soley using her voice but is gagged by a thin tendrill.\n"
				"our heroes are then dragged into the celing never to be seen again.";

			udead = true;
					break;
		
		
		
		

		//choice 2 skeleton fight
		case 2:
		
			talking
				cout << "[" << buddy << "] lets keep going down the halllway im getting some bad vibes from those stairs.\n\n";
			narrator
				cout <<
				"Our heroes march down the dark lavish corridor before entering a large dimley-lit room that has beautiful pinstriped suits and fedoras strewn over the floor.\n\n";
			talking
				cout << "[" << player << "] well this isnt strange in the slightest.\n\n";
			narrator
				cout << player << " accidently kicks a fedora on the floor, revealing a skull...\n"
				"wich then procedes to look at " << player << " indignently, and get up off the floor.\n"
				"kickstarting a chain reaction of movement under all the other suits.\n\n"
				"a skeleton dressed in a black and white suit aproches the duo brandishing a machette.\n";
			talking
				cout << "(dapper skelleton) we is the Gabba-Ghouls, for the crime of messing up lil jonny bones's hat you gotta die.\n\n";
			narrator
				cout << "oh dear a fight is about to start. what will our dynamic-duo do?\n\n";
			inputs
				cout << "[1] let " << buddy << " take charge and hack away at the skeletons \n"
				"[2] Let " << player << " blow the skeletons to smithereens\n\n";
			system
				cout <<
				"[PLEASE SELECT EITHER NUMBER 1 OR 2]\n";
			inputs
				cin >> choice;
			break;
		}

			//choice making logic		
			if (choice != 1 && choice != 2)
			{

				narrator
					cout << "could you please pick either option 1 or 2\n";
				cin >> choice;
				if (choice != 1 && choice != 2)
					while (true)
					{
						cout << "Verry funny, stop gerrymandering and choose an option.\n";
						cin >> choice;
						if (choice == 1 || choice == 2)
							break;
					}
			}


			if (choice == 1)
			{
				talking
					cout << "[" << buddy << "] hey " << player << " stand back i got this one,\n"
					"BI-FROST!\n\n";
				narrator
					cout << buddy << " Draws his sword  and slashes into open air creating a slit in the air that shows behind the Gabba-Ghouls.\n";
				talking
					cout << "[" << buddy << "] Lets dance, you Ja-boneys!!!\n\n";
				narrator
					cout << buddy << " seemingly throws caution to the wind cutting down the skeletons in a seemingly reckless mannor.\n"
					"however whenever a skeleton atempts to slash at hhim he simply mannifests a portal and vanishes from harms way.\n"
					"only to re-appear again moments later and butcherhis attacker. this goes on for  a few minutes. \n"
					<< buddy << " is clearley dragging out the fight until hes satisfied, but during this time no gabbaghoul could get within ten steps of " << player << ".\n\n";
				talking
					cout << "[" << buddy << "] i thought you guys might last a bit longer, but you were a pretty good appertizer.\n\n";
				narrator
					cout << " he turns to " << player << " and chuckles\n";
				talking
					cout << " sorry to keep you wating,heh.";
			}

			//let player do it (big boom)
			if (choice == 2)
			{
				talking
					cout << "[" << player << "]" << buddy << ". Hit the deck!!!\n"
					"NECRO FLAME!!!\n\n";
				narrator
					cout << player << " Channels  a chunk of her mana into a large  explosion of black and blue fire incinnerating the Gabba-Ghouls.\n"
					"[" << player << "] Oh, I may have used a bit to much Mana for that.\n";
				talking
					cout << player << " Puts one of her hands to the nape of her neck with a sheepish smile.\n";
			}




			// interlude a cozy camp (with a rather grouchy skull)
			inputs
				cout << "------------------------------------------------------------------------------------------------------\n";
			narrator
				cout << "After a moment of regaining their breath our duo are goint to leave when...";
			talking
				cout << "[" << buddy << "] Hey " << player << "would it be a good idea to bring one of these skulls back using your magic so it can navigate for us.\n"
				"[" << player << "] Hey,thats not actually a bad idea... but what skull, if a reanimated person hates there summoner or just has a temprament they can just explode.\n\n";
			narrator
				cout << player << " Points at two skulls. Next to eachother on the floor\n\n";
			talking
				cout << "[" << player << "] wich one should i bring back these both seem to have strong enough spirits to be reanimated again\n";
			inputs
				cout << "(1) The Skull with glasses? Or\n"
				"(2) The Skull with a lightly messed up hat?\n";
			cin >> choice;
			if (choice == 1)
			{
				talking
					cout <<
					"[" << buddy << "] lets try the one with glasses it seems quite smart. \n\n"
					"[" << player << "]  Ok so skull with glasses it is.\n\n";
				narrator
					cout << "she picks up the skull with glasses holding it under her chest\n\n1";
				
				talking
					cout << "Re-Igniton\n";
				narrator
					cout << "the skull catches fire.";
					
				choice = 2;
			}
			if (choice == 2)
			{
				talking
					cout <<
					"[" << buddy << "] lets try the one with glasses it seems quite smart. \n\n"
					"[" << player << "]  Ok so skull with glasses it is.\n\n";
				narrator
					cout << "she picks up the skull with glasses holding it under her chest";

				talking
					cout << "Re-Igniton\n";
				narrator
					cout << "the skull catches fire.";
			}

			//choice making logic		
			if (choice != 1 && choice != 2)
			{
				
				narrator
					cout << "could you please pick either option 1 or 2\n";
					cin >> choice;
				if (choice != 1 && choice != 2)
				while (true)
				{
					cout << "Verry funny, stop gerrymandering and choose an option.\n";
					cin >> choice;
				if (choice == 1 || choice == 2)
						break;
				}
			}






			//pipeworks lair and the soundless adventurers (4th member summoner mage)

			//interlude you will look fablous and like it (player is put in a suit, buddy become a Delinquant, the linen maiden will have her way)

			//interlude  this sounds really funky

			// the fight against  meistdokuro
			//tell player please pick either option 1 or 2 if it continues stop being clever smart-ass you can only pick 1 or 2

	
		// the afterlife 
		if (udead == true)
		{
			inputs
				cout << "\n------------------------------------------------------------------------------------------------------\n";
			narrator
				cout << " well this is a terrible place to end our story would you like to retry from the top?\n";
			system
			cout<< "[PLEAESE SELECT Y OR N TO EITHER CONTINUE OR END]\n";


			cin >> retry;


		}
	} while (udead && (retry == 'y' || retry == 'Y'));

	if (udead)
		cout << "It's always a good idea to take a break.\n"
		"But do be sure to come back so " << player << " & " << buddy << " can finish there quest.";
};
