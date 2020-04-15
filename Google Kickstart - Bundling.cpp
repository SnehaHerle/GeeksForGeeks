//http://codeforces.com/blog/entry/75088
//https://codingcompetitions.withgoogle.com/kickstart/round/000000000019ffc7/00000000001d3ff3
//Bundling


#include<bits/stdc++.h>

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()

using namespace std;

struct node 
{
    node * child[26];    
    ll prefixes;           // no of words having prefix formed till this node            
    ll count;              // no of words ending at this node
};

node * newNode()    //constructor
{
    node * temp = new node();
    for(int i=0; i<26; ++i)
        temp->child[i] = NULL;
    temp->prefixes = temp->count = 0;
    return temp;
}

// insert string s into the trie
void insert(node * root, string s) 
{
    node * curr = root;
    ll n = s.length();
    curr->prefixes ++;
    for(ll i=0; i<n; ++i) {
        if(curr->child[s[i]-'A'] == NULL) 
        {
            node * temp = newNode();
            curr->child[s[i]-'A'] = temp;
        }
        curr = curr->child[s[i]-'A'];
        
        curr->prefixes ++;  // curr will be a prefix of s
    }
    
    curr->count++;   // string ends at curr
}

ll dfs(node * u, ll k, ll depth) 
{
    
    if(u->prefixes < k)        // if cannot group into sets of k words
        return 0;
    ll ans = 0;
    
    ll here = u->count;                // here = no of strings ending at this node
    for(int i=0; i<26; ++i) 
    {
       
        node * v = u->child[i];          // v is child node
        if(v == NULL)
            continue;
        
        ans += dfs(v, k, depth + 1);         // add child ans
        
        here += (v->prefixes % k);            // add child residues to 'here'
    }
    
    ans += depth * (here / k);         // finally, ans = child_ans + sum of scores of groups formed by strings counted by 'here'
    return ans;
}

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    for(int tc=1; tc<=t; ++tc) 
    {
        ll n, k;
        cin>>n>>k;
        node * trie = newNode();
        for(ll i=0; i<n; ++i) 
        {
            string s;
            cin>>s;
            insert(trie, s);
        }
        ll ans = dfs(trie, k, 0);
        cout<<"Case #"<<tc<<": "<<ans<<endl;
    }    
}
