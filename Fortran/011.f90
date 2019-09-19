program leetcode011
    implicit none
    integer(kind=4),parameter :: arr_size = 9
    integer(kind=4),dimension(arr_size) :: arr = (/1,8,6,2,5,4,8,3,7/)
    integer(kind=4) :: area = 0
    call maxArea(arr,arr_size,area)
    write(*,*) 'The max area is', area
end program leetcode011

subroutine maxArea(arr,arr_size,area)
    implicit none
    integer(kind=4),intent(in) :: arr_size
    integer(kind=4),dimension(arr_size) :: arr
    integer(kind=4) :: area
    integer(kind=4) :: i,j
    i=1
    j=arr_size
    do while(i<j)
        area = max(area,min(arr(i),arr(j))*(j-i))
        if(arr(i)<arr(j))then
            i=i+1
        else
            j=j-1
        end if
    end do
    return
end subroutine maxArea
!gfortran 011.f90
!./a.out
!output 49
