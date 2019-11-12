#include "Movie.h"
#include<iostream>

//Constructors
Movie::Movie(string newName, std::vector<string>* const newMovieComments_PTR, Rates newMovieRating)
	:movieName{ newName }, movieComments_PTR{ newMovieComments_PTR }, movieRating{ newMovieRating }, watchCount{0} {
}

//Copy Constructors
Movie::Movie(const Movie& source)
	: movieName{ source.movieName }, movieRating{ source.movieRating }, watchCount{source.watchCount}{
	movieComments_PTR = new std::vector<string>();
	*movieComments_PTR = *(source.movieComments_PTR);
}

//Destructors
Movie::~Movie() {
	delete movieComments_PTR;
	std::cout << "Deleted " << movieName << " Successfully!" << std::endl;
}

//member methods
void Movie::DisplayMovieName() {
	std::cout << movieName << std::endl;
}

void Movie::IncreaseWatchCount(int count) {
	watchCount += count;
}

void Movie::IncreaseWatchCount(int&& count) {
	watchCount += count;
}

//Geters
string Movie::GetMovieName() const { return movieName; }
Rates Movie::GetMovieRating() const { return movieRating; }
int Movie::GetWatchCount() const { return watchCount; }
std::vector<string>* Movie::GetMovieComments() const { return movieComments_PTR; }

//Seters
void Movie::UpdateDetails(string* const newName, Rates* const newRating, std::vector<string>* newPTR) {
	
	if (newName != nullptr)
	{
		movieName = *newName;
	}

	if (newRating != nullptr)
	{
		movieRating = *newRating;
	}

	if (newPTR != nullptr)
	{
		movieComments_PTR = newPTR;
		
		//deallocating newPTR
		newPTR = nullptr;
		delete newPTR;
	}
}

void Movie::UpdateDetails(string&& newName, Rates&& newRating, std::vector<string>* newPTR) {

	if (newName != "")
	{
		movieName = newName;
	}

	if (newRating != _0)
	{
		movieRating = newRating;
	}

	if (newPTR != nullptr)
	{
		movieComments_PTR = newPTR;

		//deallocating newPTR
		newPTR = nullptr;
		delete newPTR;
	}
}