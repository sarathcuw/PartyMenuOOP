CXX = g++
CXXFLAGS = -Wall -std=c++11

OBJS = main.o MenuItem.o Appetizer.o MainCourse.o Dessert.o

party_menu: $(OBJS)
	$(CXX) $(CXXFLAGS) -o party_menu $(OBJS)

main.o: main.cpp Appetizer.h MainCourse.h Dessert.h
MenuItem.o: MenuItem.cpp MenuItem.h
Appetizer.o: Appetizer.cpp Appetizer.h MenuItem.h
MainCourse.o: MainCourse.cpp MainCourse.h MenuItem.h
Dessert.o: Dessert.cpp Dessert.h MenuItem.h

clean:
	rm -f *.o party_menu
