#include<iostream>

using namespace std;

class Room {
private:
	int width;
	int height;

public:

	int GetHeight() {
		return height;
	}

	void SetHeight(int height) {
		this->height = height;
	}

	int GetWidth() {
		return width;
	}

	void SetWidth(int width) {
		this->width = width;
	}
};


class Apartment {
private:
	vector<Room> rooms;
	vector<Room> bathroom;
	int floor_number;
	int apartment_number;
    string owner_name;

public:
	int GetApartmentNumber() {
		return apartment_number;
	}

	void SetApartmentNumber(int apartmentNumber) {
		apartment_number = apartmentNumber;
	}

	int GetFloorNumber() {
		return floor_number;
	}

	void SetFloorNumber(int floorNumber) {
		floor_number = floorNumber;
	}

	const vector<Room>& GetRooms() {
		return rooms;
	}

	void SetRooms(const vector<Room>& rooms) {
		this->rooms = rooms;
	}

	const vector<Room>& GetBathroom() {
		return bathroom;
	}

	void SetBathroom(const vector<Room>& bathroom) {
		this->bathroom = bathroom;
	}

    const string& GetOwner_name() {
		return owner_name;
	}

	void SetOwner_name(const string& owner_name) {
		this->owner_name = owner_name;
	}
};
class Elevator {
private:
	int width;
	int height;
	int max_people;
	int max_weight;
    int numberOf_floors;
    string passwordCode;




public:
	int GetHeight() {
		return height;
	}

	void SetHeight(int height) {
		this->height = height;
	}

	int GetMaxPeople() {
		return max_people;
	}

	void SetMaxPeople(int maxPeople) {
		max_people = maxPeople;
	}

	int GetMaxWeight() {
		return max_weight;
	}

	void SetMaxWeight(int maxWeight) {
		max_weight = maxWeight;
	}

	int GetWidth() {
		return width;
	}

	void SetWidth(int width) {
		this->width = width;
	}

    int GetNumberOf_floors() {
		return numberOf_floors;
	}

	void SetNumberOf_floors(int width) {
		this->v = numberOf_floors;
	}


    const string& GetPasswordCode() {
		return passwordCode;
	}

	void SetPasswordCode(const string& passwordCode) {
		this->passwordCode = passwordCode;
};


int main()
{



return 0;
}