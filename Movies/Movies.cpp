

#include<iostream>
#include<string>
using namespace std;
struct Type {
    string name;
    string directed;
    string genre;
    string popularity;
    string costofdrive;
};


int main()
{

    Type data[4];
    data[0].name = "Halloween";
    data[0].directed = "David Gordon";
    data[0].genre = "Horror";
    data[0].popularity = "6";
    data[0].costofdrive = "1880";

    data[1].name = "Joker";
    data[1].directed = "Todd Phillips";
    data[1].genre = "Drama";
    data[1].popularity = "7";
    data[1].costofdrive = "2000";

    data[2].name = "Seven";
    data[2].directed = "David Fincher";
    data[2].genre = "Criminal";
    data[2].popularity = "9";
    data[2].costofdrive = "3000";

    data[3].name = "Interstellar";
    data[3].directed = "Cristopher Nolan";
    data[3].genre = "Fantasy";
    data[3].popularity = "10";
    data[3].costofdrive = "1786";
    int answer = 0;
    do {

        cout << "-------------------------------------------------------" << endl;
        cout << "What do you want? " << endl;
        cout << "1) If u want to search by using name of the movie" << endl;
        cout << "2) if u want to search by using director of the movie" << endl;
        cout << "3) If u want to search by using genre of the movie" << endl;
        cout << "4) If u want to know the most popularity  movie" << endl;
        cout << "5) If u want to know the price of disk the movie" << endl;
        cout << "0) Exit " << endl;
        cout << "-------------------------------------------------------" << endl;
        cin >> answer;

        switch (answer) {
        case 1: {
            string name;
            cout << "If you want to search by name, please enter the name of movie: " << endl;
            cin >> name;
            for (int i = 0; i < 4; i++)
            {
                if (name == data[i].name)
                {
                    cout << "Information about this movie: " << data[i].name << endl;
                    cout << "This movie was created by: " << data[i].directed << endl;
                    cout << "The genre of this movie is: " << data[i].genre << endl;
                    cout << "The popularity of this movie: " << data[i].popularity << endl;
                    cout << "The general price of the drive for this movie is: " << data[i].costofdrive << endl;
                }
            }
        }break;
        case 2: {
            string director;
            cout << "If you want to find some information about movie, please enter the name of director of  this movie: " << endl;
            cin.ignore();
            getline(cin, director);
            for (int i = 0; i < 4; i++) {
                if (director == data[i].directed) {
                    cout << "It seems like you want to find the movie: " << data[i].name << endl;
                    cout << "The genre of this movie is: " << data[i].genre << endl;
                    cout << "Popularity of this movie is:" << data[i].popularity << endl;
                    cout << "The general price of the drive for this movie is: " << data[i].costofdrive << endl;
                }
            }
        }break;
        case 3: {
            string genre;
            cout << "If you want to  find some movie using the genre, write it:" << endl;
            cin >> genre;
            for (int i = 0; i < 4; i++) {
                if (genre == data[i].genre) {
                    cout << "Considering your answer, i can provide from my list the movie: " << data[i].name << endl;
                    cout << "This movie was created by: " << data[i].directed << endl;
                    cout << "The popularity of this movie: " << data[i].popularity << endl;
                    cout << "The general price of the drive for this movie is: " << data[i].costofdrive << endl;
                }
            }
        }break;
        case 4: {
            cout << "The most popular movie is: " << data[3].name << endl;
            cout << "Popularity is equal to: " << data[3].popularity << endl;
        }break;
        case 5: {
            cout << "The most expensive price for the disk belongs to: " << data[2].name << endl;
            cout << "The price is equal to: " << data[2].costofdrive << endl;




        }break;
        
        default: {
            cout << "I don't know this command, try again! " << endl;
        } break;
        case 0: {
            cout << "Good luck! " << endl;
        }
        }







    } while (answer != 0);

}
	
	


