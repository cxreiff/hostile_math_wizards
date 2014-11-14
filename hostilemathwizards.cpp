#include <iostream>
#include <string>
using namespace std;

//Hostile Math Wizards
//Created by Jax Reiff and Hayden Kinney for AP Calculus.

//Variables
int fin=0,noteread=0,signread=0,whoops=0;
string input;
double answer=0,pop1=0,pop2=0,pop3=0,speed=0;
void loc1(),loc2(),loc3(),loc4(),loc5(),loc6(),final();
void tryg();
void newl(int lines);
void sleep();

//Functions
//Timed Pause
void sleep(clock_t wait)
{
	clock_t goal;
	goal = wait + clock();
	while(goal > clock());
}
//Try Again
void tryg()
{
	sleep(3);
	whoops++;
	string yn;
	cout<<"\nTry again? (y/n)";
	cout<<"\n\ninput:";
	cin>>yn;
	cin.ignore();
	if (yn=="y")
	{
		newl(40);
	}
	else if(yn=="n")
	{
		cout<<"\nQuitting";
		fin=1;
	}
	else
	{
		cout<<"\nI'll take that as a no. Quitting.";
		fin=1;
	}
}
//New Lines
void newl(int lines)
{
	for(int newlines=0; newlines<lines; newlines++){cout<<"\n";}
}

//The Adventure Begins.
int main()
{
	cout<<"\nYou've woken up on a fine spring morning, ready if not eager for another day of school. After you";
	cout<<"\ngrapple yourself out of bed, get dressed, and open your bedroom door, you are faced with a peculiar";
	cout<<"\ndilemma: where the hallway used to be, there is now a mossy cobblestone trail that meanders off into";
	cout<<"\nthe distance amidst a field of waist-high grassy vegetation of some sort.\n\nPress Enter to Continue.";
	cin.get();
	cout<<"\nLeaning out of your doorway, you can see that the cobblestone path weaves along a coastal";
	cout<<"\nbluff. On the left you can see the ocean, a deep azure. Waves crash upon the jagged";
	cout<<"\nrocks far below, and seagulls hop from rock to rock, dodging the water. Glancing to the";
	cout<<"\nright, you see a steep granite slope that begins where the grassy field ends. Up and out";
	cout<<"\nof reach, there are a number of holes in the rock. The holes seem man-made.";
	cout<<"\n";
	while(fin==0)
	{
		sleep(1);
		cout<<"\nYou can \"examine room\" or \"proceed\".";
		cout<<"\n\ninput:";
		getline(cin,input);
		if(input=="examine room")
		{
			cout<<"\nYour room is the same as always. There's a poster of a fractal, and a framed painting of";
			cout<<"\na Bundt Cake. There's a fishbowl on the dresser, but its resident has long since passed";
			cout<<"\naway.";
			cout<<"\n";
		}
		else if(input=="proceed")
		{
			loc1();
			break;
		}
		else if(input=="loc")
		{
			int id;
			cout<<"\nEnter a Location ID:";
			cin>>id;
			cin.ignore();
			switch(id)
			{
                case 1:
                    loc1();
                    break;
                case 2:
                    loc2();
                    break;
                case 3:
                    loc3();
                    break;
                case 4:
                    loc4();
                    break;
                case 5:
                    loc5();
                    break;
                case 6:
                    loc6();
                    break;
                case 7:
                    final();
                    break;
                default:
                    cout<<"Invalid Input, Returning.";
                    break;
			}
		}
		else
		{
			cout<<"\nThat's not valid input. Try again.";
			cout<<"\n";
		}
	}

}

//The Fork.
void loc1()
{
	cout<<"\nYou step out onto the cobblestone, and look back at your doorway. From the path, all you can see";
	cout<<"\nis the doorframe, and through it into your room. You turn and begin to walk along the path, and";
	cout<<"\nwhen you turn to take a last look back at your door, it's vanished. You shrug, and continue walking.";
	cout<<"\nMoving at a brisk pace, you make considerable progress, enjoying the clean ocean air, before you";
	cout<<"\ncome upon a fork in the path, marked by a faded wooden sign. The sign is marked by a pair of arrows,";
	cout<<"\npointing to either fork. The left arrow is labeled \"Beach\" and the right is labeled \"Caves.\"";
	cout<<"\nScrawled underneath the arrows, in bright cranberry-red, is a warning: \"Beware of Wizards.\" There";
	cout<<"\nis a tiny drawing of a robed figure, with a pointy hat.";
	cout<<"\n";
	while(fin==0)
	{
		sleep(1);
		cout<<"\nYou can go \"right\" or \"left\".";
		cout<<"\n\ninput:";
		getline(cin,input);
		if(input=="right")
		{
			loc2();
			break;
		}
		else if(input=="left")
		{
			loc3();
			break;
		}
		else
		{
			cout<<"\nThat's not valid input. Try again.";
			cout<<"\n";
		}
	}
}

