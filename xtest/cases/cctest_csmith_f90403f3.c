// SPDX-License-Identifier: MIT
// cctest_csmith_f90403f3.c --- cctest case csmith_f90403f3 (csmith seed 4177789939)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x4f6536f5 */

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

// Options:   -s 4177789939 -o /tmp/csmith_gen_rrg3tz37/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   int64_t  f0;
   uint32_t  f1;
   int64_t  f2;
};
#pragma pack(pop)

#pragma pack(push)
#pragma pack(1)
struct S1 {
   int32_t  f0;
   uint32_t  f1;
   const int32_t  f2;
   const int16_t  f3;
   int16_t  f4;
   uint32_t  f5;
};
#pragma pack(pop)

union U2 {
   struct S0  f0;
   const struct S1  f1;
   uint64_t  f2;
   uint64_t  f3;
};


static int32_t g_2[1] = {0x543BEB71L};
static uint8_t g_8 = 0x01L;
static struct S0 g_28 = {1L,1UL,4L};
static int32_t g_62 = (-5L);
static int16_t g_68 = 0L;
static uint32_t g_112 = 9UL;
static int8_t g_119[2] = {1L,1L};
static struct S1 g_138 = {-1L,18446744073709551609UL,0xB787705AL,8L,0x6616L,0x90C650DFL};
static uint8_t g_146 = 0x03L;
static int32_t g_150 = (-4L);
static uint32_t g_153[3] = {4294967295UL,4294967295UL,4294967295UL};
static int8_t g_182 = (-3L);
static int32_t g_184 = 0xE4DD1CC3L;
static uint32_t g_186 = 0x2FE48773L;
static int64_t g_189[4][5] = {{0L,0L,0L,0L,0L},{2L,0x2C3757FDF31BD2F7LL,2L,0x2C3757FDF31BD2F7LL,2L},{0L,0L,0L,0L,0L},{2L,0x2C3757FDF31BD2F7LL,2L,0x2C3757FDF31BD2F7LL,2L}};



static int32_t  func_1(void);
static int32_t  func_5(const int32_t  p_6, int8_t  p_7);
static int64_t  func_13(int8_t  p_14, int16_t  p_15, uint16_t  p_16, uint8_t  p_17);
static union U2  func_18(uint16_t  p_19, uint32_t  p_20, int8_t  p_21, struct S1  p_22);




static int32_t  func_1(void)
{ 
    int64_t l_9 = 0x41E4F1F13B01D91ELL;
    int8_t l_201 = 1L;
    int32_t l_214 = 1L;
    uint32_t l_215 = 0x8E4F4471L;
    int32_t l_220 = (-1L);
    for (g_2[0] = (-16); (g_2[0] > 12); g_2[0] = safe_add_func_int64_t_s_s(g_2[0], 7))
    { 
        int16_t l_200 = 0x0BCFL;
        g_189[2][0] = func_5((g_8 &= 0x2006887EL), l_9);
        l_201 = (g_8 == (((safe_mul_func_uint16_t_u_u(g_146, (safe_mod_func_int64_t_s_s((safe_unary_minus_func_int8_t_s((((safe_mod_func_uint32_t_u_u(((safe_add_func_uint16_t_u_u((((((~(g_184 != l_200)) && g_28.f1) && l_200) < 0xD19F04F4L) ^ 9L), g_28.f0)) | l_9), 0xEA5775FDL)) < l_200) < l_200))), l_9)))) == g_138.f3) < g_184));
    }
    g_2[0] = (safe_sub_func_int64_t_s_s(((((safe_div_func_int64_t_s_s((g_28.f0 &= (((safe_mod_func_int32_t_s_s(g_28.f1, (safe_add_func_uint8_t_u_u(5UL, ((safe_lshift_func_uint8_t_u_s((safe_lshift_func_int8_t_s_u(((l_201 && ((((l_214 = 0x401053637239A57CLL) , (-6L)) ^ 1UL) , l_215)) , g_62), g_189[2][0])), g_150)) <= g_138.f3))))) != g_189[2][0]) || 5UL)), g_153[0])) ^ 1L) < 0x3B8E8A177C5EBFF8LL) , g_28.f0), l_9));
    g_2[0] = (safe_div_func_int16_t_s_s((safe_rshift_func_int16_t_s_u(((((-1L) & (((((l_220 ^= 248UL) & l_215) , g_150) != l_215) >= l_201)) && l_214) < l_214), 2)), l_214));
    return g_119[0];
}



