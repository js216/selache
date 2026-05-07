// SPDX-License-Identifier: MIT
// cctest_csmith_a3571749.c --- cctest case csmith_a3571749 (csmith seed 2740393801)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xd82747fb */

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

// Options:   -s 2740393801 -o /tmp/csmith_gen_lqrw7itm/csmith.c --concise --no-volatiles --no-volatile-pointers --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   signed f0 : 3;
   signed f1 : 14;
};
#pragma pack(pop)

struct S1 {
   const struct S0  f0;
   int64_t  f1;
   uint32_t  f2;
};

union U2 {
   int8_t  f0;
   int16_t  f1;
};


static int32_t g_2[4] = {0x6E5C7A00L,0x6E5C7A00L,0x6E5C7A00L,0x6E5C7A00L};
static int32_t g_7[2] = {0x57B5BF2DL,0x57B5BF2DL};
static int64_t g_18 = (-7L);
static struct S1 g_22 = {{0,-29},0xB6EAB3CF81320F2DLL,4294967295UL};
static union U2 g_24 = {-7L};
static union U2 *g_23 = &g_24;
static struct S0 g_63 = {1,23};
static int32_t g_65[5] = {0L,0L,0L,0L,0L};
static uint64_t g_72 = 3UL;
static int32_t *g_80 = &g_7[0];
static int32_t **g_79[4][3][3] = {{{&g_80,&g_80,&g_80},{&g_80,(void*)0,(void*)0},{&g_80,&g_80,&g_80}},{{&g_80,(void*)0,(void*)0},{&g_80,&g_80,&g_80},{&g_80,(void*)0,(void*)0}},{{&g_80,&g_80,&g_80},{&g_80,(void*)0,(void*)0},{&g_80,&g_80,&g_80}},{{&g_80,(void*)0,(void*)0},{&g_80,&g_80,&g_80},{&g_80,(void*)0,&g_80}}};
static uint8_t g_82 = 0x7FL;
static uint8_t g_89 = 0x7CL;
static int8_t g_92[7] = {0xBFL,0x7FL,0x7FL,0xBFL,0x7FL,0x7FL,0xBFL};
static uint64_t g_94 = 0x61860F42E901CC30LL;
static uint64_t **g_98 = (void*)0;
static uint16_t g_113 = 0UL;
static uint16_t g_115 = 65533UL;
static int64_t g_192 = 0x73232EF97D826FC9LL;
static struct S1 g_257 = {{1,88},0x179292164BC584E0LL,0x63F4A469L};
static struct S1 *g_256 = &g_257;
static uint32_t g_286 = 0x8B8FF587L;
static struct S0 *g_409 = &g_63;
static struct S0 **g_408[4][5][4] = {{{&g_409,&g_409,&g_409,&g_409},{(void*)0,&g_409,&g_409,&g_409},{(void*)0,&g_409,&g_409,(void*)0},{&g_409,&g_409,&g_409,&g_409},{&g_409,&g_409,&g_409,&g_409}},{{&g_409,&g_409,&g_409,&g_409},{&g_409,&g_409,&g_409,&g_409},{(void*)0,&g_409,&g_409,(void*)0},{&g_409,&g_409,&g_409,&g_409},{&g_409,&g_409,&g_409,&g_409}},{{&g_409,&g_409,&g_409,&g_409},{(void*)0,&g_409,&g_409,&g_409},{&g_409,&g_409,&g_409,&g_409},{&g_409,&g_409,&g_409,&g_409},{&g_409,&g_409,&g_409,&g_409}},{{&g_409,&g_409,&g_409,&g_409},{(void*)0,&g_409,&g_409,&g_409},{(void*)0,&g_409,&g_409,(void*)0},{&g_409,&g_409,&g_409,&g_409},{&g_409,&g_409,&g_409,&g_409}}};
static int16_t g_443 = 0xB3BEL;
static union U2 **g_450[5] = {&g_23,&g_23,&g_23,&g_23,&g_23};
static union U2 ***g_449 = &g_450[4];
static int16_t g_455 = (-2L);
static int64_t *g_525[5][6] = {{&g_18,&g_192,&g_18,&g_192,&g_18,&g_257.f1},{&g_192,&g_18,&g_257.f1,&g_257.f1,&g_18,&g_192},{&g_257.f1,&g_192,&g_192,&g_18,&g_192,&g_192},{&g_192,&g_257.f1,&g_257.f1,&g_18,&g_18,&g_257.f1},{&g_192,&g_192,&g_18,&g_18,&g_18,&g_18}};
static int64_t **g_524 = &g_525[4][1];
static struct S0 **g_602 = &g_409;
static uint16_t ***g_611 = (void*)0;
static int16_t g_754 = 0x4913L;
static const int16_t *g_796 = (void*)0;
static struct S0 * const *g_826 = &g_409;
static struct S0 * const **g_825 = &g_826;
static uint16_t g_875 = 1UL;
static int16_t *g_915 = &g_455;
static int16_t **g_914 = &g_915;
static const uint16_t *g_963[2] = {&g_113,&g_113};
static const uint16_t **g_962 = &g_963[1];
static uint32_t g_979[5][7] = {{4294967295UL,0x73009A11L,4294967295UL,0x73009A11L,4294967295UL,0x73009A11L,4294967295UL},{0x981583E7L,0x981583E7L,0x981583E7L,0x981583E7L,0x981583E7L,0x981583E7L,0x981583E7L},{4294967295UL,0x73009A11L,4294967295UL,0x73009A11L,4294967295UL,0x73009A11L,4294967295UL},{0x981583E7L,0x981583E7L,0x981583E7L,0x981583E7L,0x981583E7L,0x981583E7L,0x981583E7L},{4294967295UL,0x73009A11L,4294967295UL,0x73009A11L,4294967295UL,0x73009A11L,4294967295UL}};
static uint16_t *****g_990 = (void*)0;
static int16_t g_1008 = 0xF127L;
static int8_t g_1009 = 8L;
static uint8_t g_1021 = 2UL;
static int32_t *g_1049[7] = {&g_7[0],&g_65[0],&g_65[0],&g_7[0],&g_65[0],&g_65[0],&g_7[0]};
static uint32_t g_1071 = 0UL;
static const struct S0 *g_1210 = &g_22.f0;
static const struct S0 **g_1209 = &g_1210;
static uint64_t *g_1412 = &g_72;
static uint64_t **g_1411 = &g_1412;
static uint32_t *g_1540 = (void*)0;
static uint32_t **g_1539 = &g_1540;
static int8_t *g_1586 = &g_92[2];
static int16_t g_1675[5][1] = {{0xCB09L},{0xC800L},{0xCB09L},{0xC800L},{0xCB09L}};
static const union U2 *g_1716 = &g_24;
static uint32_t g_1737 = 0x44EC3280L;
static int32_t g_1740[4] = {0L,0L,0L,0L};
static int32_t *g_1813 = &g_65[0];
static int32_t ***g_1939[1] = {&g_79[2][2][1]};
static int32_t ****g_1938 = &g_1939[0];
static int32_t *****g_1937 = &g_1938;
static int32_t *****g_1940 = &g_1938;
static struct S0 ***g_1950 = &g_602;
static struct S0 ****g_1949 = &g_1950;
static const int32_t *g_2131[2] = {&g_7[1],&g_7[1]};



static union U2  func_1(void);
static const union U2 * func_19(const uint32_t  p_20, union U2 * p_21);
static uint64_t  func_29(union U2 * const  p_30, int32_t  p_31, int32_t  p_32);
static union U2 * func_33(int32_t  p_34, int32_t * p_35);
static struct S1  func_40(int32_t * p_41, uint8_t  p_42, union U2 * p_43, int32_t  p_44);
static int32_t * func_45(struct S0  p_46, struct S0  p_47, uint16_t  p_48);
static struct S1  func_50(int8_t  p_51, int16_t  p_52, int8_t  p_53, int64_t  p_54, union U2 * p_55);
static struct S0  func_57(union U2 * p_58, union U2 * p_59);




