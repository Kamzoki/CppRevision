#include<string>
#include<vector>

using std::string;

#ifndef _MOVIE_H_
#define _MOVIE_H_
#pragma once

enum Rates {
	_0,
	G,
	PG,
	PG13,
	R
};

class Movie
{
private:
	string movieName;
	std::vector<string>* movieComments_PTR;
	Rates movieRating;
	int watchCount;

public:
	//Constructors
	Movie(string newName = "None", std::vector<string>* const newMovieComments_PTR = nullptr, Rates newMovieRating = G);
	//Copy Constructors
	Movie(const Movie& source);
	//Destructor
	~Movie();
	
	//Member methods
	void DisplayMovieName();
	
	void IncreaseWatchCount(int count = 1);
	void IncreaseWatchCount(int&& count);
	
	//Geters
	string GetMovieName() const;
	std::vector<string>* GetMovieComments() const;
	Rates GetMovieRating() const;
	int GetWatchCount() const;

	//Seters
	void UpdateDetails(string* const newName = nullptr, Rates* const newRating = nullptr, std::vector<string>* newPTR = nullptr);
	void UpdateDetails(string&& newName= "", Rates&& newRating= _0, std::vector<string>* newPTR = nullptr);
};

#endif
