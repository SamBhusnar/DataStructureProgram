g

    base *ptr;
    derived obj_derived;
    ptr = &obj_derived;
    ptr->setData(44);
    ptr->getDataa();

    derived dd;
    derived *d;
    d = &dd;
    d->setData(444);
    d->getData();
    d->x = 44444;
    d->getDataa();

    return 0;
}