from fractions import *
def gcd(a, b):
    while b:      
        a, b = b, a % b
    return a
    
def lcm(a, b):
    return a * b // gcd(a, b)

def lcmm(l):
		return reduce(lambda x, y: lcm(x, y), l)
   
def multi(a,b):
    zip_b = zip(*b)
    return [[sum(ele_a*ele_b for ele_a, ele_b in zip(row_a, col_b)) 
             for col_b in zip_b] for row_a in a]

def mattrans(m):
    t = []
    for r in range(len(m)):
        tR = []
        for c in range(len(m[r])):
            if c == r:
                tR.append(m[r][c])
            else:
                tR.append(m[c][r])
        t.append(tR)
    return t

def matminor(m,i,j):
    return [row[:j] + row[j+1:] for row in (m[:i]+m[i+1:])]

def matdet(m):
    if len(m) == 2:
        return m[0][0]*m[1][1]-m[0][1]*m[1][0]

    determinant = 0
    for c in range(len(m)):
        determinant += ((-1)**c)*m[0][c]*matdet(matminor(m,0,c))
    return determinant

def matinv(m):
    determinant = matdet(m)
    if len(m) == 2:
        return [[m[1][1]/determinant, -1*m[0][1]/determinant],
                [-1*m[1][0]/determinant, m[0][0]/determinant]]

    cofactors = []
    for r in range(len(m)):
        cofactorRow = []
        for c in range(len(m)):
            minor = matminor(m,r,c)
            cofactorRow.append(((-1)**(r+c)) * matdet(minor))
        cofactors.append(cofactorRow)
    cofactors = mattrans(cofactors)
    for r in range(len(cofactors)):
        for c in range(len(cofactors)):
            cofactors[r][c] = cofactors[r][c]/determinant
    return cofactors

def solution(m):
	if len(m) == 1:
		return [1,1]
	absorb = []
	nonabsorb = []
	for ind, val in enumerate(m):
		if sum(val) == 0:
			absorb.append(ind)
		else:
			nonabsorb.append(ind)
	
	if len(absorb) == 1:
		return [1,1]

	order = absorb + nonabsorb
	limM = []
	n = 0
	for i in absorb:
		limM.append(m[i])
		limM[n][n] = 1
		n += 1
	
	for i in nonabsorb:
		temp, temp2 = [], []
		for n in order:
			temp.append(m[i][n])
		for ind, val in enumerate(temp):
			temp2.append(Fraction(val, sum(temp) ))  
		limM.append(temp2)
	
	I, R, Q = [], [], []

	for p in range(len(absorb),len(limM)):
		R.append(limM[p][:len(absorb)])
		Q.append(limM[p][len(absorb):])
		
	for u in range(0, len(Q)):
		temp = [0] * len(Q)
		temp[u] = 1
		I.append(temp)

	IQ = []
	for p in range(0, len(I)):
		temp = []
		for o in range(0, len(I[0])):
			temp.append(I[p][o]-Q[p][o])
		IQ.append(temp)

	F = matinv(IQ)
	
	FR = multi(F,R)
	
	alm = []
	for i in FR[0]:
		alm.append([i.numerator, i.denominator])
	
	lcm1 = lcmm([i[1] for i in alm])
	
	ende = [ (lcm1/i[1]) * i[0] for i in alm ]
	return ende + [lcm1]

