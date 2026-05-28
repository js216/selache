// SPDX-License-Identifier: MIT
// cctest_csmith_8632cb59.c --- cctest case csmith_8632cb59 (csmith seed 2251475801)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x7557e827 */
/* @exp_ticks 0x4be1 */

#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <math.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

static unsigned int crc32_tab[256];
static unsigned int crc32_context = 0xFFFFFFFFUL;

static void crc32_gentab(void)
{
   int i, j;
   unsigned int crc;
   for (i = 0; i < 256; i++) {
      crc = (unsigned int)i;
      for (j = 0; j < 8; j++)
         crc = (crc & 1U) ? ((crc >> 1) ^ 0xEDB88320UL) : (crc >> 1);
      crc32_tab[i] = crc;
   }
}

static void crc32_byte(unsigned char b)
{
   crc32_context = ((crc32_context >> 8) & 0x00FFFFFFUL) ^
                   crc32_tab[(crc32_context ^ (unsigned int)b) & 0xFFU];
}

static void transparent_crc(unsigned long long val, const char *vname, int flag)
{
   int i;
   (void)vname;
   (void)flag;
   for (i = 0; i < 8; i++)
      crc32_byte((unsigned char)((val >> (i * 8)) & 0xFFULL));
}

static void platform_main_begin(void) {}

