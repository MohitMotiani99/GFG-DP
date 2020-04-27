#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);



/*
 * Complete the 'loadBalancing' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts following parameters:
 *  1. INTEGER k
 *  2. INTEGER_ARRAY arrival
 *  3. INTEGER_ARRAY load
 */

vector<int> loadBalancing(int k, vector<int> arrival, vector<int> load) {
    vector<int> fin;
    for(int i=0;i<k;i++)
    fin.push_back(0);
    int max=INT_MIN;
    for(int i=0;i<arrival.size();i++){
        if(arrival[i]>max)
        max=arrival[i];
    }
    int j=0;
    for(int i=1;i<=max;i++){
        if(find(arrival.begin(),arrival.end(),i)!=arrival.end()){
        for(;j<k;j=(j+1)%3){
            if(i>=fin[j])
            {
                fin[j]=fin[j]+load[i]+i-1;                                      break;
            }
        }
        }
    }
    vector<int> out;
    max=INT_MIN;
    for(int i=0;i<k;i++){
        if(fin[i]>max)
        max=fin[i];
    }
    for(int i=0;i<k;i++){
        if(fin[i]==max)
        out.push_back(i+1);
    }
    sort(out.begin(),out.end());

    return out;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string k_temp;
    getline(cin, k_temp);

    int k = atoi(ltrim(rtrim(k_temp)));

    string arrival_count_temp;
    getline(cin, arrival_count_temp);

    int arrival_count = stoi(ltrim(rtrim(arrival_count_temp)));

    vector<int> arrival(arrival_count);

    for (int i = 0; i < arrival_count; i++) {
        string arrival_item_temp;
        getline(cin, arrival_item_temp);

        int arrival_item = stoi(ltrim(rtrim(arrival_item_temp)));

        arrival[i] = arrival_item;
    }

    string load_count_temp;
    getline(cin, load_count_temp);

    int load_count = stoi(ltrim(rtrim(load_count_temp)));

    vector<int> load(load_count);

    for (int i = 0; i < load_count; i++) {
        string load_item_temp;
        getline(cin, load_item_temp);

        int load_item = stoi(ltrim(rtrim(load_item_temp)));

        load[i] = load_item;
    }

    vector<int> result = loadBalancing(k, arrival, load);

    for (int i = 0; i < result.size(); i++) {
        fout << result[i];

        if (i != result.size() - 1) {
            fout << "\n";
        }
    }

    fout << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}

