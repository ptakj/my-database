template<typename T>
class Field
{
    protected:
        T value;
    public:
        Field(T value_)
        {
            value = value_;
        }
        T value_get();
        void value_set(T new_value);
};