static int32_t  func_5(const int32_t  p_6, int8_t  p_7)
{ 
    struct S1 l_24 = {0x933BD3E0L,18446744073709551615UL,9L,3L,-9L,4294967295UL};
    int32_t l_66 = 0L;
    int32_t l_67 = 0xFB092334L;
    uint64_t l_77 = 0x649E5A9921A3E708LL;
    int32_t l_80 = 0x5A4B5200L;
    int32_t l_145 = 8L;
    int32_t l_181 = 0x95667881L;
    int32_t l_183 = 4L;
    int32_t l_185[2][4];
    int i, j;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 4; j++)
            l_185[i][j] = 0L;
    }
lbl_86:
    for (g_8 = (-25); (g_8 == 22); ++g_8)
    { 
        int32_t l_12 = (-2L);
        int32_t l_23 = 0x278EE3F2L;
        g_68 = (g_8 || ((l_12 , ((l_67 = ((l_66 = func_13(g_2[0], (func_18(l_12, p_6, l_23, l_24) , l_24.f4), l_23, l_24.f1)) , g_62)) & l_12)) , l_24.f3));
        l_80 ^= (safe_add_func_int16_t_s_s(p_6, (safe_mul_func_uint8_t_u_u(g_62, (safe_mul_func_uint8_t_u_u((safe_mul_func_int8_t_s_s(l_77, ((((p_6 == l_77) , l_12) | g_28.f1) ^ 0L))), l_12))))));
    }
    for (l_67 = 20; (l_67 <= 15); l_67 = safe_sub_func_int16_t_s_s(l_67, 3))
    { 
        int64_t l_85 = 0L;
        uint32_t l_87[3][3][3] = {{{1UL,2UL,2UL},{18446744073709551610UL,2UL,0UL},{1UL,2UL,0xC36471EDL}},{{1UL,2UL,2UL},{18446744073709551610UL,2UL,0UL},{1UL,2UL,0xC36471EDL}},{{1UL,2UL,0UL},{0xC36471EDL,0UL,0x1C6F7076L},{0UL,0UL,0UL}}};
        uint32_t l_104 = 0x13D93154L;
        struct S0 l_105 = {0xB54EB9293347D044LL,0xF7642676L,1L};
        int32_t l_116[4] = {0x8F928312L,0x8F928312L,0x8F928312L,0x8F928312L};
        int32_t l_139 = 0xA3A84B1FL;
        int i, j, k;
        if (g_28.f1)
        { 
            uint16_t l_98 = 0x47B3L;
            int32_t l_103[3];
            struct S0 l_106 = {2L,0UL,0L};
            int32_t l_117[5][2] = {{(-2L),0xA5E5DFA2L},{0xA5E5DFA2L,(-2L)},{0xA5E5DFA2L,0xA5E5DFA2L},{(-2L),0xA5E5DFA2L},{0xA5E5DFA2L,(-2L)}};
            int i, j;
            for (i = 0; i < 3; i++)
                l_103[i] = 0x8FB111D0L;
            for (l_77 = (-23); (l_77 <= 14); ++l_77)
            { 
                l_85 |= p_7;
                if (l_24.f5)
                    goto lbl_86;
            }
            for (g_28.f2 = 0; (g_28.f2 <= 2); g_28.f2 += 1)
            { 
                int32_t l_109 = 0L;
                int32_t l_118 = 0L;
                l_106 = ((safe_lshift_func_int8_t_s_s(((safe_rshift_func_int16_t_s_s(((safe_sub_func_uint8_t_u_u((safe_unary_minus_func_uint16_t_u((l_103[2] = (~(safe_mul_func_uint16_t_u_u(((p_7 , ((l_98 ^= p_6) & ((0xF3C5FBC3860FE7B9LL <= (((safe_mul_func_int8_t_s_s(((safe_mul_func_int16_t_s_s((((((l_66 = g_28.f0) & p_7) < g_62) | 5L) && 0x912EB575L), 1L)) & g_28.f0), 1L)) ^ 0x216A80D1L) < 0x16L)) && 255UL))) ^ g_62), (-8L))))))), l_104)) && g_28.f0), 10)) < g_28.f1), 5)) , l_105);
                g_112 = (g_2[0] == (safe_rshift_func_uint16_t_u_s(l_109, ((1L | ((safe_add_func_int32_t_s_s(g_68, p_7)) && 1UL)) ^ l_109))));
                g_119[0] = ((((((p_6 == l_103[2]) || g_28.f1) <= (safe_mul_func_int16_t_s_s((~(l_109 |= ((((l_117[4][1] = (l_116[0] = (0xD58142351F18F27BLL & l_24.f2))) | 18446744073709551615UL) < p_6) && p_6))), l_118))) , g_2[0]) && 1L) || g_28.f2);
            }
            l_139 = ((safe_unary_minus_func_uint64_t_u((safe_add_func_int16_t_s_s(((safe_rshift_func_int16_t_s_u((safe_add_func_int64_t_s_s(((l_116[3] &= (safe_add_func_uint32_t_u_u(((l_103[1] = (safe_lshift_func_uint8_t_u_s(g_119[0], 0))) <= (safe_lshift_func_uint8_t_u_s(((safe_div_func_int8_t_s_s((!(((safe_mul_func_int16_t_s_s(p_7, ((func_18(l_105.f0, g_62, g_28.f2, g_138) , l_105.f2) <= 0x173CA947L))) && l_24.f0) || l_106.f2)), 1L)) & g_2[0]), g_138.f5))), g_138.f1))) <= 0x4C18L), g_112)), 14)) , p_6), p_7)))) && p_6);
        }
        else
        { 
            uint16_t l_140 = 8UL;
            int8_t l_149 = 0L;
            uint32_t l_174 = 1UL;
            g_146 &= (((l_140 , (l_116[2] = (safe_mod_func_int64_t_s_s((-1L), l_105.f0)))) & (safe_mul_func_int8_t_s_s(((g_68 = 0x1269L) ^ l_145), p_7))) || l_24.f4);
            if (((l_116[0] & (g_138.f5 != ((((safe_mod_func_int64_t_s_s(((l_139 &= g_138.f1) , 0x46763B1FBB9A9CB8LL), l_149)) & 5UL) , l_105.f1) < g_28.f0))) == g_68))
            { 
                struct S0 l_151 = {0x3EF36B2304E23EB4LL,0UL,0x70A8B0A815AB6DA7LL};
                int32_t l_152 = 8L;
                g_150 ^= (l_140 ^ p_6);
                l_105 = l_151;
                ++g_153[0];
            }
            else
            { 
                int16_t l_160 = 1L;
                g_150 ^= (g_138.f2 & ((safe_add_func_uint16_t_u_u(((p_7 > l_24.f5) == ((l_160 = (((safe_mod_func_uint16_t_u_u(0x2BE2L, g_119[0])) >= l_140) , g_112)) > p_7)), l_145)) & g_138.f1));
                l_174 = (((!0xD11088D6ADFE8D4ALL) != ((((safe_rshift_func_uint8_t_u_s(((safe_div_func_int64_t_s_s(((l_116[0] = (safe_sub_func_int32_t_s_s((g_150 = p_7), ((safe_add_func_uint64_t_u_u((safe_rshift_func_uint8_t_u_u((safe_mod_func_uint8_t_u_u((g_138.f3 || (g_112 || g_146)), 0xF9L)), 3)), 0xFA42F4987F47BCE9LL)) > l_24.f1)))) && g_138.f2), p_7)) ^ 1UL), 4)) <= p_6) , g_119[0]) , p_6)) || p_6);
            }
            g_150 &= (safe_div_func_uint8_t_u_u((0x8BL <= (safe_mod_func_int8_t_s_s((l_174 | ((((safe_rshift_func_int8_t_s_s(0x52L, (g_2[0] > p_7))) == p_6) <= 0x764A6B6FD115CA34LL) | 0xB943L)), 0xD4L))), g_119[1]));
        }
        --g_186;
    }
    return l_145;
}



