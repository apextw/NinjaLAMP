#ifndef ___ADC___
#define ___ADC___

class ADC {
  public:
    virtual void initADC() = 0;
    virtual double getWellADCValue() = 0;
    virtual double getAirADCValue() = 0;
};

#endif /* ___ADC___ */