static union U2  func_1(void)
{ 
    uint32_t l_5 = 4294967295UL;
    union U2 *l_1835 = &g_24;
    int64_t ** const *l_1843[3];
    int8_t l_1860 = (-9L);
    uint32_t l_1892 = 0xB2B83586L;
    int32_t l_1909 = 1L;
    int32_t l_1911 = 0L;
    int32_t l_1912[4][3][2] = {{{0x2BED40D9L,(-1L)},{0x2BED40D9L,(-1L)},{0x2BED40D9L,(-1L)}},{{0x2BED40D9L,(-1L)},{0x2BED40D9L,(-1L)},{0x2BED40D9L,(-1L)}},{{0x2BED40D9L,(-1L)},{0x2BED40D9L,(-1L)},{0x2BED40D9L,(-1L)}},{{0x2BED40D9L,(-1L)},{0x2BED40D9L,(-1L)},{0x2BED40D9L,(-1L)}}};
    uint8_t l_1914 = 0xBBL;
    union U2 l_1925 = {0x90L};
    int8_t l_1956 = 0xA4L;
    struct S0 l_1993 = {0,102};
    int16_t l_1996 = 0L;
    int32_t l_1999[3];
    uint16_t l_2000 = 65535UL;
    int16_t ***l_2002 = &g_914;
    const int32_t *l_2017 = &g_7[0];
    const int32_t **l_2018 = &l_2017;
    int16_t l_2045 = (-1L);
    int8_t *l_2061 = &l_1860;
    int8_t l_2074 = 0L;
    int32_t l_2127 = 0xF91888F9L;
    uint64_t l_2129 = 5UL;
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_1843[i] = (void*)0;
    for (i = 0; i < 3; i++)
        l_1999[i] = 0xCECB4571L;
    for (g_2[2] = 11; (g_2[2] < 5); g_2[2]--)
    { 
        uint32_t l_10 = 4294967291UL;
        union U2 l_1829 = {0x83L};
        struct S0 *l_1836 = &g_63;
        int64_t ***l_1844 = &g_524;
        int32_t l_1847 = 0x0A15146EL;
        uint16_t *l_1873 = &g_875;
        uint16_t * const *l_1872 = &l_1873;
        uint16_t * const **l_1871 = &l_1872;
        int32_t l_1913 = (-1L);
        uint32_t l_1922 = 0x45B22CFBL;
        int32_t l_1941 = 0x7A45B2EDL;
        union U2 **l_1989 = &g_23;
        struct S0 l_1995[2][2][6] = {{{{-1,-44},{0,-121},{-1,-44},{-1,-44},{0,-121},{-1,-44}},{{-1,-44},{0,-121},{-1,-44},{-1,-44},{0,-121},{-1,-44}}},{{{-1,-44},{0,-121},{-1,-44},{-1,-44},{0,-121},{-1,-44}},{{-1,-44},{0,-121},{-1,-44},{-1,-44},{0,-121},{-1,-44}}}};
        int32_t *l_1998[1][2][4] = {{{&l_1913,&l_1909,&l_1913,&l_1913},{&l_1909,&l_1909,&g_2[2],&l_1909}}};
        uint32_t l_2015[3];
        uint8_t *l_2016 = &g_82;
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_2015[i] = 0xDE81D534L;
        if (l_5)
        { 
            int32_t *l_6 = &g_7[0];
            int32_t *l_8 = &g_7[1];
            int32_t *l_9 = &g_7[0];
            uint32_t *l_1832 = &g_1071;
            struct S0 *l_1833 = &g_63;
            int32_t **l_1834 = &l_8;
            uint64_t l_1837 = 0x48BD4FEF9695052FLL;
            uint16_t *l_1870 = &g_875;
            int32_t l_1907 = 2L;
            int32_t l_1908 = 0xAB5474B7L;
            int32_t l_1910 = 0xC3D78DC8L;
            ++l_10;
            for (l_5 = 0; (l_5 <= 9); l_5++)
            { 
                const union U2 *l_1826[5][5] = {{(void*)0,&g_24,&g_24,&g_24,&g_24},{&g_24,(void*)0,&g_24,&g_24,&g_24},{&g_24,&g_24,(void*)0,(void*)0,(void*)0},{&g_24,(void*)0,&g_24,(void*)0,(void*)0},{(void*)0,&g_24,(void*)0,&g_24,&g_24}};
                int i, j;
                for (l_10 = 21; (l_10 <= 5); --l_10)
                { 
                    uint32_t l_17 = 18446744073709551607UL;
                    const union U2 **l_1825[4];
                    int i;
                    for (i = 0; i < 4; i++)
                        l_1825[i] = &g_1716;
                    if (l_17)
                        break;
                    if (g_18)
                        continue;
                    if (g_2[2])
                        continue;
                }
                for (g_1021 = 0; (g_1021 >= 50); g_1021 = safe_add_func_uint8_t_u_u(g_1021, 1))
                { 
                    return l_1829;
                }
                for (g_115 = 0; (g_115 <= 4); g_115 += 1)
                { 
                    (*g_1813) &= (*l_6);
                }
            }
            if (((*g_1813) |= ((*l_6) = ((((--(*g_1412)) >= (*l_6)) ^ ((*l_1832) = 0x61D34903L)) <= (l_1833 != (func_40(((*l_1834) = l_6), l_5, l_1835, (*g_80)) , l_1836))))))
            { 
                int64_t ****l_1845 = &l_1844;
                uint16_t *l_1846[3][5] = {{&g_115,&g_113,&g_115,&g_115,&g_113},{&g_875,&g_115,&g_115,&g_875,&g_115},{&g_113,&g_113,&g_875,&g_113,&g_113}};
                int32_t l_1861[7] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
                union U2 *l_1862 = &g_24;
                int64_t l_1921 = 0x738C0A643CE5A979LL;
                int i, j;
                if ((l_1837 ^ (safe_unary_minus_func_int64_t_s((g_2[2] ^ ((safe_lshift_func_uint16_t_u_s((l_1847 = ((safe_mul_func_uint8_t_u_u((l_1843[2] != ((*l_1845) = l_1844)), (*g_1586))) < 1UL)), ((safe_rshift_func_int16_t_s_u(((++(*l_1832)) >= ((safe_rshift_func_uint16_t_u_s((((safe_add_func_int16_t_s_s(((*g_915) = ((((safe_lshift_func_int8_t_s_s(((safe_rshift_func_int16_t_s_u(0x23A1L, 7)) | l_1860), l_10)) , l_5) <= 0x2B5BC20FL) || 0x7310FA0FEC97CA06LL)), (**g_962))) == l_1861[2]) <= 0xF813L), l_1829.f0)) >= l_1861[2])), 6)) <= 0x9B4688EAL))) != 0xC3CDBDAEL))))))
                { 
                    const uint64_t *l_1894 = &g_72;
                    const uint64_t **l_1893 = &l_1894;
                    int32_t *l_1895 = &g_1740[3];
                    int32_t l_1896 = 0x355926A5L;
                    int32_t *l_1897 = &l_1861[0];
                    int32_t *l_1898 = &g_7[1];
                    int32_t *l_1899 = (void*)0;
                    int32_t *l_1900 = &l_1861[2];
                    int32_t *l_1901 = &l_1861[4];
                    int32_t *l_1902 = (void*)0;
                    int32_t *l_1903 = &g_7[0];
                    int32_t *l_1904 = &g_7[1];
                    int32_t *l_1905 = &l_1861[0];
                    int32_t *l_1906[6] = {(void*)0,(void*)0,&g_2[2],(void*)0,(void*)0,&g_2[2]};
                    int i;
                    (*l_8) ^= l_1860;
                    (*l_1836) = func_57(l_1862, (((*g_1586) && ((**g_914) >= ((((!0x966DD7E9L) != 0xEEFA0AF4B0B1E14ELL) , &g_524) != &g_524))) , (void*)0));
                    (*g_80) = ((250UL != ((*g_1586) = (((safe_add_func_int64_t_s_s(3L, ((safe_add_func_int8_t_s_s((*l_6), (((void*)0 != l_1870) , (l_1861[2] = 0x25L)))) && (((*g_256) , l_1871) == (void*)0)))) & l_5) | 2UL))) ^ 0xDAL);
                    l_1897 = ((safe_div_func_int32_t_s_s((((*l_1895) = (safe_mod_func_uint32_t_u_u((safe_add_func_uint8_t_u_u(l_1829.f0, (safe_mod_func_int32_t_s_s((((0x86L | (((0L ^ (safe_mod_func_int8_t_s_s(((safe_add_func_uint32_t_u_u((safe_mod_func_int16_t_s_s((safe_lshift_func_int8_t_s_s(((*g_1586) = 0x8AL), 4)), 0x5503L)), l_1860)) >= (safe_sub_func_int32_t_s_s((g_286 ^ 1L), l_1892))), 0xA6L))) , l_1893) == (void*)0)) | 9L) == l_1892), l_10)))), l_5))) , l_10), l_1896)) , (*l_1834));
                    l_1914--;
                }
                else
                { 
                    int32_t *l_1917 = (void*)0;
                    int32_t *l_1918 = &l_1907;
                    int32_t *l_1919 = &l_1908;
                    int32_t *l_1920[3][5] = {{&l_1912[3][2][1],&l_1912[3][2][1],&l_1912[3][2][1],&l_1912[3][2][1],&l_1912[3][2][1]},{&l_1910,&l_1910,&l_1910,&l_1910,&l_1910},{&l_1912[3][2][1],&l_1912[3][2][1],&l_1912[3][2][1],&l_1912[3][2][1],&l_1912[3][2][1]}};
                    int i, j;
                    ++l_1922;
                    return l_1925;
                }
            }
            else
            { 
                int32_t **l_1942 = (void*)0;
                int32_t *l_1943 = &l_1941;
                for (g_94 = 0; (g_94 <= 60); g_94 = safe_add_func_uint8_t_u_u(g_94, 6))
                { 
                    uint64_t l_1930[4][4] = {{0xB1B14DBE7B94C43DLL,0xB1B14DBE7B94C43DLL,0x208C1F301C9BA167LL,0UL},{0UL,6UL,0UL,0x208C1F301C9BA167LL},{0UL,0x208C1F301C9BA167LL,0x208C1F301C9BA167LL,0UL},{0xB1B14DBE7B94C43DLL,0x208C1F301C9BA167LL,0UL,0x208C1F301C9BA167LL}};
                    int i, j;
                    l_1941 |= (g_7[1] || ((((safe_mul_func_int8_t_s_s(l_1930[3][1], (l_1913 , (((~((safe_lshift_func_int8_t_s_u(((l_1930[1][2] , (safe_rshift_func_uint16_t_u_s((!(*g_1412)), (g_1937 == (g_1940 = &g_1938))))) ^ (*l_9)), l_1847)) | (*g_1586))) | l_1930[2][2]) & g_82)))) < 0L) != l_1860) & 0xD4L));
                    if ((*l_9))
                        continue;
                    if ((**l_1834))
                        continue;
                    if (l_1860)
                        continue;
                    (*g_1813) ^= (*g_80);
                }
                l_1943 = ((*l_1834) = &l_1847);
            }
        }
        else
        { 
            uint16_t *****l_1944 = (void*)0;
            int32_t l_1969 = 0xDF31D01BL;
            uint8_t *l_1970 = &l_1914;
            union U2 l_1994[1] = {{-5L}};
            int32_t *l_1997[2];
            int i;
            for (i = 0; i < 2; i++)
                l_1997[i] = &l_1911;
            for (g_286 = 0; (g_286 <= 6); g_286 += 1)
            { 
                if (((void*)0 != &g_1540))
                { 
                    struct S0 ***l_1948 = &g_602;
                    struct S0 ****l_1947 = &l_1948;
                    struct S0 ****l_1952 = (void*)0;
                    struct S0 *****l_1951 = &l_1952;
                    g_990 = l_1944;
                    (*g_1813) |= (safe_sub_func_int8_t_s_s(((g_1949 = l_1947) != ((*l_1951) = &g_1950)), 0UL));
                }
                else
                { 
                    int32_t *l_1953 = (void*)0;
                    int i;
                    l_1953 = g_1049[g_286];
                }
            }
            if ((safe_sub_func_int16_t_s_s((l_10 > (((l_1956 < (((safe_mod_func_int32_t_s_s((safe_div_func_int64_t_s_s((l_1847 = (safe_rshift_func_uint8_t_u_s(249UL, 5))), (safe_lshift_func_int16_t_s_u(((((-1L) || (*g_1412)) && ((*l_1970) = ((*g_1586) , (safe_div_func_uint32_t_u_u((safe_lshift_func_int8_t_s_u(((0x3DL | 1UL) , 5L), 3)), l_1969))))) ^ l_1969), 10)))), g_89)) , 0x530AL) ^ l_5)) & l_1969) , (**g_914))), (**g_962))))
            { 
                const uint64_t l_1971 = 2UL;
                if (l_1971)
                    break;
                l_1969 ^= ((*g_80) |= (g_1021 > (((((safe_mul_func_int16_t_s_s(0x2205L, ((safe_mod_func_int8_t_s_s(((+(*g_1412)) & (safe_rshift_func_uint16_t_u_u((l_1971 | (safe_div_func_int16_t_s_s(l_1922, l_1829.f0))), 15))), ((safe_rshift_func_uint8_t_u_u(1UL, 4)) | g_1737))) & 0xCCL))) < (*g_1586)) && l_1913) <= 0x3EL) < l_1911)));
            }
            else
            { 
                uint8_t l_1990 = 0xABL;
                (*g_1813) = (-5L);
                (*g_80) = (((safe_sub_func_uint64_t_u_u((safe_sub_func_uint64_t_u_u((safe_add_func_uint8_t_u_u((&l_1925 != &l_1829), ((void*)0 == l_1989))), l_1990)), (safe_rshift_func_int16_t_s_s((**g_914), 11)))) || ((*g_1586) = 0L)) & g_7[0]);
                l_1998[0][0][0] = l_1997[0];
            }
            (*g_80) ^= ((*g_1813) = ((l_1999[2] | (g_63.f1 < (((((void*)0 != (*g_524)) && l_5) , ((&g_524 != &g_524) , l_2000)) || l_1911))) == 0UL));
            (*g_1813) ^= (safe_unary_minus_func_int32_t_s(0x145C1747L));
        }
        l_1909 |= (((0xEDL & ((&g_914 == l_2002) ^ g_22.f0.f0)) < (l_1999[2] , (safe_sub_func_uint8_t_u_u(((*l_2016) |= (safe_lshift_func_int16_t_s_s((safe_mod_func_uint32_t_u_u(((safe_lshift_func_int16_t_s_u((safe_div_func_int8_t_s_s((((safe_mod_func_int32_t_s_s(l_2015[0], ((*g_256) , (*g_80)))) != l_1892) == (*g_1586)), g_22.f0.f1)), 11)) != l_1956), g_22.f0.f1)), l_1860))), g_979[1][1])))) && 0x8CBD6CD5L);
        return (*g_23);
    }
    (***g_1950) = ((*l_1835) , l_1993);
    (*l_2018) = l_2017;
    for (g_257.f1 = 4; (g_257.f1 >= 0); g_257.f1 -= 1)
    { 
        const int32_t l_2031[6][2][1] = {{{0L},{0L}},{{(-1L)},{0x26275F98L}},{{(-1L)},{0L}},{{0L},{0L}},{{(-1L)},{0x26275F98L}},{{(-1L)},{0L}}};
        union U2 *l_2032[2][5][7] = {{{(void*)0,&l_1925,(void*)0,&l_1925,&l_1925,(void*)0,&l_1925},{&l_1925,&l_1925,(void*)0,(void*)0,&l_1925,&l_1925,&l_1925},{(void*)0,&l_1925,&l_1925,(void*)0,&l_1925,(void*)0,&l_1925},{(void*)0,(void*)0,&l_1925,(void*)0,&l_1925,(void*)0,(void*)0},{(void*)0,&l_1925,(void*)0,&l_1925,(void*)0,(void*)0,&l_1925}},{{(void*)0,&l_1925,(void*)0,&l_1925,&l_1925,(void*)0,&l_1925},{&l_1925,&l_1925,(void*)0,(void*)0,&l_1925,&l_1925,&l_1925},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&l_1925,&l_1925,(void*)0,&l_1925,(void*)0,&l_1925,&l_1925},{&l_1925,(void*)0,&l_1925,(void*)0,&l_1925,&l_1925,(void*)0}}};
        int32_t l_2084[1][6][5] = {{{(-8L),0x78ED21FDL,0x78ED21FDL,(-8L),0x6A1B7C33L},{0x513FACB5L,5L,0x084A9EC0L,0x084A9EC0L,5L},{0x6A1B7C33L,0x78ED21FDL,2L,(-3L),(-3L)},{0x70EA8E11L,1L,0x70EA8E11L,0x084A9EC0L,0xA39AE860L},{0xC14278DBL,(-8L),(-3L),(-8L),0xC14278DBL},{0x70EA8E11L,0x513FACB5L,1L,5L,1L}}};
        uint8_t l_2112 = 0x9AL;
        int32_t *l_2128 = (void*)0;
        struct S0 l_2130 = {1,86};
        int i, j, k;
    }
    return (***g_449);
}