static int8_t
safe_unary_minus_func_int8_t_s(int8_t si )
{
 
  return
    -si;
}
static int8_t
safe_add_func_int8_t_s_s(int8_t si1, int8_t si2 )
{
 
  return
    (si1 + si2);
}
static int8_t
safe_sub_func_int8_t_s_s(int8_t si1, int8_t si2 )
{
 
  return
    (si1 - si2);
}
static int8_t
safe_mul_func_int8_t_s_s(int8_t si1, int8_t si2 )
{
 
  return
    si1 * si2;
}
static int8_t
safe_mod_func_int8_t_s_s(int8_t si1, int8_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-128)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 % si2);
}
static int8_t
safe_div_func_int8_t_s_s(int8_t si1, int8_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-128)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 / si2);
}
static int8_t
safe_lshift_func_int8_t_s_s(int8_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((127) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static int8_t
safe_lshift_func_int8_t_s_u(int8_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((127) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static int8_t
safe_rshift_func_int8_t_s_s(int8_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :
    (left >> ((int)right));
}
static int8_t
safe_rshift_func_int8_t_s_u(int8_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static int16_t
safe_unary_minus_func_int16_t_s(int16_t si )
{
 
  return
    -si;
}
static int16_t
safe_add_func_int16_t_s_s(int16_t si1, int16_t si2 )
{
 
  return
    (si1 + si2);
}
static int16_t
safe_sub_func_int16_t_s_s(int16_t si1, int16_t si2 )
{
 
  return
    (si1 - si2);
}
static int16_t
safe_mul_func_int16_t_s_s(int16_t si1, int16_t si2 )
{
 
  return
    si1 * si2;
}
static int16_t
safe_mod_func_int16_t_s_s(int16_t si1, int16_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-32767-1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 % si2);
}
static int16_t
safe_div_func_int16_t_s_s(int16_t si1, int16_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-32767-1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 / si2);
}
static int16_t
safe_lshift_func_int16_t_s_s(int16_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((32767) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static int16_t
safe_lshift_func_int16_t_s_u(int16_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((32767) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static int16_t
safe_rshift_func_int16_t_s_s(int16_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :
    (left >> ((int)right));
}
static int16_t
safe_rshift_func_int16_t_s_u(int16_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static int32_t
safe_unary_minus_func_int32_t_s(int32_t si )
{
 
  return
    (si==(-2147483647-1)) ?
    ((si)) :
    -si;
}
static int32_t
safe_add_func_int32_t_s_s(int32_t si1, int32_t si2 )
{
 
  return
    (((si1>0) && (si2>0) && (si1 > ((2147483647)-si2))) || ((si1<0) && (si2<0) && (si1 < ((-2147483647-1)-si2)))) ?
    ((si1)) :
    (si1 + si2);
}
static int32_t
safe_sub_func_int32_t_s_s(int32_t si1, int32_t si2 )
{
 
  return
    (((si1^si2) & (((si1 ^ ((si1^si2) & (~(2147483647))))-si2)^si2)) < 0) ?
    ((si1)) :
    (si1 - si2);
}
static int32_t
safe_mul_func_int32_t_s_s(int32_t si1, int32_t si2 )
{
 
  return
    (((si1 > 0) && (si2 > 0) && (si1 > ((2147483647) / si2))) || ((si1 > 0) && (si2 <= 0) && (si2 < ((-2147483647-1) / si1))) || ((si1 <= 0) && (si2 > 0) && (si1 < ((-2147483647-1) / si2))) || ((si1 <= 0) && (si2 <= 0) && (si1 != 0) && (si2 < ((2147483647) / si1)))) ?
    ((si1)) :
    si1 * si2;
}
static int32_t
safe_mod_func_int32_t_s_s(int32_t si1, int32_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-2147483647-1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 % si2);
}
static int32_t
safe_div_func_int32_t_s_s(int32_t si1, int32_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-2147483647-1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 / si2);
}
static int32_t
safe_lshift_func_int32_t_s_s(int32_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((2147483647) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static int32_t
safe_lshift_func_int32_t_s_u(int32_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((2147483647) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static int32_t
safe_rshift_func_int32_t_s_s(int32_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :
    (left >> ((int)right));
}
static int32_t
safe_rshift_func_int32_t_s_u(int32_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static int64_t
safe_unary_minus_func_int64_t_s(int64_t si )
{
 
  return
    (si==(-9223372036854775807L -1)) ?
    ((si)) :
    -si;
}
static int64_t
safe_add_func_int64_t_s_s(int64_t si1, int64_t si2 )
{
 
  return
    (((si1>0) && (si2>0) && (si1 > ((9223372036854775807L)-si2))) || ((si1<0) && (si2<0) && (si1 < ((-9223372036854775807L -1)-si2)))) ?
    ((si1)) :
    (si1 + si2);
}
static int64_t
safe_sub_func_int64_t_s_s(int64_t si1, int64_t si2 )
{
 
  return
    (((si1^si2) & (((si1 ^ ((si1^si2) & (~(9223372036854775807L))))-si2)^si2)) < 0) ?
    ((si1)) :
    (si1 - si2);
}
static int64_t
safe_mul_func_int64_t_s_s(int64_t si1, int64_t si2 )
{
 
  return
    (((si1 > 0) && (si2 > 0) && (si1 > ((9223372036854775807L) / si2))) || ((si1 > 0) && (si2 <= 0) && (si2 < ((-9223372036854775807L -1) / si1))) || ((si1 <= 0) && (si2 > 0) && (si1 < ((-9223372036854775807L -1) / si2))) || ((si1 <= 0) && (si2 <= 0) && (si1 != 0) && (si2 < ((9223372036854775807L) / si1)))) ?
    ((si1)) :
    si1 * si2;
}
static int64_t
safe_mod_func_int64_t_s_s(int64_t si1, int64_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-9223372036854775807L -1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 % si2);
}
static int64_t
safe_div_func_int64_t_s_s(int64_t si1, int64_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-9223372036854775807L -1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 / si2);
}
static int64_t
safe_lshift_func_int64_t_s_s(int64_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((9223372036854775807L) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static int64_t
safe_lshift_func_int64_t_s_u(int64_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((9223372036854775807L) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static int64_t
safe_rshift_func_int64_t_s_s(int64_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :
    (left >> ((int)right));
}
static int64_t
safe_rshift_func_int64_t_s_u(int64_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static uint8_t
safe_unary_minus_func_uint8_t_u(uint8_t ui )
{
 
  return -ui;
}
static uint8_t
safe_add_func_uint8_t_u_u(uint8_t ui1, uint8_t ui2 )
{
 
  return ui1 + ui2;
}
static uint8_t
safe_sub_func_uint8_t_u_u(uint8_t ui1, uint8_t ui2 )
{
 
  return ui1 - ui2;
}
static uint8_t
safe_mul_func_uint8_t_u_u(uint8_t ui1, uint8_t ui2 )
{
 
  return ((unsigned int)ui1) * ((unsigned int)ui2);
}
static uint8_t
safe_mod_func_uint8_t_u_u(uint8_t ui1, uint8_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 % ui2);
}
static uint8_t
safe_div_func_uint8_t_u_u(uint8_t ui1, uint8_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 / ui2);
}
static uint8_t
safe_lshift_func_uint8_t_u_s(uint8_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((255) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static uint8_t
safe_lshift_func_uint8_t_u_u(uint8_t left, unsigned int right )
{
 
  return
    ((((unsigned int)right) >= 32) || (left > ((255) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static uint8_t
safe_rshift_func_uint8_t_u_s(uint8_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :
    (left >> ((int)right));
}
static uint8_t
safe_rshift_func_uint8_t_u_u(uint8_t left, unsigned int right )
{
 
  return
    (((unsigned int)right) >= 32) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static uint16_t
safe_unary_minus_func_uint16_t_u(uint16_t ui )
{
 
  return -ui;
}
static uint16_t
safe_add_func_uint16_t_u_u(uint16_t ui1, uint16_t ui2 )
{
 
  return ui1 + ui2;
}
static uint16_t
safe_sub_func_uint16_t_u_u(uint16_t ui1, uint16_t ui2 )
{
 
  return ui1 - ui2;
}
static uint16_t
safe_mul_func_uint16_t_u_u(uint16_t ui1, uint16_t ui2 )
{
 
  return ((unsigned int)ui1) * ((unsigned int)ui2);
}
static uint16_t
safe_mod_func_uint16_t_u_u(uint16_t ui1, uint16_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 % ui2);
}
static uint16_t
safe_div_func_uint16_t_u_u(uint16_t ui1, uint16_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 / ui2);
}
static uint16_t
safe_lshift_func_uint16_t_u_s(uint16_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((65535) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static uint16_t
safe_lshift_func_uint16_t_u_u(uint16_t left, unsigned int right )
{
 
  return
    ((((unsigned int)right) >= 32) || (left > ((65535) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static uint16_t
safe_rshift_func_uint16_t_u_s(uint16_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :
    (left >> ((int)right));
}
static uint16_t
safe_rshift_func_uint16_t_u_u(uint16_t left, unsigned int right )
{
 
  return
    (((unsigned int)right) >= 32) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static uint32_t
safe_unary_minus_func_uint32_t_u(uint32_t ui )
{
 
  return -ui;
}
static uint32_t
safe_add_func_uint32_t_u_u(uint32_t ui1, uint32_t ui2 )
{
 
  return ui1 + ui2;
}
static uint32_t
safe_sub_func_uint32_t_u_u(uint32_t ui1, uint32_t ui2 )
{
 
  return ui1 - ui2;
}
static uint32_t
safe_mul_func_uint32_t_u_u(uint32_t ui1, uint32_t ui2 )
{
 
  return ((unsigned int)ui1) * ((unsigned int)ui2);
}
static uint32_t
safe_mod_func_uint32_t_u_u(uint32_t ui1, uint32_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 % ui2);
}
static uint32_t
safe_div_func_uint32_t_u_u(uint32_t ui1, uint32_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 / ui2);
}
static uint32_t
safe_lshift_func_uint32_t_u_s(uint32_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((4294967295U) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static uint32_t
safe_lshift_func_uint32_t_u_u(uint32_t left, unsigned int right )
{
 
  return
    ((((unsigned int)right) >= 32) || (left > ((4294967295U) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static uint32_t
safe_rshift_func_uint32_t_u_s(uint32_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :
    (left >> ((int)right));
}
static uint32_t
safe_rshift_func_uint32_t_u_u(uint32_t left, unsigned int right )
{
 
  return
    (((unsigned int)right) >= 32) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static uint64_t
safe_unary_minus_func_uint64_t_u(uint64_t ui )
{
 
  return -ui;
}
static uint64_t
safe_add_func_uint64_t_u_u(uint64_t ui1, uint64_t ui2 )
{
 
  return ui1 + ui2;
}
static uint64_t
safe_sub_func_uint64_t_u_u(uint64_t ui1, uint64_t ui2 )
{
 
  return ui1 - ui2;
}
static uint64_t
safe_mul_func_uint64_t_u_u(uint64_t ui1, uint64_t ui2 )
{
 
  return ((unsigned long long)ui1) * ((unsigned long long)ui2);
}
static uint64_t
safe_mod_func_uint64_t_u_u(uint64_t ui1, uint64_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 % ui2);
}
static uint64_t
safe_div_func_uint64_t_u_u(uint64_t ui1, uint64_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 / ui2);
}
static uint64_t
safe_lshift_func_uint64_t_u_s(uint64_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((18446744073709551615UL) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static uint64_t
safe_lshift_func_uint64_t_u_u(uint64_t left, unsigned int right )
{
 
  return
    ((((unsigned int)right) >= 32) || (left > ((18446744073709551615UL) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static uint64_t
safe_rshift_func_uint64_t_u_s(uint64_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :
    (left >> ((int)right));
}
static uint64_t
safe_rshift_func_uint64_t_u_u(uint64_t left, unsigned int right )
{
 
  return
    (((unsigned int)right) >= 32) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static float
safe_add_func_float_f_f(float sf1, float sf2 )
{
 
  return
    (fabsf((0.5f * sf1) + (0.5f * sf2)) > (0.5f * FLT_MAX)) ?
    (sf1) :
    (sf1 + sf2);
}
static float
safe_sub_func_float_f_f(float sf1, float sf2 )
{
 
  return
    (fabsf((0.5f * sf1) - (0.5f * sf2)) > (0.5f * FLT_MAX)) ?
    (sf1) :
    (sf1 - sf2);
}
static float
safe_mul_func_float_f_f(float sf1, float sf2 )
{
 
  return
    (fabsf((0x1.0p-100f * sf1) * (0x1.0p-28f * sf2)) > (0x1.0p-100f * (0x1.0p-28f * FLT_MAX))) ?
    (sf1) :
    (sf1 * sf2);
}
static float
safe_div_func_float_f_f(float sf1, float sf2 )
{
 
  return
    ((fabsf(sf2) < 1.0f) && (((sf2 == 0.0f) || (fabsf((0x1.0p-49f * sf1) / (0x1.0p100f * sf2))) > (0x1.0p-100f * (0x1.0p-49f * FLT_MAX))))) ?
    (sf1) :
    (sf1 / sf2);
}
static double
safe_add_func_double_f_f(double sf1, double sf2 )
{
 
  return
    (fabs((0.5 * sf1) + (0.5 * sf2)) > (0.5 * DBL_MAX)) ?
    (sf1) :
    (sf1 + sf2);
}
static double
safe_sub_func_double_f_f(double sf1, double sf2 )
{
 
  return
    (fabs((0.5 * sf1) - (0.5 * sf2)) > (0.5 * DBL_MAX)) ?
    (sf1) :
    (sf1 - sf2);
}
static double
safe_mul_func_double_f_f(double sf1, double sf2 )
{
 
  return
    (fabs((0x1.0p-100 * sf1) * (0x1.0p-924 * sf2)) > (0x1.0p-100 * (0x1.0p-924 * DBL_MAX))) ?
    (sf1) :
    (sf1 * sf2);
}
static double
safe_div_func_double_f_f(double sf1, double sf2 )
{
 
  return
    ((fabs(sf2) < 1.0) && (((sf2 == 0.0) || (fabs((0x1.0p-974 * sf1) / (0x1.0p100 * sf2))) > (0x1.0p-100 * (0x1.0p-974 * DBL_MAX))))) ?
    (sf1) :
    (sf1 / sf2);
}
static int32_t
safe_convert_func_float_to_int32_t(float sf1 )
{
 
  return
    ((sf1 <= (-2147483647-1)) || (sf1 >= (2147483647))) ?
    ((2147483647)) :
    ((int32_t)(sf1));
}

// Options:   -s 2251475801 -o /tmp/csmith_gen_ifum_lxc/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S0 {
   int32_t  f0;
   int32_t  f1;
   uint64_t  f2;
   int32_t  f3;
   int64_t  f4;
   int32_t  f5;
};

union U1 {
   uint8_t  f0;
   uint32_t  f1;
};

union U2 {
   int16_t  f0;
   struct S0  f1;
   uint32_t  f2;
};


static uint16_t g_29[3][4][4] = {{{0x6EBBL,0x752BL,0x6EBBL,1UL},{0x4D81L,0x752BL,1UL,0xAD0DL},{0x752BL,0xCC72L,0xCC72L,0x752BL},{0x6EBBL,0xAD0DL,0xCC72L,1UL}},{{0x752BL,0x4D81L,1UL,0x4D81L},{0x4D81L,0xCC72L,0x6EBBL,0x4D81L},{0x6EBBL,0x4D81L,1UL,1UL},{0xAD0DL,0xAD0DL,1UL,0x752BL}},{{0xAD0DL,0xCC72L,1UL,0xAD0DL},{0x6EBBL,0x752BL,0x6EBBL,1UL},{0x4D81L,0x752BL,1UL,0xAD0DL},{0x752BL,0xCC72L,1UL,0xCC72L}}};
static uint32_t g_52 = 0x81B93497L;
static uint16_t g_61 = 65529UL;
static int32_t g_72 = 0x4BEE77D7L;
static uint16_t g_73 = 0x447BL;
static int16_t g_85 = 9L;
static uint64_t g_86 = 2UL;
static uint32_t g_103 = 1UL;
static struct S0 g_105 = {0x846250C5L,0xEEEE7CDAL,0xB21999CB80B1A2B5LL,0x84CD6134L,-2L,0x05660F8DL};
static uint32_t g_113 = 4294967295UL;
static int32_t g_166[4] = {0L,0L,0L,0L};
static uint16_t g_167[5] = {0x7BF9L,0x7BF9L,0x7BF9L,0x7BF9L,0x7BF9L};
static int32_t g_207[3] = {5L,5L,5L};
static union U1 g_225 = {255UL};
static struct S0 g_232 = {-4L,-1L,18446744073709551609UL,0xA88FC1CAL,0L,0xCC1243A7L};



static int32_t  func_1(void);
static int16_t  func_5(int32_t  p_6, int32_t  p_7, int16_t  p_8, int32_t  p_9, int16_t  p_10);
static struct S0  func_15(uint16_t  p_16, uint64_t  p_17, uint16_t  p_18, uint8_t  p_19, uint32_t  p_20);
static const int64_t  func_25(uint32_t  p_26);




static int32_t  func_1(void)
{ 
    int32_t l_4 = 0x85FAAFE3L;
    union U2 l_27 = {-1L};
    uint16_t l_30[2];
    const union U2 l_131 = {0xD02FL};
    int32_t l_212 = 0xAA7DFBDDL;
    uint32_t l_226 = 0UL;
    union U1 l_231 = {0UL};
    int i;
    for (i = 0; i < 2; i++)
        l_30[i] = 2UL;
    l_212 = (l_27.f1.f1 = ((l_4 < (func_5((g_72 ^= ((((safe_mod_func_uint16_t_u_u(l_4, (safe_add_func_int32_t_s_s(((func_15((safe_add_func_int8_t_s_s(0L, (safe_mul_func_int16_t_s_s((func_25((l_27 , l_4)) != g_29[1][1][3]), l_4)))), l_27.f0, l_4, g_29[2][2][3], l_30[0]) , l_131) , g_105.f1), l_30[0])))) > 0L) ^ l_27.f0) | g_105.f1)), l_30[0], g_105.f1, g_105.f1, l_30[0]) > g_207[2])) && 1UL));
    for (g_105.f1 = 0; (g_105.f1 >= (-20)); g_105.f1 = safe_sub_func_uint32_t_u_u(g_105.f1, 7))
    { 
        int64_t l_219[2][5] = {{0x54A653397D4F8AA3LL,0x54A653397D4F8AA3LL,0x54A653397D4F8AA3LL,0x54A653397D4F8AA3LL,0x54A653397D4F8AA3LL},{0x2049661D303672CFLL,0x2049661D303672CFLL,0x2049661D303672CFLL,0x2049661D303672CFLL,0x2049661D303672CFLL}};
        int32_t l_233 = (-8L);
        int32_t l_234 = 7L;
        int32_t l_235[3];
        uint16_t l_236[2];
        int i, j;
        for (i = 0; i < 3; i++)
            l_235[i] = 0L;
        for (i = 0; i < 2; i++)
            l_236[i] = 0xF1C1L;
        l_27.f1.f1 = (safe_mul_func_int16_t_s_s((safe_lshift_func_uint8_t_u_u(g_105.f5, 4)), (l_219[0][1] || ((((safe_add_func_int16_t_s_s((l_226 = (safe_div_func_int64_t_s_s((~((g_225 , (l_131.f0 >= g_105.f5)) ^ g_113)), 0xA02EE29DF94D2B49LL))), l_219[0][1])) && 0x86L) , g_29[1][1][3]) == g_166[2]))));
        g_232 = func_15((safe_add_func_int32_t_s_s((safe_mod_func_uint16_t_u_u(l_219[0][2], (((((l_30[1] || ((g_225.f0 = (l_231 , ((-1L) < 0xD89AL))) ^ l_27.f0)) != g_105.f3) | 1UL) != 0UL) | g_85))), 0x244690C4L)), g_166[3], l_219[0][1], l_219[0][1], g_167[1]);
        ++l_236[0];
    }
    return g_225.f0;
}



static int16_t  func_5(int32_t  p_6, int32_t  p_7, int16_t  p_8, int32_t  p_9, int16_t  p_10)
{ 
    const int8_t l_136 = 0x5FL;
    int32_t l_137 = 0xDD3C1BD1L;
    int32_t l_146 = (-1L);
    int32_t l_147[4][1][3] = {{{0xD6E2808CL,0xD6E2808CL,0x1747DCE0L}},{{0xD6E2808CL,0xD6E2808CL,0x1747DCE0L}},{{0xD6E2808CL,0xD6E2808CL,0x1747DCE0L}},{{0xD6E2808CL,0xD6E2808CL,0x1747DCE0L}}};
    uint16_t l_148[2][4][5] = {{{0x956BL,0x858DL,1UL,1UL,1UL},{1UL,0UL,1UL,1UL,0UL},{7UL,0UL,8UL,0x956BL,65535UL},{1UL,0x858DL,1UL,0xE93CL,7UL}},{{0UL,65535UL,8UL,65535UL,0UL},{2UL,0x956BL,1UL,65535UL,0xE93CL},{65535UL,2UL,1UL,0xE93CL,65534UL},{8UL,1UL,0xE93CL,0x956BL,0xE93CL}}};
    int32_t l_159 = (-2L);
    uint32_t l_160 = 0xFBA643C3L;
    union U1 l_201 = {1UL};
    int i, j, k;
    l_137 = (safe_mul_func_uint16_t_u_u(((g_85 | ((g_113++) && l_136)) > 1L), (0x0C7566D79C76D5E0LL < l_136)));
    if ((safe_rshift_func_uint8_t_u_s((l_147[3][0][2] = (0xA2378118L <= (safe_div_func_int16_t_s_s((safe_div_func_uint8_t_u_u((l_146 = (safe_mul_func_uint16_t_u_u((l_148[0][3][1]++), 65531UL))), (safe_sub_func_int64_t_s_s(g_86, (safe_sub_func_int32_t_s_s(((((~(((((safe_mod_func_int16_t_s_s((((((((!(p_8 || l_159)) , 0x3CL) | l_160) < l_147[3][0][1]) || 0xAC48L) , 0xDAFFA73DL) != g_105.f1), l_159)) && g_73) , l_147[2][0][1]) & l_147[2][0][1]) == (-1L))) & l_137) || 0x1FL) < g_29[0][3][3]), 4294967295UL)))))), p_10)))), 7)))
    { 
        int64_t l_163 = 0xBE22E70253244882LL;
        for (g_73 = 0; g_73 < 2; g_73 += 1)
        {
            for (p_9 = 0; p_9 < 4; p_9 += 1)
            {
                for (g_86 = 0; g_86 < 5; g_86 += 1)
                {
                    l_148[g_73][p_9][g_86] = 0UL;
                }
            }
        }
        for (g_105.f3 = 0; (g_105.f3 != 18); ++g_105.f3)
        { 
            int16_t l_164 = 0x3E68L;
            int32_t l_165 = 0xA699A93FL;
            uint32_t l_172 = 0x7C7BD3F7L;
            if (l_163)
                break;
            ++g_167[1];
            for (g_105.f0 = 0; (g_105.f0 != 21); g_105.f0 = safe_add_func_uint64_t_u_u(g_105.f0, 3))
            { 
                l_172--;
                if (p_9)
                    break;
            }
        }
    }
    else
    { 
        uint8_t l_187 = 0xD0L;
        int32_t l_192 = 0L;
        int32_t l_195 = (-1L);
        g_105.f3 = (g_105.f3 ^ (safe_add_func_int8_t_s_s((safe_div_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_u((safe_div_func_uint16_t_u_u((((safe_rshift_func_uint16_t_u_s(0x27E3L, 6)) <= (8L < 0x60ACL)) ^ p_9), l_187)), 6)), 1UL)), p_10)));
        for (g_61 = (-26); (g_61 < 27); g_61 = safe_add_func_uint64_t_u_u(g_61, 6))
        { 
            int32_t l_204 = 0x4AC7B0F3L;
            int16_t l_205 = 0L;
            int32_t l_206 = (-8L);
            uint32_t l_211 = 18446744073709551615UL;
            l_192 = (safe_sub_func_int8_t_s_s(l_148[0][3][1], 0x80L));
            g_105.f1 &= (l_195 = (safe_lshift_func_uint16_t_u_u(0xE0F0L, 6)));
            if (((((safe_sub_func_int8_t_s_s(0x4FL, ((((safe_div_func_uint8_t_u_u((g_29[0][3][3] | (~(((l_201 , (safe_sub_func_uint8_t_u_u(((g_105.f2 > 0x8D21F102E53A4A4FLL) & l_148[1][3][2]), 1L))) != l_204) ^ g_103))), p_10)) <= l_192) , p_8) | p_9))) > (-3L)) < 1UL) , l_204))
            { 
                if (p_7)
                    break;
            }
            else
            { 
                uint64_t l_208 = 4UL;
                if (g_113)
                    break;
                ++l_208;
                if (l_211)
                    continue;
            }
        }
    }
    return l_136;
}



static struct S0  func_15(uint16_t  p_16, uint64_t  p_17, uint16_t  p_18, uint8_t  p_19, uint32_t  p_20)
{ 
    uint64_t l_50[4][2];
    int32_t l_70 = 0x1A09BBF7L;
    struct S0 l_71 = {0L,0xDC57991EL,0x5052BDF33D83399FLL,1L,0x6262DCCEB0059F0ALL,0L};
    uint8_t l_77 = 0xDDL;
    int i, j;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 2; j++)
            l_50[i][j] = 0x60EC253D5AB883EBLL;
    }
    for (p_16 = 0; (p_16 <= 2); p_16 += 1)
    { 
        int16_t l_49 = 0x27DBL;
        int16_t l_51 = 0x6DC7L;
        int32_t l_59[1][5] = {{0x62BAD2CCL,0x62BAD2CCL,0x62BAD2CCL,0x62BAD2CCL,0x62BAD2CCL}};
        const struct S0 l_82 = {0L,5L,18446744073709551614UL,0x9AC9426BL,5L,0xF42E135DL};
        union U2 l_104 = {-7L};
        int i, j;
        if ((safe_rshift_func_uint16_t_u_s((safe_add_func_uint32_t_u_u(((((p_18 = (safe_sub_func_uint8_t_u_u(g_29[1][1][3], (safe_mul_func_uint16_t_u_u(((((safe_lshift_func_uint16_t_u_s((safe_add_func_uint64_t_u_u(p_16, (safe_div_func_uint16_t_u_u(p_19, (safe_add_func_uint32_t_u_u(((safe_rshift_func_int16_t_s_u((((l_49 = (65535UL >= p_16)) <= l_50[0][0]) < l_50[1][0]), g_29[1][1][0])) | p_16), (-5L))))))), l_50[0][0])) || (-10L)) || l_49) | l_51), g_29[1][1][3]))))) == 0x18F7L) , 255UL) ^ g_29[0][0][2]), l_50[3][1])), 10)))
        { 
            struct S0 l_53 = {-1L,0x358DB2EDL,0xD6825D0BC5DE30EALL,1L,0x75688AFC007DFDCBLL,5L};
            uint8_t l_60[3];
            int i;
            for (i = 0; i < 3; i++)
                l_60[i] = 1UL;
            for (p_18 = 0; (p_18 <= 2); p_18 += 1)
            { 
                struct S0 l_54 = {1L,0x11B4C510L,0xD7EBC4D5916FF7DDLL,3L,0xBCDA4F1DFBA308D5LL,1L};
                g_52 = p_16;
                l_54 = l_53;
            }
            g_61 &= (((((7L | (safe_mul_func_uint16_t_u_u(l_50[3][1], l_53.f1))) <= ((l_59[0][1] = ((g_29[2][3][1] = ((safe_rshift_func_uint16_t_u_u(((l_50[2][1] , 0xBC8B8ECDL) , g_29[0][2][0]), 7)) > g_29[1][1][3])) == 0x818AL)) & g_52)) <= l_50[0][0]) & l_60[2]) != l_49);
        }
        else
        { 
            int32_t l_62 = 0x798E375BL;
            if ((0x3DL || (g_29[1][1][3] ^ ((((l_62 ^= p_19) || (safe_add_func_int64_t_s_s(((((g_61 < 0xF1E5685FL) | 1UL) ^ l_59[0][0]) < 8UL), 18446744073709551615UL))) , 7UL) != g_29[1][1][3]))))
            { 
                l_70 = (((safe_sub_func_int64_t_s_s((g_29[1][3][3] <= ((safe_unary_minus_func_uint8_t_u((safe_div_func_uint16_t_u_u(0xE041L, 0xCD5FL)))) == g_61)), l_50[1][1])) && p_16) , 0xCC227AF4L);
                return l_71;
            }
            else
            { 
                uint64_t l_76[1][2][5];
                int32_t l_78 = 0xE68117D1L;
                int i, j, k;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 2; j++)
                    {
                        for (k = 0; k < 5; k++)
                            l_76[i][j][k] = 3UL;
                    }
                }
                g_73++;
                l_78 = ((p_16 | ((l_76[0][1][2] & (l_76[0][0][2] > g_29[1][1][3])) | l_77)) > p_19);
            }
            l_59[0][1] = ((safe_sub_func_int8_t_s_s((~((l_71.f0 = l_71.f1) < ((l_82 , ((safe_sub_func_int64_t_s_s((p_18 > l_62), l_62)) == 18446744073709551609UL)) | 0x3DADL))), g_52)) & 4294967288UL);
            l_71.f0 ^= 0x836DABD8L;
        }
        ++g_86;
        for (g_86 = 0; (g_86 <= 2); g_86 += 1)
        { 
            int64_t l_106[5][1][5] = {{{2L,(-1L),(-1L),2L,0x54D08331434A8DDDLL}},{{0L,9L,9L,0L,0x561D2E7F170005B7LL}},{{2L,(-1L),(-1L),2L,0x54D08331434A8DDDLL}},{{0L,9L,9L,0L,0x561D2E7F170005B7LL}},{{2L,(-1L),(-1L),2L,0x54D08331434A8DDDLL}}};
            int32_t l_110 = (-1L);
            int32_t l_111 = (-4L);
            int i, j, k;
            if ((((safe_lshift_func_int16_t_s_u((((((safe_unary_minus_func_int16_t_s((!(safe_mod_func_int8_t_s_s((safe_add_func_int64_t_s_s((p_18 & (g_103 = (((safe_div_func_uint16_t_u_u((safe_sub_func_int8_t_s_s((safe_mul_func_uint8_t_u_u(p_18, (1UL ^ p_20))), g_29[1][2][1])), p_18)) , 0L) || l_77))), p_20)), p_16))))) , l_104) , 3UL) != g_73) || p_16), 14)) >= 1UL) || 0xB8L))
            { 
                l_104.f1.f3 = 0xB27BD0F6L;
                return g_105;
            }
            else
            { 
                uint32_t l_107 = 0x56CCD6F8L;
                int32_t l_112 = (-2L);
                --l_107;
                --g_113;
            }
            for (l_51 = 0; (l_51 <= 2); l_51 += 1)
            { 
                int64_t l_119 = (-1L);
                l_59[0][1] |= (g_105.f0 = (safe_mod_func_int32_t_s_s((((g_105.f2 = l_106[4][0][4]) < (!p_19)) == (l_110 |= l_119)), g_29[1][1][3])));
            }
            for (l_104.f0 = 0; (l_104.f0 <= 2); l_104.f0 += 1)
            { 
                uint8_t l_125[4][1];
                int8_t l_130 = 0x8DL;
                int i, j;
                for (i = 0; i < 4; i++)
                {
                    for (j = 0; j < 1; j++)
                        l_125[i][j] = 0x50L;
                }
                l_70 |= (!((((+p_19) ^ ((l_59[0][1] = (safe_mod_func_uint32_t_u_u((safe_unary_minus_func_int16_t_s(l_125[1][0])), l_71.f1))) && (safe_mul_func_int8_t_s_s((l_71.f0 = (safe_div_func_uint64_t_u_u((l_125[3][0] , g_105.f1), 0xAC6DB221B169A602LL))), g_105.f4)))) <= l_130) && g_105.f4));
                g_105.f3 &= l_77;
                if (g_105.f5)
                    continue;
            }
        }
    }
    return g_105;
}



static const int64_t  func_25(uint32_t  p_26)
{ 
    struct S0 l_28 = {7L,-9L,3UL,0xAA12AFD7L,1L,8L};
    l_28 = l_28;
    return p_26;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_29[i][j][k], "g_29[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_52, "g_52", print_hash_value);
    transparent_crc(g_61, "g_61", print_hash_value);
    transparent_crc(g_72, "g_72", print_hash_value);
    transparent_crc(g_73, "g_73", print_hash_value);
    transparent_crc(g_85, "g_85", print_hash_value);
    transparent_crc(g_86, "g_86", print_hash_value);
    transparent_crc(g_103, "g_103", print_hash_value);
    transparent_crc(g_105.f0, "g_105.f0", print_hash_value);
    transparent_crc(g_105.f1, "g_105.f1", print_hash_value);
    transparent_crc(g_105.f2, "g_105.f2", print_hash_value);
    transparent_crc(g_105.f3, "g_105.f3", print_hash_value);
    transparent_crc(g_105.f4, "g_105.f4", print_hash_value);
    transparent_crc(g_105.f5, "g_105.f5", print_hash_value);
    transparent_crc(g_113, "g_113", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_166[i], "g_166[i]", print_hash_value);

    }
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_167[i], "g_167[i]", print_hash_value);

    }
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_207[i], "g_207[i]", print_hash_value);

    }
    transparent_crc(g_225.f0, "g_225.f0", print_hash_value);
    transparent_crc(g_232.f0, "g_232.f0", print_hash_value);
    transparent_crc(g_232.f1, "g_232.f1", print_hash_value);
    transparent_crc(g_232.f2, "g_232.f2", print_hash_value);
    transparent_crc(g_232.f3, "g_232.f3", print_hash_value);
    transparent_crc(g_232.f4, "g_232.f4", print_hash_value);
    transparent_crc(g_232.f5, "g_232.f5", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
