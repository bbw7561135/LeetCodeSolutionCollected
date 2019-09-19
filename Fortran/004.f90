program leetcode04
    implicit none
    integer(kind=4),parameter :: a_size=2
    integer(kind=4),parameter :: b_size=2
    integer(kind=4),dimension(a_size) :: a = (/1,2/) !input array
    integer(kind=4),dimension(b_size) :: b = (/3,4/) !store the index
    real(kind=8) :: mediannum = 0.0
    call median_num(a,a_size,b,b_size,mediannum)
    write(*,*) 'The median number is', mediannum
end program leetcode04

subroutine median_num(a,a_size,b,b_size,mediannum)
    implicit none
    integer(kind=4),intent(in) :: a_size
    integer(kind=4),intent(in) :: b_size
    integer(kind=4),dimension(a_size) :: a 
    integer(kind=4),dimension(b_size) :: b 
    real(kind=8),intent(out):: mediannum
    integer(kind=4) :: i=1,j=1,k=1 !begin from 1 not 0. use a(0) will lead to memory error
    integer(kind=4),dimension(a_size+b_size) :: c
    do while(j<=b_size .and. i<=a_size)
        if(a(i)<b(j))then
            c(k)=a(i)
            i=i+1
            k=k+1
        else
            c(k)=b(j)
            j=j+1
            k=k+1
        end if
    end do
    !at this moment either j=b_size+1 or i=a_size+1
    do while(i<=a_size)
        c(k)=a(i)
        i=i+1
        k=k+1
    end do
    !deal with the left array in a or b
    do while(j<=b_size)
        c(k)=b(j)
        j=j+1
        k=k+1
    end do
!    mediannum =126
    if(mod(a_size+b_size,2)==0)then
        mediannum = (c((a_size+b_size)/2) + c((a_size+b_size)/2+1))*0.5
    else
        mediannum = c((a_size+b_size)/2+1)
    end if
    
    return
end subroutine median_num
!gfortran 004.f90
!./a.out
!output 2.5