static int64_t  func_13(int8_t  p_14, int16_t  p_15, uint16_t  p_16, uint8_t  p_17)
{ 
    const uint8_t l_63 = 247UL;
    int32_t l_64 = 6L;
    struct S0 l_65 = {0xB0B63B58950224C6LL,0xCEBDD5E1L,1L};
    l_64 = (g_28.f2 || (safe_sub_func_int8_t_s_s(p_16, (((safe_mul_func_int16_t_s_s(0x7743L, (safe_mul_func_uint8_t_u_u(((safe_add_func_int16_t_s_s((g_62 = ((safe_lshift_func_int8_t_s_u(((safe_rshift_func_int8_t_s_s(g_8, p_16)) == 0L), g_2[0])) || g_28.f0)), 0UL)) || l_63), 255UL)))) <= g_8) || 0xDEL))));
    l_64 |= (-1L);
    l_65 = g_28;
    return l_64;
}



static union U2  func_18(uint16_t  p_19, uint32_t  p_20, int8_t  p_21, struct S1  p_22)
{ 
    struct S0 l_27 = {0xA0E2C2377963F6D1LL,4294967295UL,5L};
    int8_t l_34 = 0x8AL;
    union U2 l_49 = {{0xD287709C18003DBELL,0xA916C6C9L,0x4A91A3D0676DFA53LL}};
    for (p_21 = 0; (p_21 < 18); p_21 = safe_add_func_int64_t_s_s(p_21, 5))
    { 
        union U2 l_29 = {{2L,0x3473EDE5L,0L}};
        g_28 = (l_27 , g_28);
        return l_29;
    }
    for (g_28.f0 = (-25); (g_28.f0 < (-18)); g_28.f0 = safe_add_func_uint8_t_u_u(g_28.f0, 6))
    { 
        const int32_t l_43 = (-6L);
        int32_t l_45 = (-4L);
        for (g_28.f2 = 0; (g_28.f2 <= 14); ++g_28.f2)
        { 
            union U2 l_44 = {{0L,0xE01AF02CL,0x99447610B5C7B123LL}};
            l_34 |= p_22.f2;
            l_45 = (safe_add_func_uint64_t_u_u((g_2[0] & (((((safe_mul_func_int16_t_s_s((safe_div_func_uint64_t_u_u((l_43 && (l_44 , ((g_28.f1 , 0x0C7F2BACL) > g_28.f0))), p_22.f2)), g_28.f0)) , p_22.f1) || g_28.f1) , g_2[0]) , 1L)), l_43));
        }
    }
    for (p_22.f4 = 0; (p_22.f4 >= (-26)); p_22.f4 = safe_sub_func_int16_t_s_s(p_22.f4, 2))
    { 
        union U2 l_48 = {{0x95E148CB42B08F18LL,4294967295UL,0x53D1EDBCC772A30FLL}};
        return l_48;
    }
    return l_49;
}