static const union U2 * func_19(const uint32_t  p_20, union U2 * p_21)
{ 
    struct S0 l_49 = {-0,-84};
    union U2 *l_56 = (void*)0;
    int32_t *l_1431 = (void*)0;
    int32_t *** const l_1636 = &g_79[3][2][2];
    int64_t l_1667 = 0x9039FF2C3F82C59CLL;
    int32_t l_1669 = 0L;
    int32_t l_1670 = 0x7F4B399CL;
    int32_t l_1671 = (-2L);
    int32_t l_1672 = 0xD18B5B39L;
    int32_t l_1673 = 0x928D59E4L;
    int32_t l_1674[2];
    uint16_t **l_1702 = (void*)0;
    uint64_t l_1712 = 1UL;
    uint32_t l_1731 = 4294967295UL;
    int64_t **l_1792 = (void*)0;
    int64_t **l_1793 = &g_525[4][1];
    int16_t l_1803 = (-1L);
    int32_t l_1808 = 0x93B27AADL;
    int32_t l_1812 = 0xAF929C03L;
    struct S1 *l_1821 = &g_22;
    int i;
    for (i = 0; i < 2; i++)
        l_1674[i] = 0xF6001330L;
    if ((safe_mul_func_int8_t_s_s((-1L), (safe_sub_func_int64_t_s_s(g_18, ((func_29(func_33((safe_add_func_uint8_t_u_u(((safe_lshift_func_int16_t_s_s((((func_40(func_45(l_49, l_49, ((func_50(g_22.f0.f1, p_20, p_20, p_20, l_56) , (void*)0) == (void*)0)), g_2[3], l_56, p_20) , g_72) ^ 0x2BL) && 0x9E97EA8BL), p_20)) | 0xBD748DDBEDDB7F4ALL), l_49.f1)), l_1431), p_20, g_1009) && 0xCB9F0CECC4E0B7EELL) , (*g_1412)))))))
    { 
        int32_t *l_1621 = &g_7[0];
        uint16_t *** const *l_1644 = &g_611;
        uint16_t *** const **l_1643[6];
        struct S0 l_1648 = {1,-12};
        int32_t l_1668[2];
        uint64_t l_1676 = 18446744073709551614UL;
        int32_t ***l_1701 = &g_79[1][2][2];
        const struct S0 l_1708 = {1,-126};
        union U2 l_1727[7] = {{-2L},{-2L},{-2L},{-2L},{-2L},{-2L},{-2L}};
        int64_t *l_1730 = &g_22.f1;
        uint16_t l_1764 = 0xF310L;
        int16_t ***l_1800[1][2];
        uint16_t l_1804[2];
        uint64_t l_1809[6] = {0UL,18446744073709551615UL,18446744073709551615UL,0UL,18446744073709551615UL,18446744073709551615UL};
        int i, j;
        for (i = 0; i < 6; i++)
            l_1643[i] = &l_1644;
        for (i = 0; i < 2; i++)
            l_1668[i] = 0x6C815DCAL;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 2; j++)
                l_1800[i][j] = &g_914;
        }
        for (i = 0; i < 2; i++)
            l_1804[i] = 0xC3B0L;
        for (g_82 = (-28); (g_82 > 48); g_82 = safe_add_func_uint16_t_u_u(g_82, 5))
        { 
            int32_t **l_1619 = &l_1431;
            int32_t **l_1620[3][3][1] = {{{(void*)0},{&g_80},{(void*)0}},{{&g_80},{(void*)0},{&g_80}},{{(void*)0},{&g_80},{(void*)0}}};
            struct S0 l_1649[5][1] = {{{-0,32}},{{1,-30}},{{-0,32}},{{1,-30}},{{-0,32}}};
            const uint64_t *l_1654 = &g_72;
            const uint64_t **l_1653 = &l_1654;
            const uint64_t ***l_1652[2];
            const struct S0 * const *l_1663 = &g_1210;
            const struct S0 * const **l_1662[5] = {&l_1663,&l_1663,&l_1663,&l_1663,&l_1663};
            const struct S0 * const ***l_1661 = &l_1662[1];
            int i, j, k;
            for (i = 0; i < 2; i++)
                l_1652[i] = &l_1653;
            l_1621 = ((*l_1619) = l_1431);
            if ((*g_80))
            { 
                uint8_t *l_1637 = &g_82;
                int32_t l_1638[2];
                uint16_t *** const *l_1642 = &g_611;
                uint16_t *** const **l_1641[1];
                int i;
                for (i = 0; i < 2; i++)
                    l_1638[i] = 0xDA715CEAL;
                for (i = 0; i < 1; i++)
                    l_1641[i] = &l_1642;
                for (g_72 = 0; (g_72 <= 2); g_72 += 1)
                { 
                    uint32_t l_1639[4];
                    int32_t *l_1640 = &g_2[2];
                    int i;
                    for (i = 0; i < 4; i++)
                        l_1639[i] = 0x5ED74884L;
                    (*l_1619) = (((((safe_add_func_int32_t_s_s((safe_mul_func_int16_t_s_s(((*g_80) || (safe_mul_func_int16_t_s_s(((safe_sub_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_u((safe_add_func_int64_t_s_s((((safe_rshift_func_int8_t_s_u(((void*)0 != l_1636), 4)) , &g_89) == l_1637), (-1L))), 13)), (l_1638[1] >= g_2[2]))) && p_20), l_1639[0]))), p_20)), p_20)) || g_65[1]) < g_89) , 0x2AE454F6L) , (void*)0);
                    (*l_1619) = l_1640;
                    if (l_1638[1])
                        continue;
                    l_1643[2] = l_1641[0];
                    (*g_80) &= p_20;
                }
            }
            else
            { 
                int32_t * const l_1645 = &g_2[1];
                const struct S0 * const ****l_1664 = (void*)0;
                const struct S0 * const ****l_1665 = &l_1661;
                uint32_t l_1666 = 18446744073709551615UL;
                for (g_22.f2 = 0; (g_22.f2 <= 6); g_22.f2 += 1)
                { 
                    int32_t **l_1646 = &g_1049[1];
                    const union U2 *l_1647 = &g_24;
                    int i;
                    if (g_92[g_22.f2])
                        break;
                    (*l_1646) = l_1645;
                    return l_1647;
                }
                l_1431 = l_1621;
            }
            --l_1676;
        }
        for (g_257.f1 = 1; (g_257.f1 <= 6); g_257.f1 += 1)
        { 
            int32_t **l_1679[3][1];
            uint32_t *l_1691 = &g_979[0][1];
            int8_t l_1694 = 0xCBL;
            const uint32_t l_1697 = 18446744073709551608UL;
            uint16_t *l_1704 = &g_875;
            uint16_t **l_1703 = &l_1704;
            int32_t l_1732 = 1L;
            uint8_t l_1753[2][3][2];
            const int32_t *l_1763 = (void*)0;
            uint64_t l_1770 = 18446744073709551608UL;
            int i, j, k;
            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 1; j++)
                    l_1679[i][j] = &l_1431;
            }
            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 3; j++)
                {
                    for (k = 0; k < 2; k++)
                        l_1753[i][j][k] = 7UL;
                }
            }
            l_1431 = (void*)0;
            l_1673 = (((((*g_23) , ((*g_23) , 0xFFL)) < ((safe_div_func_uint64_t_u_u(p_20, p_20)) > ((((+(p_20 ^ ((safe_add_func_int8_t_s_s((safe_mul_func_int8_t_s_s((safe_add_func_uint16_t_u_u((((safe_mul_func_int8_t_s_s((((*l_1691)++) >= (l_1669 | p_20)), (*g_1586))) >= (-5L)) != l_1694), (**g_914))), 6UL)), (*g_1586))) ^ 0x2694L))) && p_20) , g_1675[2][0]) < g_65[0]))) , p_20) | p_20);
            if (((safe_sub_func_int64_t_s_s(((l_1697 && (((0L == (~((safe_mul_func_uint8_t_u_u(254UL, ((&l_1679[1][0] != l_1701) & (l_1702 == l_1703)))) & g_7[0]))) , 0xC060915C6728BBF9LL) | p_20)) == p_20), p_20)) | g_89))
            { 
                uint64_t l_1705[2];
                const union U2 *l_1709 = &g_24;
                int i;
                for (i = 0; i < 2; i++)
                    l_1705[i] = 0UL;
                ++l_1705[1];
                l_49 = l_1708;
                (*g_80) = p_20;
                return l_1709;
            }
            else
            { 
                uint16_t **l_1728 = &l_1704;
                int32_t l_1729 = 0xD0FAE3E3L;
                int32_t ****l_1748[2];
                int32_t *****l_1747 = &l_1748[0];
                uint16_t l_1758 = 0x37EAL;
                uint64_t *l_1759 = &l_1676;
                uint64_t *l_1760 = &g_94;
                int64_t l_1807 = 7L;
                int i;
                for (i = 0; i < 2; i++)
                    l_1748[i] = &l_1701;
                for (g_72 = 0; (g_72 > 34); g_72 = safe_add_func_uint16_t_u_u(g_72, 6))
                { 
                    int64_t l_1715 = (-1L);
                    ++l_1712;
                    (*g_80) = (l_1715 != p_20);
                    return g_1716;
                }
                l_1732 &= (((((((***g_449) = (*g_23)) , (safe_lshift_func_uint16_t_u_s((!(safe_div_func_uint16_t_u_u((~((safe_sub_func_int16_t_s_s((((l_1727[4] , l_1728) == (l_1729 , l_1702)) >= (((((((*g_1586) = ((*p_21) , ((void*)0 == l_1730))) == g_7[0]) ^ 0L) || p_20) <= g_455) == l_1731)), p_20)) , 0x65FBD83AL)), p_20))), 6))) != 18446744073709551615UL) & p_20) != 4L) && 0xF4L);
                if ((safe_mul_func_int16_t_s_s((((safe_lshift_func_int16_t_s_s(g_1737, 12)) >= (((safe_sub_func_int16_t_s_s((g_1740[1] <= ((++(*l_1704)) | (p_20 > (--(**g_1411))))), (safe_mod_func_uint16_t_u_u((((*l_1747) = (void*)0) != (void*)0), (safe_rshift_func_int16_t_s_u(((((*l_1760) |= ((*l_1759) = (safe_mod_func_int64_t_s_s(l_1753[1][2][1], (safe_add_func_uint8_t_u_u((safe_sub_func_int32_t_s_s(p_20, l_1758)), g_113)))))) ^ p_20) > 0x455CE2D2F7646530LL), (**g_962))))))) & (-4L)) & l_1673)) , (-4L)), 65535UL)))
                { 
                    const int32_t *l_1761[5][4][3] = {{{&l_1732,&g_65[4],&l_1671},{&l_1672,&l_1672,&l_1671},{&g_65[4],&l_1732,&l_1673},{&l_1668[1],&l_1672,&l_1668[1]}},{{&l_1668[1],&g_65[4],&l_1672},{&g_65[4],&l_1668[1],&l_1668[1]},{&l_1672,&l_1668[1],&l_1673},{&l_1732,&g_65[4],&l_1671}},{{&l_1672,&l_1672,&l_1671},{&g_65[4],&l_1732,&l_1673},{&l_1668[1],&l_1672,&l_1668[1]},{&l_1668[1],&g_65[4],&l_1672}},{{&g_65[4],&l_1668[1],&l_1668[1]},{&l_1672,&l_1668[1],&l_1673},{&l_1732,&g_65[4],&l_1671},{&l_1672,&l_1672,&l_1671}},{{&g_65[4],&l_1732,&l_1673},{&l_1668[1],&l_1672,&l_1668[1]},{&l_1668[1],&g_65[4],&l_1672},{&g_65[4],&l_1668[1],&l_1668[1]}}};
                    const int32_t **l_1762[1][4][5] = {{{&l_1761[2][2][2],(void*)0,(void*)0,&l_1761[2][1][2],&l_1761[2][1][2]},{(void*)0,&l_1761[2][2][2],(void*)0,(void*)0,&l_1761[2][1][2]},{&l_1761[2][0][1],&l_1761[1][0][0],&l_1761[2][1][2],&l_1761[1][0][0],&l_1761[2][0][1]},{(void*)0,&l_1761[1][0][0],&l_1761[2][2][2],&l_1761[2][0][1],&l_1761[2][2][2]}}};
                    int32_t l_1767 = 0L;
                    int32_t l_1768 = 0xE0FCD392L;
                    int32_t l_1769[1][3];
                    uint8_t *l_1786 = &g_82;
                    int i, j, k;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 3; j++)
                            l_1769[i][j] = 2L;
                    }
                    l_1763 = l_1761[1][0][0];
                    l_1764++;
                    l_1770--;
                    if (p_20)
                        continue;
                    (*g_80) = (((*l_1730) = (&l_1697 != l_1431)) , ((0xAAB084B4L && (0xB1131600E282FC30LL | (p_20 > (safe_rshift_func_uint16_t_u_u((safe_div_func_uint8_t_u_u((((safe_rshift_func_uint8_t_u_u(((*l_1786) = (safe_unary_minus_func_uint64_t_u((safe_sub_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u(0x00288216L, (0x619DF604F5E724CALL < 0xDCBFBCEEF3F56D10LL))), p_20)), 5L))))), g_22.f2)) <= p_20) && p_20), g_257.f0.f1)), p_20))))) <= (*l_1763)));
                }
                else
                { 
                    uint16_t l_1801[7];
                    int32_t l_1802[7] = {0x6C8F0EDBL,0x6C8F0EDBL,0x6C8F0EDBL,0x6C8F0EDBL,0x6C8F0EDBL,0x6C8F0EDBL,0x6C8F0EDBL};
                    int i;
                    for (i = 0; i < 7; i++)
                        l_1801[i] = 65528UL;
                    (*g_80) = (safe_sub_func_uint64_t_u_u((!((((*l_1691)--) || 1L) && (l_1792 == (l_1793 = (void*)0)))), ((*l_1760) |= ((safe_mul_func_int8_t_s_s(((l_1802[5] |= (g_286 ^= (l_1801[6] = ((safe_rshift_func_int8_t_s_s((-3L), 0)) | ((p_20 , (&g_914 == (((safe_sub_func_uint16_t_u_u((**g_962), (*g_915))) , l_49) , l_1800[0][1]))) > 0x8D9CL))))) , (*g_1586)), p_20)) <= 1L))));
                    l_1804[1]--;
                }
                (*g_80) = p_20;
                ++l_1809[5];
            }
            for (g_24.f0 = 0; g_24.f0 < 3; g_24.f0 += 1)
            {
                for (g_82 = 0; g_82 < 1; g_82 += 1)
                {
                    l_1679[g_24.f0][g_82] = &g_1049[3];
                }
            }
        }
        l_1431 = &l_1668[1];
    }
    else
    { 
        int32_t **l_1814 = &l_1431;
        const struct S0 l_1822 = {0,39};
        struct S1 l_1823 = {{-0,-57},-9L,0x03BFAD52L};
        int64_t *l_1824[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        int i;
        (*l_1814) = g_1813;
        (**g_449) = (**g_449);
        (*l_1814) = ((((**l_1814) = ((0xB197F77BL < (safe_mul_func_int8_t_s_s((safe_unary_minus_func_int16_t_s((safe_sub_func_uint32_t_u_u(((((((!(l_1821 != l_1821)) ^ ((l_1822 , l_1823) , ((((((((func_40((*l_1814), (&g_602 != (void*)0), p_21, p_20) , 3UL) ^ p_20) || (**l_1814)) < (**g_1411)) == 6UL) , 0xF0385905A64DD8BDLL) ^ (-1L)) , g_979[1][1]))) & 0x91F7E09BL) <= (-1L)) >= (-1L)) , 0xD34B1E2AL), (-1L))))), 0x48L))) <= g_94)) >= l_1823.f0.f0) , (void*)0);
    }
    return l_56;
}



