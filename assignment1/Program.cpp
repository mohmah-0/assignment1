//#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <vector>
#include <list>

using namespace std;

void task3_1();
void task3_2();
void task3_3();
void task4();
void task5();
void task6();
void task7();
void te();

int main()
{
	task6();
	return 0;
}


void task3_1()
{

	cout << "type the number of times you want to see \"hello world\"";
	int n = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "hello world\n";
	}


}


void task3_2()
{
	cout << "type the number of times you want to see \"hello world\"";
	int n = 0, i = 0;
	cin >> n;
	while (i < n)
	{
		i++;
		cout << "hello world\n";
	}


}


void task3_3()
{
	cout << "type the number of times you want to see \"hello world\"";
	int n = 0, i = 0;
	cin >> n;
	if (i < n)
	{
		do
		{
			i++;
			cout << "hello world\n";
		} while (i < n);
	}


}


void task4()
{
	bool married;
	string name, address, gender_in_string, married_in_string;
	char gender;
	int age;
	float height;


	cout << "Whats your name?: ";
	cin >> name;
	cout << "\n\nwhats you age?: ";
	cin >> age;
	cout << "\n\nWhats your gender? (\"m\" for male/\"f\" for female): ";
	cin >> gender;

	if (gender == 'm')
	{
		gender_in_string = "male";
	}
	else
	{
		gender_in_string = "female";
	}

	cout << "\n\nWhats your address?: ";
	cin >> address;

	cout << "\n\nare you married? (\"yes\" for yes and \"no\" for no)";
	string temp;
	cin >> temp;
	if (temp == "yes")
	{
		married = true;
		married_in_string = "married";
	}
	else
	{
		married = false;
		married_in_string = "not married";
	}

	cout << "\n\n what's your height? (answer in meter): ";
	cin >> height;

	cout << "\n\nok here is the summary:\nyour name is : " << name << "\nand you are " << age << " years old" << "\nyou are a " << gender_in_string << "\nyour address is : " << address << "\nyou are " << married_in_string << "\nand you are " << height << " meter high\n";
		




}


void task5()
{
	
	bool married;
	char name[20], address[20];
	string gender_in_string, married_in_string, name_in_string, address_in_string;
	char gender[1];
	int age;
	float height;


	printf_s("Whats your name?: ");
	scanf_s("%s", name, 20);
	printf_s("\n\nwhats you age?: ");
	scanf_s("%d", &age);
	printf_s("\n\nWhats your gender? (\"m\" for male/\"f\" for female): ");
	scanf_s("%s", gender, 1);//kolla denna senare



	if (strcmp(gender,"m"))
	{
		gender_in_string = "male";
	}
	else
	{
		gender_in_string = "female";
	}

	printf_s("\n\nWhats your address?: ");
	scanf_s("%s", address, 20);

	printf_s("\n\nare you married? (\"yes\" for yes and \"no\" for no)");
	char temp[20];
	scanf_s("%s", temp, 20);
	if (strcmp(temp, "yes") == 0)
	{
		married = true;
		married_in_string = "married";
	}
	else
	{
		married = false;
		married_in_string = "not married";
	}

	printf_s("\n\n what's your height? (answer in meter): ");
	scanf_s("%f", &height);

	printf_s("\n\nok here is the summary:\nyour name is : %s\nand you are %d years old\nyou are a %s\nyour address is : %s\nyou are %s\nand you are %.2f meter high\n", name, age, gender_in_string.c_str(), address, married_in_string.c_str(), height);
	

}


void task6()
{
	int x = 0;
	cout << "how many primes?: ";
	cin >> x;

	vector<int> ans;
	

	int i = 2;
	bool prime;

	while (ans.size() < x)
	{
		prime = true;
		for (int k = 2; k < i; k++)
		{
			if (i % k == 0)
			{
				prime = false;
			}
		}

		if (prime == true)
		{
			ans.push_back(i);
		}
		i++;
	}

	for (int n = 0; n < ans.size(); n++)
	{
		cout << ans.at(n) << " ";
	}

}


void task7()
{
	int x;
	cout << "give a number: ";
	cin >> x;
	
	if (x < 0)
}


void te()
{
	char firstname[20];

	printf_s("what is your name? \n");
	scanf_s("%s", firstname, 20);
	printf_s("%s", firstname);

}
//varf�r moste scanf_s ha den tredie argument?
// this is so conterintuetive pls help
