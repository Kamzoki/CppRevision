#include<string>
#include<vector>

#include"Movie.h"
using std::string;

#ifndef _MOVIES_H_
#define _MOVIES_H_

#pragma once
class Movies
{
private:
	static std::vector<Movie> allMovies;
public:
	static const std::vector<Movie>* const AllMovies;

	//Constructors
	Movies();
	//Copy Constructors
	Movies(const Movies& source);
	Movies(const Movies&& source);
	//Destructors
	~Movies();

	//member methods
	void InsertNewMovie(string movieName, Rates movieRate, std::vector<string>* movieComments_PTR = nullptr) const;
};
#endif 