static uint64_t  func_29(union U2 * const  p_30, int32_t  p_31, int32_t  p_32)
{ 
    int32_t l_1442 = 0x3B11DC7DL;
    struct S1 l_1458 = {{-1,33},0L,0UL};
    struct S0 *l_1498 = &g_63;
    int32_t l_1499[4][2][6];
    int64_t ***l_1516 = &g_524;
    int16_t *l_1549 = &g_455;
    struct S0 ***l_1567[3][6] = {{&g_408[3][1][3],&g_408[3][1][3],&g_408[3][1][3],&g_408[3][1][3],&g_408[3][1][3],&g_408[3][1][3]},{&g_408[3][1][3],&g_408[3][1][3],&g_408[3][1][3],&g_408[3][1][3],&g_408[3][1][3],&g_408[3][1][3]},{&g_408[3][1][3],&g_408[3][1][3],&g_408[3][1][3],&g_408[3][1][3],&g_408[3][1][3],&g_408[3][1][3]}};
    int32_t *l_1603[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int32_t **l_1604 = &g_80;
    uint16_t ****l_1606 = &g_611;
    uint32_t *l_1614 = (void*)0;
    uint16_t *l_1615[1][6][3] = {{{&g_875,(void*)0,&g_115},{(void*)0,(void*)0,(void*)0},{(void*)0,&g_875,&g_115},{(void*)0,(void*)0,&g_875},{(void*)0,&g_875,&g_875},{&g_875,(void*)0,&g_115}}};
    uint64_t l_1616 = 0xEE6630BFF789F5C5LL;
    int i, j, k;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 6; k++)
                l_1499[i][j][k] = 0x4EBA2E5EL;
        }
    }
    return p_31;
}