//Cave Entrance.
void loc2()
{
	cout<<"\nYou decide that exploring a cave definitely seems more exciting, and so you pick the path on the";
	cout<<"\nright, which, as you follow it, seems to make its way closer and closer to the granite face on the";
	cout<<"\nother side of the field. As you approach the rock, you see that the path ends at an ominously dark";
	cout<<"\nopening in the rock, the entrance to the \"Caves\" promised by the sign from earlier. Once you get";
	cout<<"\nwithin a few meters of the cavern, however, there is a deafening explosion, and the air is filled";
	cout<<"\nwith dirty blue smoke. You shut your eyes and begin to cough, but as soon as you open your eyes";
	cout<<"\nagain, the clouds of smoke have disbanded. Standing in front of the cave is a diminuitive man in a";
	cout<<"\nred robe and pointy hat.\n\nPress Enter to Continue.";
	cin.get();
	cout<<"\nYou note that he matches the drawing on the sign, and decide that he must be";
	cout<<"\na wizard. The wizard peers at you for a second or two, and then spins to face the cave, gesturing";
	cout<<"\nhaphazardly at it. There's a flash of light, and, somewhat disconcertingly, the rock begins to move.";
	cout<<"\nYou watch in horror as the granite ripples and cracks, and a set of jagged teeth form on the lip of";
	cout<<"\nthe cave entrance. The wizard cackles, and once again there is a deafening boom, and a cloud of";
	cout<<"\nblue smoke, as the wizard vanishes. You notice that in the air where the wizard was previously";
	cout<<"\nstanding, a note has appeared. It flutters to the ground. The opening of the cave has become a";
	cout<<"\nterrifying maw filled with dangerously sharp fangs, and as you look on in disbelief, the single";
	cout<<"\nupper jaw begins to viciously open and shut.\n\nPress Enter to Continue.";
	cin.get();
	cout<<"\nPuzzle 1 ~ To get into the cave, you're going to need to time this perfectly.";
	cout<<"\n";

	//Cave Problem 1.
	while(fin==0)
	{
		sleep(1);
		cout<<"\nYou can \"read note\" or \"enter time\".";
		cout<<"\n\ninput:";
		getline(cin,input);
		if(input=="read note")
		{
			noteread=1;
			cout<<"\nThe note reads: \"If you don't want to get speared by cave-teeth, you'd better figure out the EXACT";
			cout<<"\ntime you need to run into the cave. Once you've figured it out, input \"enter time\" and then submit";
			cout<<"\nyour answer. Here's your hint: The up-and-down velocity of the oscillating jaw can be accurately modeled";
			cout<<"\nby the function v(t)=-5sin(t), where the jaw is fully opened at t=0, ten feet above the cave floor. The";
			cout<<"\nonly way you'll make it through is if you start running when the cave mouth is five feet high and on its";
			cout<<"\nupswing. At what time t do you need to start running to make it into the cave alive? The answer should be";
			cout<<"\nin decimal form, with 3 decimal places.";
			cout<<"\n";
		}
		else if(input=="enter time")
		{
			if(noteread==0)
			{
				cout<<"\nYou should read the note before you make your answer.";
				cout<<"\n";
			}
			else if(noteread==1)
			{
				cout<<"\nWhat's your answer? At what time t do you first have a chance to dash through?";
				cout<<"\n\ninput:";
				cin>>answer;
				cin.ignore();
				if(answer==4.712)
				{
					cout<<"\nYou tense your muscles, waiting for the exact right moment to brave the cave's jaws and sprint";
					cout<<"\nthrough. At what your calculations suggest is the right moment, you spring towards the cave, and,";
					cout<<"\ntrusting in your math, dive through the opening. You just barely get your legs entirely inside the";
					cout<<"\ncave before the jaw snaps shut again. This the opening stays closed for good, and for a moment it's";
					cout<<"\ncompletely dark. However, after a couple moments, your eyes adjust, and you realize that there is";
					cout<<"\na faint luminescence emanating from what seems to be moss covering patches of the walls. You pick";
					cout<<"\nyourself off the ground, and walk onwards down the tunnel.";
					cout<<"\n\nPress Enter to Continue.";
					cin.get();
					loc4();
					break;
				}
				else
				{
					cout<<"\nYou tense your muscles, waiting for the exact right moment to brave the cave's jaws and sprint";
					cout<<"\nthrough. At what your calculations suggest is the right moment, you spring towards the cave, and,";
					cout<<"\ntrusting in your math, dive through the opening. Well, you ALMOST make it through, but you aren't";
					cout<<"\nall the way into the cave before the jaws snap shut again, separating you from everything below";
					cout<<"\nyour torso. Your last thought is that you wished you had checked your calculus more thoroughly.";
					cout<<"\n";
					tryg();
				}
			}
		}
		else
		{
			cout<<"\nThat's not valid input. Try again.";
			cout<<"\n";
		}
	}
}

