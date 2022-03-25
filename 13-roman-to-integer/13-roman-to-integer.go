var m = map[uint8] int{
    'I':1,
    'V':5,
    'X':10,
    'L':50,
    'C':100,
    'D':500,
    'M':1000,
}


func romanToInt(s string) int {
    
    var result, prev int
    
    for i:=len(s)-1; i>= 0; i-- {
        v := m[s[i]]
    
        if v < prev {
            result -= v
        } else {
            result += v
        }
        prev = v
    }
    
    return result
}