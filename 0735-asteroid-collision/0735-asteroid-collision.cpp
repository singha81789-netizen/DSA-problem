class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {

        stack<int> s;

        for (int i = 0; i < asteroids.size(); i++) {

            int asteroid = asteroids[i];
            bool alive = true;

            while (!s.empty() && asteroid < 0 && s.top() > 0) {

                if (s.top() < -asteroid) {
                    s.pop();                     // Stack wala toot gaya
                }
                else if (s.top() == -asteroid) {
                    s.pop();                     // Dono toot gaye
                    alive = false;
                    break;
                }
                else {
                    alive = false;               // Current asteroid toot gaya
                    break;
                }
            }

            if (alive) {
                s.push(asteroid);
            }
        }

        vector<int> ans(s.size());

        for (int i = s.size() - 1; i >= 0; i--) {
            ans[i] = s.top();
            s.pop();
        }

        return ans;
    }
};