//Bridge.
void loc3()
{
	cout<<"\nYou decide that the beach sounds much more pleasant, and take the left path. It follows the edge of the bluff,";
	cout<<"\nand eventually you come within view of a small bay, far below the promontory on which you stand. There's a bridge";
	cout<<"\nthat spans the gap over the mouth of the bay, and you can see a narrow path down to the beach on the other side.";
	cout<<"\nThe best course of action is probably to cross the bridge, and try to find your way down to the beach. When you";
	cout<<"\napproach the bridge, however, there's a sudden wooshing sound, as a small cloud descends from the sky and hovers";
	cout<<"\nabove the beginning of the bridge. It deposits a torrent of rainwater upon the ground, followed by a small man in";
	cout<<"\na (somewhat sodden) red robe and pointy hat. He unceremoniously lands face first in the dirt, but quickly stands,";
	cout<<"\nbrushing himself off and turning to face you. You note that he matches the drawing on the sign, and decide that he";
	cout<<"\nmust be a wizard. After glaring indignantly at you for a couple of seconds, he begins to speak: \"I will not allow";
	cout<<"\nyou to pass, until you answer my question: What is the area bound underneath the bridge?\" You notice a convenient";
	cout<<"\nsign nearby, with information about the bridge.";
	cout<<"\n\nPress Enter to Continue.";
	cin.get();
	cout<<"\nPuzzle 1 ~ You'll need to give the wizard what he needs in order to proceed to the beach.";
	cout<<"\n";

	//Beach Problem 1.
	while(fin==0)
	{
		sleep(1);
		cout<<"\nYou can \"read sign\" or \"answer wizard\".";
		cout<<"\n\ninput:";
		getline(cin,input);
		if(input=="read sign")
		{
			signread=1;
			cout<<"\nThe sign reads: \"This bridge spans a gap of fifty meters, and can be represented by the function";
			cout<<"\nY=0.1(x^2)-5x+125, where the x-axis represents the water below, and vertical lines at x=0,50 represent";
			cout<<"\nthe virtually vertical cliff walls. The area underneath the curve represented by the bridge is...\" The";
			cout<<"\nrest of the sign is too faded to read.";
			cout<<"\n";
		}
		else if(input=="answer wizard")
		{
			if(signread==0)
			{
				cout<<"\nYou should read the sign before you make your answer.";
				cout<<"\n";
			}
			else if(signread==1)
			{
				cout<<"\nWizard: \"What's your answer? What is the area bound underneath the bridge, and above the water?\"";
				cout<<"\nThe answer should be in meters squared.";
				cout<<"\n\ninput:";
				cin>>answer;
				cin.ignore();
				if(answer==4166.667)
				{
					cout<<"\nYou approach the wizard and declare: \"The answer is "<<answer<<"!\" The wizard mutters indignantly:";
					cout<<"\n\"Well, I suppose I'm obligated to let you pass, but I'll be back!\" With a strange hissing noise,";
					cout<<"\nthe wizard suddenly evaporates into a cloud of crimson steam, and floats away. You venture forth";
					cout<<"\nonto the bridge, and make your way across without event. Feeling a sense of satisfaction, you start";
					cout<<"\ndown the trail that leads to the beach, eager to feel the sand underfoot.";
					cout<<"\n\nPress Enter to Continue.";
					cin.get();
					loc5();
				}
				else
				{
					cout<<"\nYou approach the wizard and declare: \"The answer is "<<answer<<"!\" The wizard grins and says";
					cout<<"\n\"Alright. Go ahead.\" You feel something is amiss, but venture forth onto the bridge anyways.";
					cout<<"\nHalfway across the bridge, you realize that your misgivings were justified. The wizard shouts:";
					cout<<"\n\"WRONG! HAHAHA!\" and waves toward the ocean. To your surprise and horror, an enormous tidal";
					cout<<"\nwave lifts out of the ocean, and surges toward you. You have a brief couple of seconds to regret";
					cout<<"\nnot checking your math more thoroughly, before the wave lifts you off of the bridge and drops you";
					cout<<"\nto your death.";
					cout<<"\n";
					tryg();
				}
			}
		}
		else
		{
			cout<<"\nThat's not valid input. Try again.";
			cout<<"\n";
		}
	}
}

