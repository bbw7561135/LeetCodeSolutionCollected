program leetcode01
    implicit none
    integer(kind=4) :: i,j,targetnum
    integer(kind=4),parameter :: numsize = 4 !size of array
    integer(kind=4),dimension(numsize) :: arr = (/2,7,11,15/) !input array
    integer(kind=4),dimension(2) :: ind = (/0,0/) !store the index
!    integer(kind=4) :: i,j
!    do i=1,numsize
!        write(*,*) arr(i)
!    end do
     targetnum = 9
     call two_sum(arr,ind,numsize,targetnum)
     do i=1,2
        write(*,*) ind(i)
     end do
end program leetcode01

subroutine two_sum(arr,ind,numsize,targetnum)
    implicit none
    integer(kind=4), intent(in) :: numsize
    integer(kind=4), dimension(numsize) :: arr
    integer(kind=4), dimension(2) :: ind
    integer(kind=4) :: i,j,targetnum
    outer: do i=1,numsize
        inner: do j=i+1,numsize
                    if (arr(i)+arr(j)==targetnum) then
                        ind(1)=i
                        ind(2)=j
                    end if
        end do inner
    end do outer
    return
end subroutine two_sum
!gfortran 001.f90
!./a.out
!output 1 2 
!index in fortran begin with 1
