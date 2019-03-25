
#ifndef __PROTOTYPE_H__
#define __PROTOTYPE_H__

class Prototype {
public:
        virtual ~Prototype();

        virtual Prototype* clone() const = 0;

protected:
        Prototype();
};

class ConcretePrototype: public Prototype {
public:
        ConcretePrototype();

        ConcretePrototype(const ConcretePrototype& cp);

        ~ConcretePrototype();

        Prototype* clone() const;
};

#endif  // __PROTOTYPE_H__