//Cave.
void loc4()
{
	cout<<"\nAfter walking a few minutes down the moss-lit corridor, it opens out into a dim chamber filled with stalactites";
	cout<<"\nand stalagmites. The air is filled with the screeching and swooping of some type of small, furry, flying animal,";
	cout<<"\nprobably bats. Stumbling about in the near-dark, you almost bump into the wizard, who is leaning against one of the";
	cout<<"\nstalagmites. He speaks: \"I assume you want to return home right about now?\" Though it pains you to admit that the";
	cout<<"\nwizard is right, you nod. You're tired, and you're not sure how to escape this strange world. The wizard might know.";
	cout<<"\nHe continues: \"If you want to return home, you'll need to answer this question.\" He points to the roof of the";
	cout<<"\ncave, indicating the bats. \"The rate of growth of this population of bats (per year) is modeled by the function";
	cout<<"\n(dP/dt)=0.0002P(700-P). You must tell me three things: the carrying capacity of the population, the size while it's";
	cout<<"\ngrowing the fastest, and the growth rate while it's growing the fastest.\"";
	cout<<"\n\nPress Enter to Continue.";
	cin.get();
	cout<<"\nPuzzle 2 ~ You'll need to calculate the information the wizard needs to make it back home.";
	cout<<"\n";

	//Cave Problem 2.
	while(fin==0)
	{
		sleep(1);
		cout<<"\nYou can \"answer wizard\" or \"ask wizard\" for the information again.";
		cout<<"\n\ninput:";
		getline(cin,input);
		if(input=="ask wizard")
		{
			cout<<"\nThe wizard repeats: \"The rate of growth of this population of bats (per year) is modeled by the function";
			cout<<"\n(dP/dt)=0.0002P(700-P). You must tell me three things: the carrying capacity of the population, the size";
			cout<<"\nwhile it's growing the fastest, and the growth rate while it's growing the fastest. I'll have you answer\"";
			cout<<"\nall three, and if any of them is wrong, you're finished.";
			cout<<"\n";
		}
		else if(input=="answer wizard")
		{
			cout<<"\nWhat's the population's capacity?";
			cout<<"\n\ninput:";
			cin>>pop1;
			cin.ignore();
			cout<<"\nWhat's the size while the population is growing the fastest?";
			cout<<"\n\ninput:";
			cin>>pop2;
			cin.ignore();
			cout<<"\nWhat's the growth rate while the population is growing the fastest";
			cout<<"\n\ninput:";
			cin>>pop3;
			cin.ignore();
			if(pop1==700&&pop2==350&&pop3==24.5)
			{
				cout<<"\nThe wizard sighs begrudgingly. \"Correct.\" He gestures vaguely, and your surroundings disappear.";
				cout<<"\n\nPress Enter to Continue.";
				cin.get();
				loc6();
			}
			else
			{
				cout<<"\nThe wizard cackles. \"Ha, one of those answers was dead wrong!\" He whistles, and the shrieking bats";
				cout<<"\ndescend upon you, biting and tearing. They are surprisingly strong for their size, and soon you lose";
				cout<<"\nconsciousness.";
				cout<<"\n";
				tryg();
			}
		}
		else
		{
			cout<<"\nThat's not valid input. Try again.";
			cout<<"\n";
		}
	}

}