static union U2 * func_33(int32_t  p_34, int32_t * p_35)
{ 
    int32_t *l_1432 = &g_65[3];
    int32_t *l_1433 = (void*)0;
    int32_t *l_1434 = &g_65[0];
    int32_t *l_1435 = &g_65[0];
    int32_t l_1436 = (-1L);
    int32_t *l_1437[3][1];
    int8_t l_1438 = 0L;
    uint32_t l_1439[3];
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 1; j++)
            l_1437[i][j] = (void*)0;
    }
    for (i = 0; i < 3; i++)
        l_1439[i] = 0x53CAF4E7L;
    l_1439[1]--;
    return (**g_449);
}



static struct S1  func_40(int32_t * p_41, uint8_t  p_42, union U2 * p_43, int32_t  p_44)
{ 
    int32_t l_1055[2];
    uint16_t *l_1061 = (void*)0;
    union U2 *l_1062[2][3];
    uint16_t *l_1063 = &g_113;
    int64_t *l_1064 = &g_22.f1;
    int32_t l_1065[5] = {0xA817615DL,0xA817615DL,0xA817615DL,0xA817615DL,0xA817615DL};
    uint64_t l_1084 = 3UL;
    int8_t l_1099 = 0x33L;
    struct S1 l_1105 = {{-0,1},0xFC06968610F39DC6LL,0x608CEF56L};
    int8_t *l_1147 = &g_24.f0;
    int8_t l_1151 = 0xA7L;
    struct S0 l_1154 = {-0,40};
    struct S0 l_1186 = {-0,-14};
    uint32_t l_1191 = 4294967289UL;
    uint64_t ***l_1221 = &g_98;
    uint64_t *l_1230 = &g_72;
    int32_t l_1233 = 0x17E214A2L;
    uint64_t l_1234 = 18446744073709551615UL;
    const uint16_t ***l_1247 = (void*)0;
    int64_t ***l_1268 = &g_524;
    int16_t ***l_1304 = &g_914;
    int32_t l_1403 = 0x18898EE5L;
    uint16_t l_1404[4] = {0x2DABL,0x2DABL,0x2DABL,0x2DABL};
    int i, j;
    for (i = 0; i < 2; i++)
        l_1055[i] = 0x8C4B42D2L;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
            l_1062[i][j] = &g_24;
    }
    l_1065[1] |= (+((*l_1064) = (0xA1L | (safe_rshift_func_uint8_t_u_s((((safe_div_func_uint64_t_u_u(((((p_42 >= l_1055[0]) < ((safe_add_func_int16_t_s_s(((((*l_1063) = (~((((*g_915) &= (safe_mod_func_int8_t_s_s((((void*)0 == l_1061) & (((((((**g_449) = (**g_449)) == l_1062[1][0]) < l_1055[0]) , (void*)0) != (*g_825)) < 0x5E98L)), p_44))) , 0x4E851E70L) != l_1055[0]))) , g_24.f0) <= (-1L)), l_1055[0])) , p_42)) | l_1055[1]) , p_42), p_44)) <= l_1055[0]) != 1L), 4)))));
    return (*g_256);
}



static int32_t * func_45(struct S0  p_46, struct S0  p_47, uint16_t  p_48)
{ 
    uint16_t l_862 = 65526UL;
    int32_t l_863 = 0x657C4283L;
    int16_t l_868[4][3][4] = {{{9L,(-4L),(-4L),9L},{0L,(-4L),0xAC10L,(-4L)},{(-4L),0x6C0DL,0xAC10L,0xAC10L}},{{0L,0L,(-4L),0xAC10L},{9L,0x6C0DL,9L,(-4L)},{9L,(-4L),(-4L),9L}},{{0L,(-4L),0xAC10L,(-4L)},{(-4L),0x6C0DL,0xAC10L,0xAC10L},{0L,0L,(-4L),0xAC10L}},{{9L,0x6C0DL,9L,(-4L)},{9L,(-4L),(-4L),9L},{0L,(-4L),0xAC10L,(-4L)}}};
    int32_t l_869 = (-1L);
    int32_t l_870 = 0x73821EF3L;
    int32_t l_871 = 0xD0874D15L;
    int32_t l_872 = (-1L);
    int32_t l_873[6] = {0xB0089DA9L,0xB0089DA9L,0xB0089DA9L,0xB0089DA9L,0xB0089DA9L,0xB0089DA9L};
    int16_t l_874 = 0x3C43L;
    uint32_t l_891 = 18446744073709551607UL;
    struct S1 *l_913[1];
    int16_t ** const l_918[6][7] = {{&g_915,&g_915,&g_915,&g_915,&g_915,&g_915,&g_915},{&g_915,&g_915,&g_915,&g_915,&g_915,&g_915,&g_915},{&g_915,&g_915,&g_915,&g_915,&g_915,&g_915,&g_915},{&g_915,&g_915,&g_915,&g_915,&g_915,&g_915,&g_915},{&g_915,&g_915,&g_915,&g_915,&g_915,&g_915,&g_915},{&g_915,&g_915,&g_915,&g_915,&g_915,&g_915,&g_915}};
    union U2 l_921 = {0x75L};
    struct S0 l_924 = {1,33};
    uint64_t *l_944 = &g_94;
    uint64_t ** const l_943 = &l_944;
    uint64_t l_946 = 18446744073709551606UL;
    struct S0 l_1000 = {1,110};
    uint16_t l_1039[5][5] = {{0x3075L,0x841DL,0x3075L,0xCBA5L,0xCBA5L},{0UL,0x8427L,0UL,0x13F8L,0x13F8L},{0x3075L,0x841DL,0x3075L,0xCBA5L,0xCBA5L},{0UL,0x8427L,0UL,0x13F8L,0x13F8L},{0x3075L,0x841DL,0x3075L,0xCBA5L,0xCBA5L}};
    int32_t *l_1043 = &g_7[0];
    int32_t *l_1044[1][7][3];
    int32_t l_1045 = 0xE8EFAA69L;
    uint32_t l_1046[2];
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_913[i] = &g_257;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 3; k++)
                l_1044[i][j][k] = (void*)0;
        }
    }
    for (i = 0; i < 2; i++)
        l_1046[i] = 0UL;
lbl_917:
    (*g_80) = 0x43A4559DL;
    l_863 = l_862;
