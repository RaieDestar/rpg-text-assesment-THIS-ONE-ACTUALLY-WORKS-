
//libaries
#include <iostream>
#include <string>
using namespace std;


int main()
{
	//values    
	::string player;
	::string buddy;
	int choice;
	int udead;
	char retry;
	//start and exposition
	cout << "Into .Cognis\n";
	cout << "press ENTER to continue...";
	cin.get();
	cout << "------------------------------------------------------------------------------------------------------\n"
		"\n Two Adventures have gone on a quest to doccument what is at the bottom of this otherworldly Dungeon.\n"
		" This Dungeon first appeard several months ago, over the remains of a burnt down Jazz club.\n"
		" It seems every bright-eyed, and bushy tailed adventurer that's descended into it depths hasn't returned...\n"
		" Despite this for some reason this daft, dynamic duo of Adventurers have decide to go in anyway.\n\n";
	cout << "[PRESS ENTER TO CONTINUE]\n";
	cin.get();
	cout << " Before we can continue anyfurther what are the names of our two happless heroes?\n\n"
		"[PLEASE ENTER THE FIRST ADVENTURERS NAME]\n"
		"[:SHE IS VERY DEADPAN AND RUDE WITCH CAPABLE OF DARK AND PYROKENETIC MAGIC]\n";
	cin >> player;
	cout << "\n Ok, so our glass half-empty gal is called... " << player << ". Hmm, groovy.\n";
	cout << " Now what is the name of our other Adventurer?\n\n"
		" [PLEASE ENTER THE NAME OF THE SECOND ADVRENTURER]\n"
		"[:HE IS A DASHING CHIPPER AND UNSERIOUS SWORD DANCER WITH HEALING AND TELEPORTATION MAGIC]\n";
	cin >> buddy;
	cout << "\n So then, our dandy Swordsman is called... " << buddy << ". Ok, an odd but good choice.\n\n";

	//deathloop for act 1 here now
	//chapter 1 the stairs are looking at me funny
	do
	{
		udead = false;
		retry = 'n';


		cout << " Now then lets pick up with our two Heroes " << player << " and " << buddy << ".\n"
			" Who are currently wandering through the first floor of this dungeon and are, Bickering... how wonderfull.\n\n\n";
		cout << "------------------------------------------------------------------------------------------------------\n";
		cout << "[" << player << "]" " Oh real smoove " << buddy << ".\n"
			" You just HAD,to take most of the day to get ready and forget your Sleeping bag.\n\n"
			"[" << buddy << "]" " oh come on  " << player << ", have a heart. This only the third time this has happend.\n\n"
			"[" << player << "]" " Like Hell im going to share with you. You snore WAY too loud.\n\n";
		cout << "during there rather miffed wandering our heroes have come across a fork in the road\n"
			"(1) one way leads up a flight of stairs, our duo cant make out whats at the top but see a bright light.\n"
			"(2) the other way is  to continue on down this dark corridor.\n"
			" witch way should our heroes go?\n"
			"[PLEASE SELECT EITHER NUMBER ONE OR TWO]\n"
			;
		cin >> choice;
		//choice 1 go up the stairs get bound and crushed by tentacles in the walls
		if (choice == 1);
		{
			cout << "you go up the stairs and get  evicerated by vines and tendrills in the walls\n";
			udead = true;
		}
		;

		//choice 2 skeleton fight
		if (choice == 2)
			cout << "[" << buddy << "] lets keep going down the halllway im getting some bad vibes from those stairs.\n\n"
			"Our heroes march down the dark lavish corridor before entering a large dimley-lit room that has beautiful pinstriped suits and fedoras strewn over the floor.\n\n"
			"[" << player << "] well this isnt strange in the slightest.\n\n"
			<< player << " accidently kicks a fedora on the floor, revealing a skull...\n"
			"wich then procedes to look at " << player << " indignently, and get up off the floor.\n"
			"kickstarting a chain reaction of movement under all the other suits.\n\n"
			"a skeleton dressed in a black and white suit aproches the duo brandishing a machette.\n"
			"(dapper skelleton) we is the Gabbaghouls, for the crime of messing up lil jonny bones's hat you gotta die.\n\n"
			"oh dear a fight is about to start. what will our dynamic-duo do?\n\n";

		//tell player please pick either option 1 or 2 if it contiinues stop being clever smart-ass you can only pick 1 or 2


		// the afterlife ch1
		if (udead == true)
		{
			cout << "------------------------------------------------------------------------------------------------------\n"
				" this is a terrible place to end our story would you like to retry from the top?\n"
				"[PLEAESE SELECT Y OR N TO EITHER CONTINUE OR END]\n";


			cin >> retry;


		}
	} while (udead && (retry == 'y' || retry == 'Y'));

	if (udead)
		cout << "It's always a good idea to take a break.\n"
		"But do be sure to come back so " << player << " & " << buddy << " can finish there quest.";
}