//Beach.
void loc5()
{
	cout<<"\nYou carefully follow the path down the side of the slope, and after a few minutes of descent you reach the beach.";
	cout<<"\nAfter enjoying a pleasant walk along the beach, you come upon the wizard. He's standing atop a boulder that's lodged";
	cout<<"\nin the sand. He speaks: \"I assume you want to return home right about now?\" Though it pains you to admit that the";
	cout<<"\nwizard is right, you nod. You're tired, and you're not sure how to escape this strange world. The wizard might know.";
	cout<<"\nHe continues: \"If you want to return home, you'll need to answer this question.\" He picks up a spiral seashell";
	cout<<"\nfrom the beach. \"The spiral of this shell is modeled by the function r(theta) = (theta)/2, from theta=0 to";
	cout<<"\ntheta=6*pi. If I press the shell into the sand, what will the area of the imprint be?\"";
	cout<<"\n\nPress Enter to Continue.";
	cin.get();
	cout<<"\nPuzzle 2 ~ You'll need to answer the question to make it back home.";
	cout<<"\n";

	//Beach Problem 2.
	while(fin==0)
	{
		sleep(1);
		cout<<"\nYou can \"ask wizard\" to hear the information again, or you can \"answer wizard\".";
		cout<<"\n\ninput:";
		getline(cin,input);
		if(input=="ask wizard")
		{
			cout<<"\nThe wizard repeats: \"The spiral of this shell is modeled by the function r(theta) = (theta)/2, from";
			cout<<"\ntheta=0 to theta=6*pi. If I press the shell into the sand, what will the area of the imprint be?\" Hint:";
			cout<<"\nUse a standard window of x:[-10,10], y:[-10,10].";
			cout<<"\n";
		}
		else if(input=="answer wizard")
		{
			cout<<"\nSo, what will the area of the imprint be?";
			cout<<"\n\ninput:";
			cin>>answer;
			cin.ignore();
			if(answer==196.373)
			{
				cout<<"\nThe wizard drops the shell to the beach, and sighs. \"Right again.\" He gestures at some distant";
				cout<<"\npoint, and your surroundings vanish.";
				cout<<"\n\nPress Enter to Continue.";
				cin.get();
				loc6();
			}
			else
			{
				cout<<"\nThe wizard drops the shell to the beach, and cackles. \"Wrong!\" With a quick swing of his arm, you";
				cout<<"\nare propelled by an unseen force out over the ocean. You land hard, and, stunned, quickly drown.";
				cout<<"\n";
				tryg();
			}
		}
		else
		{
			cout<<"\nThat's not valid input. Try again.";
			cout<<"\n";
		}
	}
}

