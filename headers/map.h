#ifndef MAP_H
#define MAP_H


class map
{
    public:
        map();
        virtual ~map();
        map(const map& other);
        string Getname() { return name; }
        void setName(string val) { name = val; }
    protected:
    private:
        string name;
};

#endif // MAP_H
