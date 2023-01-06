************************ Valid Square *************************************
class Solution {
public:
    double calDist(int x1,int x2,int y1,int y2){
        return sqrt((y2-y1)*(y2-y1)+((x2-x1)*(x2-x1)));
    }
    bool validSquare(vector<int>& p1, vector<int>& p2, vector<int>& p3, vector<int>& p4) {
        set<double> s;
        double dist=0;
        
        dist=calDist(p1[0],p2[0],p1[1],p2[1]);
        if(dist==0) return false;
        else s.insert(dist);
        
        dist=calDist(p1[0],p3[0],p1[1],p3[1]);
        if(dist==0) return false;
        else s.insert(dist);
        
        dist=calDist(p1[0],p4[0],p1[1],p4[1]);
        if(dist==0) return false;
        else s.insert(dist);
        
        dist=calDist(p2[0],p3[0],p2[1],p3[1]);
        if(dist==0) return false;
        else s.insert(dist);
        
        dist=calDist(p2[0],p4[0],p2[1],p4[1]);
        if(dist==0) return false;
        else s.insert(dist);
        
        dist=calDist(p3[0],p4[0],p3[1],p4[1]);
        if(dist==0) return false;
        else s.insert(dist);
       
        
        if(s.size()==2) return true;
        
        return false;
    }
};