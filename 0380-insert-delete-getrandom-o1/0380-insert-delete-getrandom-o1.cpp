class RandomizedSet {
public:
    vector<int> v;

    RandomizedSet() {

    }

    bool found(int val) {
        for (int a : v) {
            if (a == val)
                return true;
        }
        return false;
    }

    bool insert(int val) {
        if (!found(val)) {
            v.push_back(val);
            return true;
        }
        return false;
    }

    bool remove(int val) {
        for (int i = 0; i < v.size(); i++) {
            if (v[i] == val) {
                v.erase(v.begin() + i);
                return true;
            }
        }
        return false;
    }

    int getRandom() {
        int index = rand() % v.size();
        return v[index];
    }
};