lbl_1042:
    for (g_24.f0 = 0; (g_24.f0 != (-5)); g_24.f0--)
    { 
        int32_t *l_866 = &g_7[1];
        int32_t *l_867[4][4] = {{&g_65[0],&g_65[0],&g_65[0],&g_65[0]},{&g_65[0],&g_65[0],&g_65[0],&g_65[0]},{&g_65[0],&g_65[0],&g_65[0],&g_65[0]},{&g_65[0],&g_65[0],&g_65[0],&g_65[0]}};
        uint64_t **l_936[2];
        uint16_t l_991 = 1UL;
        union U2 *l_1030 = &g_24;
        int i, j;
        for (i = 0; i < 2; i++)
            l_936[i] = (void*)0;
        g_875++;
        for (l_872 = 0; (l_872 < (-27)); l_872 = safe_sub_func_uint16_t_u_u(l_872, 1))
        { 
            uint16_t l_890[1][4][6] = {{{65532UL,9UL,65532UL,65532UL,9UL,65532UL},{65532UL,9UL,65532UL,65532UL,9UL,65532UL},{65532UL,9UL,65532UL,65532UL,9UL,65532UL},{65532UL,9UL,65535UL,65535UL,65532UL,65535UL}}};
            uint16_t **l_892 = (void*)0;
            int16_t *l_893 = &l_874;
            int16_t *l_894 = &g_754;
            int32_t l_897 = 1L;
            struct S1 *l_910 = &g_257;
            uint64_t l_942 = 8UL;
            const int64_t l_950 = 1L;
            struct S0 l_955 = {-0,42};
            uint16_t *l_961 = (void*)0;
            uint16_t **l_960[5][3][4] = {{{&l_961,&l_961,&l_961,(void*)0},{&l_961,&l_961,&l_961,&l_961},{&l_961,&l_961,&l_961,&l_961}},{{&l_961,&l_961,(void*)0,(void*)0},{&l_961,&l_961,&l_961,&l_961},{&l_961,&l_961,(void*)0,&l_961}},{{&l_961,&l_961,&l_961,(void*)0},{&l_961,&l_961,&l_961,&l_961},{&l_961,&l_961,&l_961,&l_961}},{{&l_961,&l_961,&l_961,(void*)0},{&l_961,&l_961,&l_961,&l_961},{&l_961,&l_961,&l_961,&l_961}},{{&l_961,&l_961,(void*)0,(void*)0},{&l_961,&l_961,&l_961,&l_961},{&l_961,&l_961,(void*)0,&l_961}}};
            uint32_t l_972 = 0x900FE387L;
            uint16_t ** const *l_976 = &l_960[4][1][3];
            uint16_t ** const **l_975 = &l_976;
            int i, j, k;
            p_47.f0 |= (*g_80);
            if ((safe_rshift_func_int16_t_s_s(((*l_894) = (p_46.f0 , (safe_add_func_uint16_t_u_u((safe_lshift_func_int16_t_s_s(((safe_mul_func_int8_t_s_s((((*l_866) , (1L >= (safe_rshift_func_int8_t_s_s(l_890[0][1][4], 7)))) & l_890[0][1][4]), ((l_891 || ((*l_893) &= ((((((l_892 != (void*)0) >= 6UL) < p_47.f1) , g_257.f0.f1) , (void*)0) != &l_867[0][3]))) | g_94))) & 3L), 2)), l_869)))), 14)))
            { 
                int32_t l_896 = 0x81712B4FL;
                int32_t l_899 = 3L;
                union U2 l_909 = {-2L};
                uint64_t **l_937[6];
                int i;
                for (i = 0; i < 6; i++)
                    l_937[i] = (void*)0;
                if ((*g_80))
                { 
                    uint32_t l_895 = 18446744073709551615UL;
                    int32_t l_898 = 1L;
                    int32_t l_900 = 2L;
                    int32_t l_901[7][7] = {{0x3F58A338L,(-3L),0x6F3F2102L,0L,0xDF434F8CL,(-1L),1L},{(-3L),0xD697468AL,0xDF434F8CL,0x7DD55E6BL,0xE3245089L,0xE3245089L,0x7DD55E6BL},{0x3F58A338L,0L,0x3F58A338L,0xE3245089L,0L,0xD697468AL,0x7DD55E6BL},{0x23C8CE76L,(-7L),(-1L),(-1L),0x7DD55E6BL,0x3F58A338L,1L},{0x5513BBB0L,0x3F58A338L,0xD697468AL,(-7L),(-7L),0xD697468AL,0x3F58A338L},{1L,(-1L),0L,0x5513BBB0L,(-7L),0xE3245089L,0x82265D54L},{0L,0x23C8CE76L,(-1L),0x6F3F2102L,0x7DD55E6BL,(-1L),0L}};
                    uint32_t l_902 = 0xEF478EA1L;
                    struct S1 **l_911 = (void*)0;
                    struct S1 **l_912 = &g_256;
                    int16_t ***l_916 = &g_914;
                    int i, j;
                    l_895 |= (*g_80);
                    --l_902;
                    p_47.f0 = ((*l_866) = ((safe_rshift_func_int16_t_s_u((l_909 , ((((*l_912) = l_910) != l_913[0]) , (l_894 == (void*)0))), 15)) && (g_22 , (((*l_916) = g_914) == (void*)0))));
                    (**g_602) = (*g_409);
                    if (g_22.f1)
                        goto lbl_917;
                }
                else
                { 
                    uint8_t *l_929 = &g_89;
                    (*g_80) = ((l_918[2][0] != (l_909 , l_918[2][0])) == ((((safe_mul_func_int8_t_s_s((((((l_921 , (((safe_div_func_int16_t_s_s((l_924 , (safe_lshift_func_int16_t_s_u((safe_mul_func_uint8_t_u_u(((*l_929)++), (+(0UL >= (safe_unary_minus_func_int64_t_s((((*g_80) >= g_286) > 4294967290UL))))))), g_18))), 2UL)) > l_924.f1) >= l_899)) > p_47.f0) , p_48) <= (*g_915)) || p_48), 7L)) < g_65[0]) , 9UL) , 0x0BCC0A7A2B1D4948LL));
                    p_47.f0 ^= (safe_rshift_func_uint16_t_u_u((0x40L > p_48), 4));
                    p_46.f1 = 0x804DB605L;
                }
                if (((*l_910) , (p_46.f0 > ((l_937[2] = l_936[0]) != (((safe_div_func_int64_t_s_s(1L, (safe_sub_func_uint16_t_u_u(l_896, (l_942 <= l_909.f0))))) & 0L) , l_943)))))
                { 
                    uint64_t l_945 = 2UL;
                    if (l_945)
                        break;
                }
                else
                { 
                    int32_t **l_949 = &l_867[1][1];
                    --l_946;
                    (*l_949) = &l_896;
                }
                if (l_950)
                    break;
            }
            else
            { 
                uint32_t *l_951 = &g_286;
                const uint16_t ***l_964 = &g_962;
                uint32_t *l_971 = &g_22.f2;
                int32_t l_973 = (-7L);
                struct S0 l_974 = {-1,39};
                (*l_866) = ((++(*l_951)) , (&g_611 == ((!l_950) , ((((l_955 , ((safe_sub_func_int16_t_s_s((safe_div_func_uint32_t_u_u((((l_960[1][1][0] == ((*l_964) = g_962)) , ((safe_add_func_int64_t_s_s(6L, (((safe_div_func_uint8_t_u_u((safe_div_func_uint32_t_u_u((((*l_971) = ((void*)0 != &g_915)) && 0x6FD86B1FL), p_46.f0)), g_286)) < p_46.f0) > g_7[0]))) <= (-1L))) == l_972), l_973)), p_47.f0)) <= g_65[0])) ^ p_48) , l_974) , l_975))));
                if ((((safe_mul_func_int16_t_s_s(0x5D26L, (p_48 ^= g_979[1][1]))) && ((p_46.f1 , (**g_602)) , (**g_914))) <= (safe_div_func_int32_t_s_s((safe_sub_func_uint32_t_u_u(((safe_div_func_int8_t_s_s(p_46.f1, (-8L))) >= g_22.f0.f1), l_891)), 0x91084E23L))))
                { 
                    uint16_t ****l_987[6][1][2] = {{{&g_611,&g_611}},{{&g_611,&g_611}},{{&g_611,&g_611}},{{&g_611,&g_611}},{{&g_611,&g_611}},{{&g_611,&g_611}}};
                    int i, j, k;
                    (*l_866) |= (!65535UL);
                    if (p_46.f0)
                        continue;
                    (*l_866) = (l_987[5][0][1] != &g_611);
                }
                else
                { 
                    uint16_t ****l_989 = &g_611;
                    uint16_t *****l_988 = &l_989;
                    g_990 = l_988;
                }
                for (l_871 = 2; (l_871 >= 0); l_871 -= 1)
                { 
                    int i, j;
                    l_867[l_871][l_871] = &l_869;
                }
            }
            if ((*l_866))
                continue;
        }
        --l_991;
        (***g_825) = (p_46 , l_924);
        for (l_862 = 0; (l_862 < 3); l_862++)
        { 
            uint32_t l_1006[4][4] = {{0x32032673L,0x32032673L,4294967295UL,0x32032673L},{0x32032673L,4294967293UL,4294967293UL,0x32032673L},{4294967293UL,0x32032673L,4294967293UL,4294967293UL},{0x32032673L,0x32032673L,4294967295UL,0x32032673L}};
            int32_t l_1007 = 0x78D7221DL;
            int32_t l_1010 = (-1L);
            int32_t l_1011 = 0L;
            int32_t l_1012 = 0xEA1C9E3AL;
            int32_t l_1013 = 0x1F588BBAL;
            int32_t l_1014[3][7] = {{1L,0x6AA1DAEEL,0L,0L,0x6AA1DAEEL,1L,0x6AA1DAEEL},{(-1L),0xFA284C43L,0xFA284C43L,(-1L),4L,(-1L),0xFA284C43L},{(-3L),(-3L),1L,0L,1L,(-3L),(-3L)}};
            int32_t *l_1036 = (void*)0;
            int i, j;
            for (g_455 = 14; (g_455 < (-29)); --g_455)
            { 
                struct S0 l_1001 = {0,117};
                int32_t l_1015 = (-1L);
                int32_t l_1016 = 0x9A93A478L;
                int32_t l_1017 = 0x2EEC4269L;
                int32_t l_1018 = 0L;
                int32_t l_1019[4][4][7] = {{{0xF91CE2BCL,0x4CD65DE3L,0x4CD65DE3L,0xF91CE2BCL,0x252ADBEAL,0x2C37AB0DL,0xF91CE2BCL},{0x98E6A89CL,0xF6DA8186L,0x9C32A8DBL,0x9C32A8DBL,0xF6DA8186L,0x98E6A89CL,1L},{9L,0xF91CE2BCL,0x5F22599DL,0x6149ADE5L,0x6149ADE5L,0x5F22599DL,0xF91CE2BCL},{0xF6DA8186L,1L,0x98E6A89CL,0xF6DA8186L,0x9C32A8DBL,0x9C32A8DBL,0xF6DA8186L}},{{0x2C37AB0DL,0x4CD65DE3L,7L,0x95937FA0L,0x4CD65DE3L,0x5F22599DL,0x5F22599DL},{1L,0x9C32A8DBL,5L,0x9C32A8DBL,1L,5L,0x98E6A89CL},{0x2C37AB0DL,0x5F22599DL,0x95937FA0L,0x2C37AB0DL,0x95937FA0L,0x5F22599DL,0x2C37AB0DL},{(-1L),0x98E6A89CL,0xA7B0C33EL,2L,0x98E6A89CL,2L,0xA7B0C33EL}},{{0x2C37AB0DL,0x2C37AB0DL,0x6149ADE5L,0x4CD65DE3L,0x252ADBEAL,0x6149ADE5L,0x252ADBEAL},{1L,0xA7B0C33EL,0xA7B0C33EL,1L,2L,(-1L),1L},{7L,0x252ADBEAL,0x95937FA0L,0x95937FA0L,0x252ADBEAL,7L,0x5F22599DL},{0x9C32A8DBL,1L,5L,0x98E6A89CL,0x98E6A89CL,5L,1L}},{{0x252ADBEAL,0x5F22599DL,7L,0x252ADBEAL,0x95937FA0L,0x95937FA0L,0x252ADBEAL},{(-1L),1L,(-1L),2L,1L,0xA7B0C33EL,0xA7B0C33EL},{0x4CD65DE3L,0x252ADBEAL,0x6149ADE5L,0x252ADBEAL,0x4CD65DE3L,0x6149ADE5L,0x2C37AB0DL},{0x98E6A89CL,0xA7B0C33EL,2L,0x98E6A89CL,2L,0xA7B0C33EL,0x98E6A89CL}}};
                int32_t l_1020 = 0x98AE33BAL;
                uint32_t *l_1035 = &l_891;
                int i, j, k;
                g_1008 |= ((((*l_866) && (l_1007 = (safe_mul_func_uint16_t_u_u((((l_1001 = (l_1000 = l_924)) , (safe_mul_func_int16_t_s_s(p_47.f1, ((((safe_sub_func_int16_t_s_s((l_1001 , (l_1001 , (-1L))), (254UL && 0x62L))) | l_1006[1][3]) & p_47.f1) || g_257.f0.f1)))) != l_1006[1][3]), 0xAC1CL)))) != p_47.f1) | (*g_915));
                g_1021++;
                (*g_80) = (safe_div_func_int8_t_s_s(((safe_rshift_func_uint8_t_u_s((safe_mul_func_uint16_t_u_u(l_1014[1][2], (l_1030 == ((safe_mul_func_int16_t_s_s((((((((**l_943) ^= ((safe_lshift_func_uint16_t_u_u(((p_48 | ((((l_1010 = p_46.f0) & (((((l_1012 , &g_286) != l_1035) ^ 0L) && l_1017) , 0xA00EL)) < 0x35AA3BF0FE65DECELL) < 5UL)) , p_47.f0), l_873[3])) & l_868[2][0][3])) ^ g_192) >= p_47.f1) > (*g_915)) == 0UL) , 0x1AE9L), l_1012)) , (void*)0)))), g_22.f2)) , p_47.f1), g_63.f1));
            }
            if (l_891)
                goto lbl_1042;
            if (p_47.f1)
                continue;
            l_1036 = &l_872;
            (*l_866) ^= l_870;
            for (g_286 = 10; (g_286 != 28); g_286++)
            { 
                (*l_1036) ^= (((*g_602) = &p_46) != &p_47);
                for (l_891 = 1; (l_891 <= 4); l_891 += 1)
                { 
                    int i;
                    ++l_1039[3][0];
                }
            }
        }
    }
    --l_1046[1];
    return g_1049[1];
}