//Escape!
void loc6()
{
	cout<<"\nYou appear on a vast plain (still not home) and the wizard is next to you. He speaks: \"See that light over";
	cout<<"\nyonder? That's the portal to make it back to your room. Here's a bike, to get there.\" He snaps his fingers, and";
	cout<<"\nand a bike appears next to you. \"It would be boring if I let you go this easily, so here's an added complication.\"";
	cout<<"\nPointing at the sky, the wizard shoots straight up in the air, and stops an indeterminate distance above you. Again,";
	cout<<"\nhe snaps his fingers, and a rocket appears below him. He shouts: \"To successfully escape the blast from this";
	cout<<"\nrocket, you're going to have to pedal at a certain speed, so that the distance between you and the rocket increases";
	cout<<"\nat a rate of 15 meters per second. When the bomb is 20 meters above the ground and traveling at 40 meters per";
	cout<<"\nsecond, you should be 50 meters towards the portal from your current point.\" The rocket begins to fall.";
	cout<<"\n\nPress Enter to Continue.";
	cin.get();
	cout<<"\nFinal Puzzle ~ A correct answer is the difference between death by missile and escape. Calculate carefully!";
	cout<<"\n";

	//Fire!
	while(fin==0)
	{
		sleep(1);
		cout<<"\nYou can \"enter rate\" or \"assess\" the situation to review the facts.";
		cout<<"\n\ninput:";
		getline(cin,input);
		if(input=="assess")
		{
			cout<<"\nTo successfully escape the blast from the rocket, you're going to have to pedal at a certain speed, so that";
			cout<<"\nthe distance between you and the rocket increases at a rate of 15 meters per second. When the bomb is 20";
			cout<<"\nmeters above the ground and traveling at 40 meters per second, you should be 50 meters towards the portal";
			cout<<"\nfrom your current point. The answer is in meters per second. (Hint: related rates.)";
			cout<<"\n";
		}
		else if(input=="enter rate")
		{
			cout<<"\nHow quickly should you bicycle? If you go too slow you'll get caught by the explosion, and if you go too";
			cout<<"\nfast, you'll get tired out and you won't be able to make it.";
			cout<<"\n\ninput:";
			cin>>speed;
			cin.ignore();
			if(speed==32.155)
			{
				cout<<"\nYou begin pedaling, and get to a speed of "<<speed<<" meters per second. Trusting to your calculations,";
				cout<<"\nyou don't look back, as you bicycle towards the portal, down a road that conveniently leads straight to";
				cout<<"\nyour destination. It's rigorous, but your pace is perfect: you have enough stamina to keep it up. You";
				cout<<"\nhear the explosion behind you, and the heat as it quickly expands. As you near the portal, it gets";
				cout<<"\nhotter and hotter, and just as it begins to get painfully hot, you shoot through the swirling portal.";
				cout<<"\n\nPress Enter to Continue.";
				cin.get();
				final();
			}
			else if(speed>32.155)
			{
				cout<<"\nYou begin pedaling, and get to a speed of "<<speed<<" meters per second. Trusting to your calculations,";
				cout<<"\nyou don't look back, as you bicycle towards the portal, down a road that conveniently leads straight to";
				cout<<"\nyour destination. It's rigorous, and as you near the portal, you start to slow down. You hear the";
				cout<<"\nexplosion behind you, and you feel it get hotter and hotter as the blast expands behind you. You know";
				cout<<"\nyou have to accelerate in order to make it to the portal before the blast catches you, but you have no";
				cout<<"\nstamina left. It gets painfully hot, and with the portal still a few meters away, you are enveloped by";
				cout<<"\nthe blast, and are evaporated.";
				cout<<"\n";
				tryg();
			}
			else
			{
				cout<<"\nYou begin pedaling, and get to a speed of "<<speed<<" meters per second. Trusting to your calculations,";
				cout<<"\nyou don't look back, as you bicycle towards the portal, down a road that conveniently leads straight to";
				cout<<"\nyour destination. You're pacing yourself, and as you hear the explosion behind you, you begin to wonder";
				cout<<"\nif you are perhaps pacing yourself TOO much. It gets hotter and hotter as the blast expands, and you";
				cout<<"\nrealize that you still have a ways to go. It gets painfully hot, and you begin to pedal as fast as you";
				cout<<"\ncan. It's too late: long before you make it to the portal, you are enveloped by the blast, and are";
				cout<<"\nevaporated.";
				cout<<"\n";
				tryg();
			}
		}
		else
		{
			cout<<"That's not valid input. Try again.";
			cout<<"\n";
		}
	}
}

//Epilogue.
void final()
{
	cout<<"\nYou emerge from the portal in what you recognize as your room. However, your celebration is short-lived, as you";
	cout<<"\nrealize you're on a bicycle moving at high speed. As you sail out through your open door, you slam on the breaks,";
	cout<<"\nand only are able to slow down a little before you hit the bannister of your staircase. The bike overturns, and";
	cout<<"\nsends you flying over the wood barrier. Due to a fortunate twist of fate, you land downstairs right in the center";
	cout<<"\nof your couch, which provides enough padding to prevent you from incurring any serious injuries. Wearily, you pull";
	cout<<"\nyourself back up the stairs, into your room, and into bed. Exhausted from the day's peculiar events, you curl up";
	cout<<"\nand fall asleep. You dream of math and wizards.";
	cout<<"\n";
	sleep(5);
	cout<<"\n\nYou made "<<whoops<<" mistakes.\n\nThe End.\n\n";
	fin=1;
}
