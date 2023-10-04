#ifndef CAR_H
#define CAR_H

class Car {    
    public:
        Car();
        void wearAndTear();
        bool drive();
        void fix();
    private:
        bool in_working_condition_;
};

#endif  // CAR_H