static struct S1  func_50(int8_t  p_51, int16_t  p_52, int8_t  p_53, int64_t  p_54, union U2 * p_55)
{ 
    union U2 *l_60 = &g_24;
    int32_t *l_521 = (void*)0;
    int32_t l_569 = 0xB6AFBD44L;
    int32_t l_571[5][3];
    struct S1 l_578 = {{0,13},-6L,4294967292UL};
    uint64_t *l_649 = &g_72;
    int8_t l_657 = 0x21L;
    const int16_t l_666[7][3][7] = {{{0L,(-4L),0L,(-8L),(-8L),0L,(-4L)},{(-8L),(-4L),0x664CL,0x664CL,(-4L),(-8L),(-4L)},{0L,(-8L),(-8L),0L,(-4L),0L,(-8L)}},{{(-5L),(-5L),(-8L),0x664CL,(-8L),(-5L),(-5L)},{(-5L),(-8L),0x664CL,(-8L),(-5L),(-5L),(-8L)},{0L,(-4L),0L,(-8L),(-8L),0L,(-4L)}},{{(-8L),(-4L),0x664CL,0x664CL,(-4L),(-8L),(-4L)},{0L,(-8L),(-8L),0L,(-4L),0L,(-8L)},{(-5L),(-5L),(-8L),0x664CL,(-8L),(-5L),(-5L)}},{{(-5L),(-8L),0x664CL,(-8L),(-5L),(-5L),(-8L)},{0L,(-4L),0L,(-8L),(-8L),0L,(-4L)},{(-8L),(-4L),0x664CL,0x664CL,(-4L),(-8L),(-4L)}},{{0L,(-8L),(-8L),0L,(-4L),0L,(-8L)},{(-5L),(-5L),(-8L),0x664CL,(-8L),(-5L),(-5L)},{(-5L),(-8L),0x664CL,(-8L),(-5L),(-5L),(-8L)}},{{0L,(-4L),0x664CL,0L,0L,0x664CL,(-5L)},{0L,(-5L),(-4L),(-4L),(-5L),0L,(-5L)},{0x664CL,0L,0L,0x664CL,(-5L),0x664CL,0L}},{{(-8L),(-8L),0L,(-4L),0L,(-8L),(-8L)},{(-8L),0L,(-4L),0L,(-8L),(-8L),0L},{0x664CL,(-5L),0x664CL,0L,0L,0x664CL,(-5L)}}};
    uint64_t l_674[6][6][3] = {{{0x7D16934461CECF6DLL,0x5CA00CAC530F6E4ALL,0x8AEEBEA8E5EC2A53LL},{18446744073709551615UL,3UL,18446744073709551615UL},{0x7D16934461CECF6DLL,0x1C05BFC398A9D9FELL,6UL},{0xF6CF4E910A95F487LL,3UL,0x9070CCD3200D79BFLL},{0UL,0x5CA00CAC530F6E4ALL,6UL},{18446744073709551615UL,0xF64CF73BFB424FD4LL,18446744073709551615UL}},{{0UL,0x1C05BFC398A9D9FELL,0x8AEEBEA8E5EC2A53LL},{0xF6CF4E910A95F487LL,0xF64CF73BFB424FD4LL,0x9070CCD3200D79BFLL},{0x7D16934461CECF6DLL,0x5CA00CAC530F6E4ALL,0x8AEEBEA8E5EC2A53LL},{18446744073709551615UL,3UL,18446744073709551615UL},{0x7D16934461CECF6DLL,0x1C05BFC398A9D9FELL,6UL},{0xF6CF4E910A95F487LL,3UL,0x9070CCD3200D79BFLL}},{{0UL,0x5CA00CAC530F6E4ALL,6UL},{18446744073709551615UL,0xF64CF73BFB424FD4LL,18446744073709551615UL},{0UL,0x1C05BFC398A9D9FELL,0x8AEEBEA8E5EC2A53LL},{0xF6CF4E910A95F487LL,0xF64CF73BFB424FD4LL,0x9070CCD3200D79BFLL},{0x7D16934461CECF6DLL,0x5CA00CAC530F6E4ALL,0x8AEEBEA8E5EC2A53LL},{18446744073709551615UL,3UL,18446744073709551615UL}},{{0x7D16934461CECF6DLL,0x1C05BFC398A9D9FELL,6UL},{0xF6CF4E910A95F487LL,3UL,0x9070CCD3200D79BFLL},{0UL,0x5CA00CAC530F6E4ALL,6UL},{18446744073709551615UL,0xF64CF73BFB424FD4LL,18446744073709551615UL},{0UL,0x1C05BFC398A9D9FELL,0x8AEEBEA8E5EC2A53LL},{0xF6CF4E910A95F487LL,0xF64CF73BFB424FD4LL,0x9070CCD3200D79BFLL}},{{0x7D16934461CECF6DLL,0x5CA00CAC530F6E4ALL,0x8AEEBEA8E5EC2A53LL},{18446744073709551615UL,3UL,18446744073709551615UL},{0x7D16934461CECF6DLL,0x1C05BFC398A9D9FELL,6UL},{0xF6CF4E910A95F487LL,3UL,0x9070CCD3200D79BFLL},{0UL,0x5CA00CAC530F6E4ALL,6UL},{18446744073709551615UL,0xF64CF73BFB424FD4LL,18446744073709551615UL}},{{0UL,0x1C05BFC398A9D9FELL,0x8AEEBEA8E5EC2A53LL},{0xF6CF4E910A95F487LL,0xF64CF73BFB424FD4LL,0x9070CCD3200D79BFLL},{0x7D16934461CECF6DLL,0x5CA00CAC530F6E4ALL,0x8AEEBEA8E5EC2A53LL},{18446744073709551615UL,3UL,18446744073709551615UL},{0x7D16934461CECF6DLL,0x1C05BFC398A9D9FELL,6UL},{0xF6CF4E910A95F487LL,3UL,0x9070CCD3200D79BFLL}}};
    struct S0 *l_740 = &g_63;
    struct S0 ***l_777 = &g_408[1][1][2];
    uint32_t l_780[6][6][5] = {{{4294967295UL,4294967295UL,0x07E01ECEL,0x60688F65L,4294967288UL},{0x229014E6L,0UL,0UL,0x4FEEEC6CL,4294967295UL},{0x60688F65L,4294967295UL,0xD419E1B8L,4294967291UL,4294967295UL},{0x2A7D1E46L,0xC5072021L,0x70C9E326L,0xB0EB9400L,0x7097A37AL},{0xF935010DL,0x07E01ECEL,0x8D2B48FEL,0x53CA3713L,0x53CA3713L},{0x1E568E79L,7UL,0x1E568E79L,0x980DB3D2L,4294967294UL}},{{0xD419E1B8L,4294967291UL,4294967288UL,0x788B93A9L,0x553F4FB8L},{4294967286UL,0x592004A8L,0x08E76CA9L,4294967287UL,0x4E86E11CL},{0xBD23B894L,0xAB7E3EF5L,4294967288UL,0x4FE2D1EBL,0x53CA3713L},{0x62F01514L,4294967294UL,0x67955B75L,0x25A73C05L,0x2A7D1E46L},{0xF935010DL,4294967295UL,0x53CA3713L,0x4D780B2CL,0xBD23B894L},{0x70C9E326L,0xB9114456L,0xB9114456L,0x70C9E326L,7UL}},{{0x07E01ECEL,0x4C93DCC8L,0x6AC7B1C7L,0xB0897A59L,4294967295UL},{4294967294UL,0UL,0x70C9E326L,5UL,0x25A73C05L},{4294967291UL,4294967291UL,4294967291UL,0xB0897A59L,0x4C93DCC8L},{0UL,0x2A7D1E46L,0xC5072021L,0x70C9E326L,0xB0EB9400L},{0x60688F65L,4294967291UL,0x96CE629CL,0x4D780B2CL,4294967288UL},{0xB9114456L,0x25A73C05L,0x62F01514L,0x25A73C05L,0xB9114456L}},{{4294967295UL,0x96CE629CL,4294967295UL,0x4FE2D1EBL,4294967295UL},{4294967295UL,0x980DB3D2L,0x08E76CA9L,4294967286UL,0x1AEC9F1AL},{0xB0897A59L,0x8D2B48FEL,0xD419E1B8L,0x96CE629CL,4294967295UL},{0x229014E6L,4294967286UL,0x4FEEEC6CL,0x592004A8L,0xB9114456L},{4294967295UL,0xAB7E3EF5L,0x788B93A9L,0UL,4294967288UL},{4294967286UL,0xB0EB9400L,0x9C4AAAC7L,0x9C4AAAC7L,0xB0EB9400L}},{{0x157B418FL,4294967295UL,0x4D780B2CL,0x8D2B48FEL,0x4C93DCC8L},{0UL,7UL,7UL,0x4E86E11CL,0x25A73C05L},{4294967295UL,0xD419E1B8L,0UL,0x553F4FB8L,4294967295UL},{0UL,0x592004A8L,0xB0EB9400L,4294967294UL,7UL},{0x157B418FL,0x6AC7B1C7L,0x07E01ECEL,0x53CA3713L,0xBD23B894L},{4294967286UL,4294967289UL,0x2A7D1E46L,0x7097A37AL,0x2A7D1E46L}},{{4294967295UL,4294967295UL,0xB0897A59L,4294967295UL,0x53CA3713L},{0x229014E6L,0x4FEEEC6CL,4294967289UL,4294967295UL,5UL},{0xB0897A59L,0x53CA3713L,0xF935010DL,4294967288UL,0x4FE2D1EBL},{4294967295UL,0x4FEEEC6CL,0UL,0UL,0x229014E6L},{4294967295UL,4294967295UL,0xAB7E3EF5L,0x788B93A9L,0UL},{0xB9114456L,4294967289UL,0x7097A37AL,0x08E76CA9L,0x08E76CA9L}}};
    uint64_t *l_793 = &l_674[3][5][1];
    uint32_t l_802 = 0xC938C639L;
    uint32_t l_811[4][5][4] = {{{18446744073709551615UL,18446744073709551615UL,0x1A564346L,0x1A564346L},{18446744073709551615UL,18446744073709551615UL,0x1A564346L,0x1A564346L},{18446744073709551615UL,18446744073709551615UL,0x1A564346L,0x1A564346L},{18446744073709551615UL,18446744073709551615UL,0x1A564346L,0x1A564346L},{18446744073709551615UL,18446744073709551615UL,0x1A564346L,0x1A564346L}},{{18446744073709551615UL,18446744073709551615UL,0x1A564346L,0x1A564346L},{18446744073709551615UL,18446744073709551615UL,0x1A564346L,0x1A564346L},{18446744073709551615UL,18446744073709551615UL,0x1A564346L,0x1A564346L},{18446744073709551615UL,18446744073709551615UL,0x1A564346L,0x1A564346L},{18446744073709551615UL,18446744073709551615UL,0x1A564346L,0x1A564346L}},{{18446744073709551615UL,18446744073709551615UL,0x1A564346L,0x1A564346L},{18446744073709551615UL,18446744073709551615UL,0x1A564346L,0x1A564346L},{18446744073709551615UL,18446744073709551615UL,0x1A564346L,0x1A564346L},{18446744073709551615UL,18446744073709551615UL,0x1A564346L,0x1A564346L},{18446744073709551615UL,18446744073709551615UL,0x1A564346L,0x1A564346L}},{{18446744073709551615UL,18446744073709551615UL,0x1A564346L,0x1A564346L},{18446744073709551615UL,18446744073709551615UL,0x1A564346L,0x1A564346L},{18446744073709551615UL,18446744073709551615UL,0x1A564346L,0x1A564346L},{18446744073709551615UL,18446744073709551615UL,0x1A564346L,0x1A564346L},{18446744073709551615UL,18446744073709551615UL,0x1A564346L,0x1A564346L}}};
    int16_t l_818 = 0x4D70L;
    int16_t l_852 = 0xEBA2L;
    int i, j, k;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 3; j++)
            l_571[i][j] = (-5L);
    }
    (*g_409) = func_57(p_55, l_60);
    return l_578;
}