int test_main(void)
{
    int i, j;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_2[i], "g_2[i]", print_hash_value);

    }
    transparent_crc(g_8, "g_8", print_hash_value);
    transparent_crc(g_28.f0, "g_28.f0", print_hash_value);
    transparent_crc(g_28.f1, "g_28.f1", print_hash_value);
    transparent_crc(g_28.f2, "g_28.f2", print_hash_value);
    transparent_crc(g_62, "g_62", print_hash_value);
    transparent_crc(g_68, "g_68", print_hash_value);
    transparent_crc(g_112, "g_112", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_119[i], "g_119[i]", print_hash_value);

    }
    transparent_crc(g_138.f0, "g_138.f0", print_hash_value);
    transparent_crc(g_138.f1, "g_138.f1", print_hash_value);
    transparent_crc(g_138.f2, "g_138.f2", print_hash_value);
    transparent_crc(g_138.f3, "g_138.f3", print_hash_value);
    transparent_crc(g_138.f4, "g_138.f4", print_hash_value);
    transparent_crc(g_138.f5, "g_138.f5", print_hash_value);
    transparent_crc(g_146, "g_146", print_hash_value);
    transparent_crc(g_150, "g_150", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_153[i], "g_153[i]", print_hash_value);

    }
    transparent_crc(g_182, "g_182", print_hash_value);
    transparent_crc(g_184, "g_184", print_hash_value);
    transparent_crc(g_186, "g_186", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_189[i][j], "g_189[i][j]", print_hash_value);

        }
    }
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
