# DesignPatterns

Simple Demo implementations for different design patterns

Basic Theory:

Design Patterns:
Design patterns are a design level solution for a recurring problem. These solutions are designed and time tested.

Types of Design Patterns:

Creational:
Creational Design pattern are dessigned for class instantiation. They help in making a system independent of how its objects are created, composed and represented. 1. Singleton design patterns 2. Factory 3. Prototype 4. Builder 5. Abstract Factory 6. Object Pool
Structural:
Structural Design patterns are concerned with how classes and objects are composed to form large structures 1. Facade 2. Proxy 3.
when to use structural design pattern: 1. Adapting to Interface 2. Organizing Object Relationships 3. Simplifying Complex Systems 4. Managing Object Lifestyles 5. Hierarchical Class Structure

Behavioral:
These patterns are designed depending on how one class communicates with others.

/_
********************************\*\*\*\*********************************
_ \*
_ Creational _ \* _
********************************\*\*\*\*********************************
/_

\***\* In Depth Explanations\*\*\***

# Creational Design Patterns

2. Factory Method Pattern
   A Factory Method creates an instance of single derived classes belonging to a single family of objects.
   We can hide existence of derived class from the user
3. Abstract Factory Pattern
   An Abstract Factory creates an object of several families of classes.
   It lets us produce families of related objects without specifying their concrete concrete classes.
   While Factory Method can produce only a single type of object, an Abstratc Family can produce a family of different kinds of objects.

/_
********************************\*\*\*\*********************************
_ \*
_ Behavioral _ \* _
********************************\*\*\*\*********************************
/_

1. Strategy Pattern:
   A strategy pattern suggest that you take a class that does something specific in a lot of different ways and extract all of these algorithms into seperate class called strategies.

   - It strives for loose coupling
   - Compostion over inheritence( strategy object will be a member of the calling object.)

   Example: 1. Sort class will take up data and sort strategy as input and applies the sorting strategy selected by user. 2. Navigation app uses the navigation algorithm based on user selection of vehicle type(cycle, car, train, walk etc.) 3. Game diffculty level & character selected based on used input.