static struct S0  func_57(union U2 * p_58, union U2 * p_59)
{ 
    struct S0 l_61 = {0,98};
    uint64_t *l_96 = &g_72;
    uint64_t **l_95 = &l_96;
    int32_t l_122 = 1L;
    int32_t l_124 = 0x65476694L;
    int32_t l_127[5];
    union U2 **l_172 = &g_23;
    uint16_t l_186 = 65526UL;
    uint64_t **l_241 = &l_96;
    uint32_t l_362[3][3] = {{18446744073709551615UL,18446744073709551615UL,18446744073709551615UL},{18446744073709551615UL,18446744073709551615UL,18446744073709551615UL},{18446744073709551615UL,18446744073709551615UL,18446744073709551615UL}};
    struct S0 **l_410 = &g_409;
    int8_t l_425 = (-1L);
    uint64_t l_427 = 18446744073709551606UL;
    uint8_t l_463 = 0x99L;
    struct S0 l_518 = {-0,65};
    int i, j;
    for (i = 0; i < 5; i++)
        l_127[i] = 0x620CEAD8L;
    for (g_24.f0 = 0; (g_24.f0 <= 1); g_24.f0 += 1)
    { 
        uint32_t l_87 = 0UL;
        struct S0 *l_90[7];
        int32_t l_118 = 0x52583266L;
        int32_t l_120 = 0x59D86306L;
        int32_t l_121 = (-4L);
        int32_t l_123 = 2L;
        int32_t l_125 = (-1L);
        int32_t l_126 = 4L;
        int32_t l_128 = 0x5C984E57L;
        int32_t l_130 = 0xD3F9E7EEL;
        int32_t l_132 = 0x055579FDL;
        int32_t l_133 = (-4L);
        int32_t l_136 = 0x68A6424EL;
        int32_t l_138 = 0x6563165AL;
        int8_t l_140 = 0L;
        int32_t l_143 = 8L;
        int i;
        for (i = 0; i < 7; i++)
            l_90[i] = &l_61;
        for (g_22.f2 = 0; (g_22.f2 <= 1); g_22.f2 += 1)
        { 
            for (g_22.f1 = 0; (g_22.f1 <= 1); g_22.f1 += 1)
            { 
                struct S0 *l_62[2];
                int i;
                for (i = 0; i < 2; i++)
                    l_62[i] = (void*)0;
                g_63 = l_61;
            }
        }
        if (g_7[g_24.f0])
            break;
        for (g_22.f1 = 0; (g_22.f1 <= 1); g_22.f1 += 1)
        { 
            int32_t *l_64 = &g_65[0];
            int32_t *l_66 = (void*)0;
            int32_t *l_67 = &g_7[g_22.f1];
            int32_t **l_68 = &l_66;
            uint64_t *l_71 = &g_72;
            uint8_t *l_81 = &g_82;
            uint8_t *l_88[4] = {&g_89,&g_89,&g_89,&g_89};
            int8_t *l_91[4] = {&g_92[4],&g_92[4],&g_92[4],&g_92[4]};
            uint64_t *l_93 = &g_94;
            struct S0 l_102 = {0,31};
            int32_t l_135 = 0x0B6CD385L;
            int32_t l_139 = 5L;
            int32_t l_141 = 4L;
            int32_t l_142 = 0x6B36A0D0L;
            int i;
            (*l_67) = ((*l_64) |= g_7[g_24.f0]);
            (*l_68) = &g_7[g_24.f0];
            if ((safe_mod_func_int8_t_s_s((((++(*l_71)) ^ ((*l_93) = (((safe_sub_func_uint32_t_u_u((((safe_rshift_func_uint16_t_u_u(((((void*)0 == g_79[0][2][1]) , (((*l_81)--) , g_22.f0)) , ((((((*l_66) = 7UL) & (l_87 > (((*l_64) = ((*l_81) = g_22.f1)) == (g_92[2] = (l_90[0] == l_90[2]))))) >= g_2[2]) > 1L) >= 0UL)), g_63.f0)) , 65535UL) < 65526UL), 4294967290UL)) && l_61.f1) ^ g_22.f0.f0))) == 0x6BL), g_2[0])))
            { 
                uint64_t ***l_97[3];
                int i;
                for (i = 0; i < 3; i++)
                    l_97[i] = &l_95;
                g_98 = l_95;
                (**l_68) ^= 0x0DF3AEBBL;
            }
            else
            { 
                uint32_t l_99[2][7] = {{4294967295UL,0xB20146E0L,0x317453A3L,0x317453A3L,0xB20146E0L,4294967295UL,0UL},{4294967295UL,0xB20146E0L,0x317453A3L,0x317453A3L,0xB20146E0L,4294967295UL,0UL}};
                int i, j;
                for (l_87 = 0; l_87 < 4; l_87 += 1)
                {
                    l_88[l_87] = &g_89;
                }
                (*l_68) = (*l_68);
                if (l_99[1][2])
                    continue;
                if (l_87)
                    break;
                for (g_72 = 0; (g_72 < 28); g_72 = safe_add_func_uint8_t_u_u(g_72, 1))
                { 
                    return l_102;
                }
            }
            if ((*l_67))
                continue;
            for (g_94 = 0; (g_94 <= 6); g_94 += 1)
            { 
                int32_t *l_108 = &g_7[g_24.f0];
                int32_t *l_110 = &g_7[g_22.f1];
                int32_t l_129 = 0x0C632DA6L;
                int32_t l_131 = 3L;
                int32_t l_134 = 0x52DFFA46L;
                int32_t l_137[1][1];
                uint16_t l_144 = 5UL;
                int i, j;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 1; j++)
                        l_137[i][j] = 0x12875DDBL;
                }
                for (g_89 = 0; (g_89 <= 6); g_89 += 1)
                { 
                    return g_63;
                }
                for (l_87 = 0; (l_87 <= 6); l_87 += 1)
                { 
                    int32_t l_107[7][1];
                    int32_t **l_109 = &l_108;
                    int32_t **l_111 = &l_64;
                    uint16_t *l_112 = &g_113;
                    uint16_t *l_114 = &g_115;
                    int32_t *l_116 = &g_7[g_22.f1];
                    int32_t *l_117 = &g_7[0];
                    int32_t *l_119[5] = {&g_7[g_22.f1],&g_7[g_22.f1],&g_7[g_22.f1],&g_7[g_22.f1],&g_7[g_22.f1]};
                    uint64_t ***l_147 = &l_95;
                    int i, j;
                    for (i = 0; i < 7; i++)
                    {
                        for (j = 0; j < 1; j++)
                            l_107[i][j] = 0xFBB4CDDCL;
                    }
                    g_65[g_24.f0] |= (safe_mul_func_uint16_t_u_u(0x02F5L, (((safe_div_func_int8_t_s_s((((((l_107[6][0] || (((*l_112) = (((*l_109) = ((*l_68) = l_108)) == ((*l_111) = l_110))) != ((*l_114) = 65535UL))) < (&g_98 == (void*)0)) | l_87) > (*g_80)) , (-2L)), 0x24L)) >= 0xAE3A4B37CA69BD5ALL) >= g_7[g_24.f0])));
                    ++l_144;
                    (*l_147) = g_98;
                    l_61.f1 |= ((void*)0 != p_58);
                }
            }
        }
    }
    for (g_22.f2 = 0; (g_22.f2 <= 1); g_22.f2 += 1)
    { 
        return g_63;
    }
    return l_518;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_2[i], "g_2[i]", print_hash_value);

    }
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_7[i], "g_7[i]", print_hash_value);

    }
    transparent_crc(g_18, "g_18", print_hash_value);
    transparent_crc(g_22.f0.f0, "g_22.f0.f0", print_hash_value);
    transparent_crc(g_22.f0.f1, "g_22.f0.f1", print_hash_value);
    transparent_crc(g_22.f1, "g_22.f1", print_hash_value);
    transparent_crc(g_22.f2, "g_22.f2", print_hash_value);
    transparent_crc(g_24.f0, "g_24.f0", print_hash_value);
    transparent_crc(g_63.f0, "g_63.f0", print_hash_value);
    transparent_crc(g_63.f1, "g_63.f1", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_65[i], "g_65[i]", print_hash_value);

    }
    transparent_crc(g_72, "g_72", print_hash_value);
    transparent_crc(g_82, "g_82", print_hash_value);
    transparent_crc(g_89, "g_89", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_92[i], "g_92[i]", print_hash_value);

    }
    transparent_crc(g_94, "g_94", print_hash_value);
    transparent_crc(g_113, "g_113", print_hash_value);
    transparent_crc(g_115, "g_115", print_hash_value);
    transparent_crc(g_192, "g_192", print_hash_value);
    transparent_crc(g_257.f0.f0, "g_257.f0.f0", print_hash_value);
    transparent_crc(g_257.f0.f1, "g_257.f0.f1", print_hash_value);
    transparent_crc(g_257.f1, "g_257.f1", print_hash_value);
    transparent_crc(g_257.f2, "g_257.f2", print_hash_value);
    transparent_crc(g_286, "g_286", print_hash_value);
    transparent_crc(g_443, "g_443", print_hash_value);
    transparent_crc(g_455, "g_455", print_hash_value);
    transparent_crc(g_754, "g_754", print_hash_value);
    transparent_crc(g_875, "g_875", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(g_979[i][j], "g_979[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_1008, "g_1008", print_hash_value);
    transparent_crc(g_1009, "g_1009", print_hash_value);
    transparent_crc(g_1021, "g_1021", print_hash_value);
    transparent_crc(g_1071, "g_1071", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_1675[i][j], "g_1675[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_1737, "g_1737", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_1740[i], "g_1740[i]", print_hash_value);

    }
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
