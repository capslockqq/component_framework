#include "Output.hpp"
class I_BLDC {
public:
    I_BLDC(Component*, const char*, const char*);
    virtual ~I_BLDC(){};
    void init();
    void update();

    Output<double> op_duty_cycle;
};