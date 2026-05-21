// SPDX-License-Identifier: MIT
// cctest_csmith_74c1bad7.c --- cctest case csmith_74c1bad7 (csmith seed 1958853335)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x6ae70147 */

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

// Options:   -s 1958853335 -o /tmp/csmith_gen_e6jm2hhq/csmith.c --concise --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   int32_t  f0;
};
#pragma pack(pop)

union U1 {
   const int64_t  f0;
   uint32_t  f1;
};

union U2 {
   uint32_t  f0;
   uint64_t  f1;
};

union U3 {
   int8_t  f0;
   struct S0  f1;
};

union U4 {
   struct S0  f0;
   uint32_t  f1;
   int16_t  f2;
   uint32_t  f3;
};


static int32_t g_3 = 0x693E9323L;
static int32_t g_8 = (-6L);
static uint8_t g_9 = 0x8EL;
static int32_t *g_29 = (void*)0;
static int8_t g_59[7][7][2] = {{{(-1L),0L},{(-1L),0x6AL},{0x6AL,0L},{0x6AL,0x6AL},{(-1L),0L},{(-1L),0x6AL},{0x6AL,0L}},{{0x6AL,0x6AL},{(-1L),0L},{(-1L),0x6AL},{0x6AL,0L},{0x6AL,0x6AL},{(-1L),0L},{(-1L),0x6AL}},{{0x6AL,0L},{0x6AL,0x6AL},{(-1L),0L},{(-1L),0x6AL},{0x6AL,0L},{0x6AL,0x6AL},{(-1L),0L}},{{(-1L),0x6AL},{0x6AL,0L},{0x6AL,0x6AL},{(-1L),0L},{(-1L),0x6AL},{0x6AL,0L},{0x6AL,0x6AL}},{{(-1L),0L},{(-1L),0x6AL},{0x6AL,0L},{0x6AL,0x6AL},{(-1L),0L},{(-1L),0x6AL},{0x6AL,0L}},{{0x6AL,0x6AL},{(-1L),0L},{(-1L),0x6AL},{0x6AL,0L},{0x6AL,0x6AL},{(-1L),0L},{(-1L),0x6AL}},{{0x6AL,0L},{0x6AL,0x6AL},{(-1L),0L},{(-1L),0x6AL},{0x6AL,0L},{0x6AL,0x6AL},{(-1L),0L}}};
static uint16_t g_63 = 0xE09BL;
static int8_t g_65[6] = {(-3L),7L,7L,(-3L),7L,7L};
static struct S0 g_68 = {0xFA818714L};
static struct S0 * const g_67 = &g_68;
static uint32_t g_92 = 1UL;
static union U3 g_95 = {0x77L};
static union U2 g_99 = {4294967286UL};
static int8_t g_107 = (-1L);
static int8_t *g_109[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
static int8_t * const *g_108 = &g_109[2];
static union U3 *g_111[6] = {&g_95,&g_95,&g_95,&g_95,&g_95,&g_95};
static union U3 **g_110 = &g_111[2];
static uint64_t g_148 = 1UL;
static uint32_t g_150 = 1UL;
static int16_t g_159[2][3][1] = {{{0xF640L},{0xF640L},{9L}},{{0xF640L},{0xF640L},{9L}}};
static int8_t g_161 = 0x29L;
static int32_t g_165 = 0xD50860F9L;
static int32_t g_166[3] = {0xF41E0092L,0xF41E0092L,0xF41E0092L};
static int64_t g_167 = 0xB7989F2823213DDALL;
static int64_t g_168 = 0xF78ABD9249688583LL;
static uint32_t g_174 = 2UL;
static uint8_t g_194 = 9UL;
static int16_t g_226 = 0x578CL;
static int32_t *g_232 = &g_165;
static const union U4 g_249 = {{1L}};
static uint16_t g_254[1] = {0xBF3DL};
static int64_t g_282 = 0x676AC51730505107LL;
static uint32_t g_283[4][7][6] = {{{0xCD34AE79L,4294967295UL,4294967295UL,4294967295UL,0xCD34AE79L,6UL},{0x0230D1EBL,0x92F41743L,0x0A9E8577L,0x36973E67L,0x2D70D169L,0x0AF7DF84L},{0x354BB6A3L,0xF3DB5F00L,3UL,0x92F41743L,0xC5CCD36DL,0x0AF7DF84L},{1UL,0xB86DF315L,0x0A9E8577L,0xBF7BAFEBL,0x12E7AF4DL,6UL},{0xC5CCD36DL,3UL,4294967295UL,0xDCE6C4E4L,0x4D954473L,0x3A0864FAL},{0x7E533C78L,1UL,0x5C0779B5L,4294967288UL,0x9A104086L,0xB0BDB32CL},{4294967295UL,0x7E533C78L,4294967291UL,0xFD7AFBC0L,1UL,0x92F41743L}},{{0xCD34AE79L,0xF672B854L,0x12E7AF4DL,1UL,0xDCE6C4E4L,4294967288UL},{0xF672B854L,0x92F41743L,4294967287UL,4294967287UL,0x92F41743L,0xF672B854L},{4294967291UL,0x0AF7DF84L,3UL,0x3A0864FAL,0x5C30DC22L,4294967295UL},{9UL,0x5C0779B5L,0x36973E67L,0xBF7BAFEBL,4294967291UL,0x0A9E8577L},{9UL,1UL,0xBF7BAFEBL,0x3A0864FAL,0x4D954473L,0xDCE6C4E4L},{4294967291UL,0x5C30DC22L,1UL,4294967287UL,0xBF7BAFEBL,0xB0BDB32CL},{0xF672B854L,4294967291UL,2UL,1UL,1UL,4294967286UL}},{{0xCD34AE79L,0x0230D1EBL,4294967292UL,0xFD7AFBC0L,4294967286UL,4294967287UL},{4294967295UL,0x92F41743L,0x8DA9BF69L,4294967288UL,0xFD2789E1L,0xF3DB5F00L},{0x7E533C78L,1UL,3UL,0xDCE6C4E4L,3UL,1UL},{0xC5CCD36DL,0x354BB6A3L,6UL,0xBF7BAFEBL,4294967292UL,0x8DA9BF69L},{1UL,0x2B704D01L,4294967291UL,0x92F41743L,0xFD7AFBC0L,4294967288UL},{0x2D70D169L,0x63453B58L,0x92F41743L,0x9A104086L,3UL,1UL},{0x5C0779B5L,0x2D70D169L,0x3A0864FAL,0x354BB6A3L,4294967290UL,6UL}},{{6UL,0x7E533C78L,1UL,0x5C0779B5L,4294967288UL,0x9A104086L},{1UL,0x0A9E8577L,4294967291UL,0xBF7BAFEBL,0x36973E67L,0x5C0779B5L},{0xCD34AE79L,0x5C0779B5L,4294967290UL,4294967288UL,0UL,1UL},{4294967290UL,0xDCE6C4E4L,4294967292UL,0x2B704D01L,0x2B704D01L,4294967292UL},{4294967288UL,4294967288UL,1UL,0x36973E67L,0xFD7AFBC0L,0xD6D555CBL},{4294967286UL,0x4D954473L,0x2D70D169L,4294967292UL,9UL,1UL},{0x7E533C78L,4294967286UL,0x2D70D169L,0xB86DF315L,4294967288UL,0xD6D555CBL}}};
static int64_t g_309 = (-4L);
static uint64_t g_311 = 0x0A3B3E62BA66F70DLL;
static union U4 g_337 = {{0xA4F437D2L}};
static int32_t g_345 = 0x191FAFA0L;
static int64_t g_354 = 0x6E1641740F834B52LL;
static int32_t g_355[4][5] = {{0xC1387753L,0x8D5A2CEEL,1L,0xC1387753L,1L},{0xC1387753L,0xC1387753L,0x144C4033L,0x6717F7A9L,0x5662A3ADL},{(-8L),0x5662A3ADL,1L,1L,0x5662A3ADL},{0x5662A3ADL,0x8D5A2CEEL,(-8L),0x5662A3ADL,1L}};
static uint16_t g_356 = 65535UL;
static struct S0 *g_374 = &g_68;
static int64_t *g_427 = (void*)0;
static int64_t **g_426 = &g_427;
static uint16_t *g_429 = &g_254[0];
static uint16_t **g_428 = &g_429;
static uint16_t g_465 = 0UL;
static int16_t g_473 = 1L;
static uint16_t g_475 = 1UL;
static int8_t g_479 = 0x34L;
static struct S0 g_493 = {3L};
static const union U1 g_502 = {0x30FCC5BC9244F3A6LL};
static union U2 *g_507 = &g_99;
static union U2 **g_506[3][4] = {{&g_507,&g_507,&g_507,&g_507},{&g_507,&g_507,&g_507,&g_507},{&g_507,&g_507,&g_507,&g_507}};
static int32_t *g_509[5][6] = {{&g_345,&g_345,&g_3,&g_3,&g_3,&g_3},{&g_345,&g_345,&g_3,&g_165,&g_165,&g_165},{&g_345,&g_345,&g_345,&g_3,&g_3,&g_3},{(void*)0,&g_345,&g_345,(void*)0,&g_345,&g_165},{&g_165,(void*)0,&g_3,(void*)0,&g_165,&g_3}};
static const int32_t g_527 = (-1L);
static uint64_t *g_533[2] = {&g_311,&g_311};
static uint64_t **g_532 = &g_533[0];
static const int32_t *g_611 = &g_165;
static int64_t g_638 = 6L;
static uint64_t * const ***g_873 = (void*)0;
static int32_t **g_976 = &g_509[4][0];
static int32_t ***g_975 = &g_976;
static union U4 g_1169[2][7][2] = {{{{{0L}},{{0x3B12AF09L}}},{{{0xC3011DAEL}},{{0xC3011DAEL}}},{{{0xC3011DAEL}},{{0x3B12AF09L}}},{{{0L}},{{1L}}},{{{0x3B12AF09L}},{{1L}}},{{{0L}},{{0x3B12AF09L}}},{{{0xC3011DAEL}},{{0xC3011DAEL}}}},{{{{0xC3011DAEL}},{{0x3B12AF09L}}},{{{0L}},{{1L}}},{{{0x3B12AF09L}},{{1L}}},{{{0L}},{{0x3B12AF09L}}},{{{0xC3011DAEL}},{{0xC3011DAEL}}},{{{0xC3011DAEL}},{{0x3B12AF09L}}},{{{0L}},{{1L}}}}};
static int32_t g_1174[6][4] = {{(-3L),(-3L),0xCCE4DA36L,(-3L)},{(-3L),0x4DB11C86L,1L,(-3L)},{1L,(-3L),1L,0x4DB11C86L},{(-3L),(-3L),0xCCE4DA36L,(-3L)},{(-3L),0x4DB11C86L,1L,(-3L)},{1L,(-3L),1L,0x4DB11C86L}};
static int32_t g_1189[7][7] = {{1L,1L,1L,1L,1L,1L,1L},{0xC6CA76D9L,0xC6CA76D9L,0xC6CA76D9L,0xC6CA76D9L,0xC6CA76D9L,0xC6CA76D9L,0xC6CA76D9L},{1L,1L,1L,1L,1L,1L,1L},{0xC6CA76D9L,0xC6CA76D9L,0xC6CA76D9L,0xC6CA76D9L,0xC6CA76D9L,0xC6CA76D9L,0xC6CA76D9L},{1L,1L,1L,1L,1L,1L,1L},{0xC6CA76D9L,0xC6CA76D9L,0xC6CA76D9L,0xC6CA76D9L,0xC6CA76D9L,0xC6CA76D9L,0xC6CA76D9L},{1L,1L,1L,1L,1L,1L,1L}};
static struct S0 ***g_1198 = (void*)0;
static struct S0 *** const * const g_1197 = &g_1198;
static union U3 ***g_1241 = &g_110;
static union U3 ****g_1240[5] = {&g_1241,&g_1241,&g_1241,&g_1241,&g_1241};
static union U3 *****g_1239 = &g_1240[3];
static const int8_t *g_1289 = &g_65[0];
static const int8_t **g_1288[2] = {&g_1289,&g_1289};
static const int8_t ***g_1287 = &g_1288[0];
static const int8_t ****g_1286 = &g_1287;
static uint32_t g_1299 = 1UL;
static const union U1 *g_1477 = (void*)0;
static int8_t g_1643 = (-7L);
static uint16_t g_1695 = 0x6D10L;
static uint64_t g_1696[6] = {1UL,1UL,1UL,1UL,1UL,1UL};
static uint16_t g_1798 = 0x5190L;



static union U4  func_1(void);
static int32_t * func_12(uint64_t  p_13, union U1  p_14, int32_t * p_15, uint8_t  p_16);
static int16_t  func_19(int16_t  p_20, int32_t * const  p_21, uint16_t  p_22);
static int16_t  func_23(uint8_t  p_24, int32_t * p_25, int32_t * p_26, int32_t * p_27);
static int32_t * func_30(int32_t * p_31, const union U3  p_32);
static int32_t * func_33(int32_t * p_34);
static int32_t * func_35(const union U1  p_36, int32_t * const  p_37, const int32_t * p_38, int32_t * p_39, struct S0  p_40);
static int16_t  func_41(int32_t * p_42, int32_t * p_43, int16_t  p_44);




static union U4  func_1(void)
{ 
    int32_t *l_2 = &g_3;
    int32_t *l_4 = &g_3;
    int32_t *l_5 = &g_3;
    int32_t *l_6 = (void*)0;
    int32_t *l_7[5];
    const union U1 l_113[2][1][1] = {{{{8L}}},{{{8L}}}};
    struct S0 l_114 = {0L};
    const union U3 l_598[4][7][4] = {{{{0L},{0x0FL},{9L},{-3L}},{{0x4EL},{0xC4L},{9L},{0x29L}},{{0x4CL},{0L},{0xDAL},{0x29L}},{{0x0DL},{0xC4L},{0x40L},{-3L}},{{0xB5L},{0x0FL},{0L},{0xA4L}},{{0xB9L},{1L},{0x9BL},{0x40L}},{{0x29L},{0L},{0xA2L},{0x4CL}}},{{{1L},{0x29L},{9L},{7L}},{{0xA2L},{0x0DL},{0L},{0L}},{{0x5CL},{0L},{0xFDL},{0xE5L}},{{0L},{-6L},{0x42L},{0xB5L}},{{0xB5L},{0x5CL},{6L},{0x5CL}},{{-1L},{9L},{0L},{0x40L}},{{0x0FL},{0x48L},{-7L},{0x29L}}},{{{9L},{0xA4L},{9L},{0L}},{{9L},{0L},{-7L},{0xDAL}},{{0x0FL},{0L},{0L},{0xFDL}},{{-1L},{9L},{6L},{-8L}},{{0xB5L},{0x4CL},{0x42L},{0xC7L}},{{0L},{0xA2L},{0xFDL},{0x40L}},{{0x5CL},{-7L},{0L},{-1L}}},{{{0xA2L},{0xC7L},{9L},{0L}},{{1L},{-1L},{0xA2L},{-3L}},{{0x29L},{0L},{0x9BL},{0x9BL}},{{0xB9L},{0xB9L},{0L},{-1L}},{{0xB5L},{-1L},{0x40L},{0x0FL}},{{0x0DL},{0x4EL},{0xDAL},{0x40L}},{{0x4CL},{0x4EL},{9L},{0x0FL}}}};
    int i, j, k;
    for (i = 0; i < 5; i++)
        l_7[i] = &g_3;
    g_9--;
    (*g_976) = func_12(((3UL < (safe_rshift_func_int16_t_s_s(func_19(func_23((+g_9), g_29, func_30(func_33(func_35((func_41(&g_3, &g_8, g_9) , l_113[0][0][0]), l_7[0], &g_3, &g_8, l_114)), l_598[1][0][2]), l_2), l_2, g_249.f2), g_249.f2))) , 18446744073709551609UL), l_113[0][0][0], l_6, g_1169[1][0][0].f1);
    return g_1169[1][0][0];
}



static int32_t * func_12(uint64_t  p_13, union U1  p_14, int32_t * p_15, uint8_t  p_16)
{ 
    uint16_t **l_1605 = &g_429;
    uint16_t ***l_1606[4][4] = {{&g_428,&g_428,&g_428,&l_1605},{&g_428,&g_428,&g_428,&l_1605},{&g_428,&l_1605,&l_1605,&l_1605},{&g_428,&g_428,&l_1605,&l_1605}};
    int32_t l_1628 = 0x8A8147E5L;
    int64_t ***l_1669 = &g_426;
    struct S0 l_1683 = {0x78825E9AL};
    uint64_t * const *l_1687 = (void*)0;
    uint64_t * const **l_1686 = &l_1687;
    const int32_t l_1700 = (-2L);
    struct S0 **l_1724 = &g_374;
    union U2 l_1725 = {0UL};
    union U3 **l_1739 = &g_111[2];
    int32_t l_1753[2][5][3] = {{{(-5L),0L,0L},{0L,0L,0L},{0L,(-5L),0L},{(-5L),0L,0L},{0L,0L,0L}},{{0L,(-5L),0L},{0xB7ACBFA5L,0x2B50EA4DL,0L},{7L,7L,0L},{0x2B50EA4DL,0xB7ACBFA5L,0L},{0xB7ACBFA5L,0x2B50EA4DL,0L}}};
    int8_t l_1769[5] = {0xAAL,0xAAL,0xAAL,0xAAL,0xAAL};
    int64_t l_1793 = (-4L);
    int8_t l_1797 = (-1L);
    int i, j, k;
    if (((g_428 = l_1605) == &g_429))
    { 
        uint8_t l_1607 = 4UL;
        int32_t l_1608[5][6] = {{0x4B8F9B79L,0xF1E3AE3DL,0x4B8F9B79L,0x4B8F9B79L,0xF1E3AE3DL,0x4B8F9B79L},{0x4B8F9B79L,0xF1E3AE3DL,0x4B8F9B79L,0x4B8F9B79L,0xF1E3AE3DL,0x4B8F9B79L},{0x4B8F9B79L,0xF1E3AE3DL,0x4B8F9B79L,0x4B8F9B79L,0xF1E3AE3DL,0x4B8F9B79L},{0x4B8F9B79L,0xF1E3AE3DL,0x4B8F9B79L,0x4B8F9B79L,0xF1E3AE3DL,0x4B8F9B79L},{0x4B8F9B79L,0xF1E3AE3DL,0x4B8F9B79L,0x4B8F9B79L,0xF1E3AE3DL,0x4B8F9B79L}};
        uint8_t ** const *l_1622 = (void*)0;
        uint16_t *l_1681 = &g_465;
        const union U1 l_1682 = {8L};
        int32_t *l_1684 = &l_1628;
        uint64_t ** const * const l_1685 = &g_532;
        uint16_t l_1703[4][6] = {{0xCD0FL,0xDF9BL,0xCD0FL,0xCD0FL,0xDF9BL,0xCD0FL},{0xCD0FL,0xDF9BL,0xCD0FL,0xCD0FL,0xDF9BL,0xCD0FL},{0xCD0FL,0xDF9BL,0xCD0FL,0xCD0FL,0xDF9BL,0xCD0FL},{0xCD0FL,0xDF9BL,0xCD0FL,0xCD0FL,0xDF9BL,0xCD0FL}};
        struct S0 l_1728 = {-1L};
        union U4 l_1737[3] = {{{0xA6CCA1B8L}},{{0xA6CCA1B8L}},{{0xA6CCA1B8L}}};
        int i, j;
        l_1608[2][5] = l_1607;
        for (p_14.f1 = (-1); (p_14.f1 != 27); p_14.f1++)
        { 
            int16_t l_1638[1];
            int32_t l_1639 = 0xE7605384L;
            int32_t l_1640 = 1L;
            int32_t l_1641 = 1L;
            int32_t l_1644 = 1L;
            int32_t l_1646 = (-6L);
            uint32_t l_1647 = 0UL;
            union U4 l_1662 = {{0x554C4941L}};
            int8_t *l_1720 = &g_59[5][5][0];
            int32_t l_1758 = 0x8FD96369L;
            int32_t l_1760 = 0xC19D9DEFL;
            int32_t l_1762 = 0x400577FCL;
            int32_t l_1763[4];
            union U2 l_1768 = {4294967293UL};
            int i;
            for (i = 0; i < 1; i++)
                l_1638[i] = 0x1DEBL;
            for (i = 0; i < 4; i++)
                l_1763[i] = 1L;
            for (g_337.f1 = 0; (g_337.f1 < 47); g_337.f1++)
            { 
                int32_t l_1618 = 0x45C4C315L;
                int32_t l_1637 = 8L;
                int32_t l_1642 = 0x7FB89FCEL;
                int32_t l_1645 = 0x23DB4F56L;
                uint64_t * const ****l_1650 = &g_873;
                struct S0 l_1651 = {1L};
                int64_t ***l_1671 = &g_426;
                for (g_95.f1.f0 = 0; (g_95.f1.f0 <= 0); g_95.f1.f0 += 1)
                { 
                    int32_t l_1613 = 0xFE8A9978L;
                    union U2 l_1619 = {1UL};
                    uint8_t *l_1625 = &g_9;
                    uint8_t **l_1624 = &l_1625;
                    uint8_t ***l_1623 = &l_1624;
                    int32_t *l_1626 = (void*)0;
                    int32_t *l_1627 = &l_1608[2][5];
                    int32_t *l_1629 = &g_1174[4][1];
                    int32_t *l_1630 = &l_1608[2][5];
                    int32_t *l_1631 = &g_1189[1][2];
                    int32_t *l_1632 = &l_1628;
                    int32_t *l_1633 = &l_1608[2][2];
                    int32_t *l_1634 = &l_1628;
                    int32_t *l_1635 = &g_1174[4][1];
                    int32_t *l_1636[2][5] = {{&l_1628,&g_1189[1][3],&l_1628,&l_1628,&g_1189[1][3]},{&g_1189[1][3],&l_1628,&l_1628,&g_1189[1][3],&l_1628}};
                    int i, j;
                    if (l_1613)
                        break;
                    (*g_232) = ((void*)0 == &g_1240[(g_95.f1.f0 + 1)]);
                    (*l_1627) = ((*g_232) = ((safe_mul_func_int16_t_s_s(((5L != (safe_mul_func_uint8_t_u_u(p_14.f1, (((l_1618 , 0L) > ((*l_1625) |= (l_1619 , (safe_sub_func_int32_t_s_s((((p_14.f1 , l_1622) != l_1623) , l_1608[2][5]), p_13))))) && l_1619.f0)))) && 18446744073709551615UL), 6UL)) , (*g_611)));
                    if (l_1628)
                        break;
                    l_1647++;
                }
                (*l_1650) = (void*)0;
                (*g_374) = l_1651;
                for (l_1642 = (-8); (l_1642 <= 28); l_1642 = safe_add_func_int16_t_s_s(l_1642, 1))
                { 
                    int8_t *l_1654[2];
                    int32_t l_1655 = 0x9515BD51L;
                    int64_t ****l_1670 = &l_1669;
                    int16_t *l_1672 = &g_226;
                    int16_t *l_1673 = &g_473;
                    union U3 l_1678 = {4L};
                    int i;
                    for (i = 0; i < 2; i++)
                        l_1654[i] = &g_107;
                    (*g_232) |= ((((l_1655 = 0L) | p_13) ^ (safe_lshift_func_int16_t_s_u(((safe_add_func_uint8_t_u_u(l_1644, (((safe_mul_func_uint16_t_u_u(((l_1662 , (safe_sub_func_uint32_t_u_u((safe_sub_func_int64_t_s_s((safe_lshift_func_uint8_t_u_u((1UL ^ l_1628), 5)), (((*l_1673) = ((*l_1672) = (((*l_1670) = l_1669) == l_1671))) < 65535UL))), p_13))) || (-4L)), p_14.f1)) < (-8L)) >= l_1642))) > (-4L)), 2))) , l_1608[2][5]);
                    l_1684 = func_35((((safe_div_func_uint64_t_u_u(p_14.f1, (safe_mul_func_int16_t_s_s((l_1678 , ((l_1638[0] >= p_13) != (l_1678.f0 != ((void*)0 != l_1681)))), g_337.f0.f0)))) != 0x61L) , l_1682), p_15, p_15, &l_1640, l_1683);
                }
            }
        }
    }
    else
    { 
        return p_15;
    }
    if (l_1700)
    { 
        uint32_t l_1775 = 18446744073709551615UL;
        union U3 l_1786 = {0x00L};
        int32_t l_1787 = (-1L);
        int16_t *l_1788 = &g_226;
        int32_t l_1789 = (-1L);
        uint32_t *l_1790 = (void*)0;
        int32_t l_1791 = (-1L);
        int16_t l_1792 = 0x04D4L;
        l_1793 &= (((((safe_lshift_func_uint16_t_u_s((l_1791 = (safe_add_func_uint32_t_u_u(l_1775, (l_1628 = (safe_add_func_int16_t_s_s(((*l_1788) = (safe_mul_func_uint16_t_u_u(((safe_mul_func_uint8_t_u_u((l_1775 || l_1775), p_13)) , ((g_282 < l_1725.f0) > (l_1787 = ((**l_1605) &= (safe_div_func_uint64_t_u_u(((((safe_div_func_int64_t_s_s((l_1786 , (-1L)), 0x0F92A530046D120BLL)) > 0x7B7FL) > p_14.f1) || (*g_232)), 0x3647FAF62D2DCD8FLL)))))), l_1775))), l_1789)))))), l_1786.f0)) < 0x0AE5L) || l_1792) >= g_1169[1][0][0].f0.f0) ^ 0x40179A7B49D86BC7LL);
    }
    else
    { 
        int32_t *l_1794 = (void*)0;
        int32_t l_1795 = 0x6D0A4981L;
        int32_t *l_1796[7][6][6] = {{{&g_3,(void*)0,(void*)0,&g_3,&g_345,(void*)0},{&g_165,&l_1753[0][3][2],&l_1753[0][4][2],&l_1795,&g_3,&g_3},{&g_3,&l_1795,&l_1795,(void*)0,&g_3,(void*)0},{&g_165,&l_1753[0][3][2],(void*)0,&l_1628,&g_345,&g_1189[2][2]},{(void*)0,(void*)0,&g_1174[4][1],&l_1753[0][2][2],&l_1795,&l_1795},{&l_1628,&g_8,&g_3,(void*)0,&l_1753[0][3][2],&l_1628}},{{&l_1753[0][3][2],&g_1189[4][4],&l_1753[1][4][0],&g_8,&l_1628,&g_3},{&l_1628,&g_1174[4][1],&l_1628,&g_1174[4][1],&l_1795,(void*)0},{&l_1795,&l_1628,(void*)0,&g_1189[1][2],&g_3,(void*)0},{&l_1753[0][2][2],&l_1628,&l_1795,&l_1628,(void*)0,&l_1628},{&l_1795,&g_3,&l_1795,&l_1753[0][3][2],(void*)0,(void*)0},{&g_1174[4][1],&g_3,&g_3,&l_1628,&g_1174[5][2],&g_1174[4][0]}},{{&g_345,&g_1189[0][6],&g_1189[2][2],&l_1628,&l_1628,&l_1753[0][3][2]},{&g_1174[4][1],&g_3,&g_165,&l_1753[0][3][2],&l_1628,&l_1753[0][4][2]},{&l_1795,&g_3,&g_1174[1][0],&l_1628,&l_1753[0][3][2],&g_3},{&l_1753[0][2][2],&g_1189[1][2],&g_1174[4][1],&g_1189[1][2],&g_165,&l_1795},{&l_1795,(void*)0,(void*)0,&g_1174[4][1],&g_1174[4][1],&g_1189[0][6]},{&l_1628,&g_1189[1][2],&l_1753[0][3][2],&g_8,&l_1795,&g_3}},{{&l_1753[0][3][2],&g_1174[5][2],&l_1795,&l_1795,(void*)0,&g_1174[4][1]},{&l_1628,&g_165,&g_1174[5][2],&g_8,&g_8,&g_1174[5][2]},{&g_3,&g_3,&l_1628,(void*)0,&g_345,&g_3},{&g_3,&l_1795,&l_1628,&g_1189[0][6],&g_3,&l_1628},{&g_1174[5][3],&g_3,&l_1628,(void*)0,&g_3,&g_3},{&l_1753[0][3][2],(void*)0,&l_1628,&g_345,&g_1189[2][2],&g_1174[5][2]}},{{&g_345,&g_1189[2][2],&g_1174[5][2],&g_1189[1][2],&g_1189[1][2],&g_1174[4][1]},{&l_1628,&l_1753[1][2][2],&l_1795,(void*)0,&l_1753[0][2][2],&g_3},{&l_1753[0][2][2],(void*)0,(void*)0,&g_345,&g_3,(void*)0},{&g_165,&g_8,&l_1753[1][4][0],&l_1628,&g_1174[4][1],&g_3},{&l_1753[1][4][0],&l_1753[0][3][2],&g_1189[1][2],&g_165,&l_1628,&g_1174[5][3]},{&g_1189[1][2],&g_1174[4][1],(void*)0,&l_1753[0][4][2],(void*)0,&g_1174[4][1]}},{{&g_165,&g_3,&l_1753[0][3][2],&g_1174[4][0],&g_1189[0][6],&l_1795},{&g_3,&g_1189[1][2],(void*)0,&l_1628,&l_1795,&l_1753[1][2][2]},{(void*)0,&g_1189[1][2],&g_1174[5][3],&l_1753[0][2][2],&g_1189[0][6],&l_1795},{&g_3,&g_3,(void*)0,&l_1795,(void*)0,&g_1189[4][4]},{&l_1795,&g_1174[4][1],&g_3,(void*)0,&l_1628,&g_1189[0][6]},{&g_1174[4][1],&l_1753[0][3][2],&l_1795,&l_1753[1][2][2],&g_1174[4][1],&g_8}},{{&g_345,&g_8,&l_1753[0][4][2],&g_3,&g_3,&l_1753[0][3][2]},{&l_1753[0][2][2],(void*)0,&g_1189[1][2],&g_1174[1][0],&l_1753[0][2][2],&l_1795},{&g_1174[4][1],&l_1753[1][2][2],&g_345,(void*)0,&g_1189[1][2],&g_345},{(void*)0,&g_1189[2][2],&g_1174[4][1],&g_1174[4][1],&g_1189[2][2],(void*)0},{(void*)0,(void*)0,(void*)0,&g_1174[4][1],&g_3,&g_1174[4][1]},{&g_1189[4][0],&g_3,&l_1628,&g_1174[4][1],&g_3,&l_1628}}};
        int i, j, k;
        g_1798++;
    }
    return p_15;
}



static int16_t  func_19(int16_t  p_20, int32_t * const  p_21, uint16_t  p_22)
{ 
    struct S0 l_1604 = {0x84623762L};
    (*g_374) = l_1604;
    return l_1604.f0;
}



static int16_t  func_23(uint8_t  p_24, int32_t * p_25, int32_t * p_26, int32_t * p_27)
{ 
    int32_t l_1007[6][2] = {{(-1L),(-1L)},{0L,(-1L)},{(-1L),0L},{(-1L),(-1L)},{0L,(-1L)},{(-1L),0L}};
    int32_t l_1035[5][3] = {{9L,0xF496B5E3L,9L},{9L,0x7465AF06L,0xF496B5E3L},{0x7465AF06L,9L,9L},{0xF496B5E3L,9L,(-5L)},{1L,0x7465AF06L,0x786B82A5L}};
    union U2 *l_1054 = (void*)0;
    uint32_t *l_1064 = &g_283[1][1][0];
    union U1 l_1079 = {0x0D92386FAF15EB0ALL};
    uint32_t l_1088 = 0x39036FA8L;
    int32_t l_1089[6][5] = {{0x7FD299D4L,6L,6L,0x7FD299D4L,0x3645F4E1L},{0x7FD299D4L,6L,6L,0x7FD299D4L,0x3645F4E1L},{0x7FD299D4L,6L,6L,0x7FD299D4L,0x3645F4E1L},{0x7FD299D4L,6L,6L,0xBA6B1E2BL,(-1L)},{0xBA6B1E2BL,0x7FD299D4L,0x7FD299D4L,0xBA6B1E2BL,(-1L)},{0xBA6B1E2BL,0x7FD299D4L,0x7FD299D4L,0xBA6B1E2BL,(-1L)}};
    int8_t **l_1120 = &g_109[2];
    int8_t ***l_1119 = &l_1120;
    int8_t ****l_1118 = &l_1119;
    struct S0 l_1134 = {0L};
    int32_t * const l_1135 = &g_3;
    uint32_t l_1160[2];
    int64_t l_1191 = (-1L);
    struct S0 *** const *l_1200 = &g_1198;
    int32_t ***l_1214 = &g_976;
    union U3 *l_1215[2];
    int32_t ****l_1275 = &l_1214;
    int32_t *****l_1274 = &l_1275;
    uint64_t l_1394 = 18446744073709551609UL;
    uint32_t l_1416 = 5UL;
    uint16_t l_1444[7];
    int32_t l_1502[3];
    int32_t * const l_1506 = &g_8;
    uint64_t ***l_1517 = (void*)0;
    uint8_t l_1549 = 250UL;
    union U3 *** const *l_1571[2];
    uint64_t l_1601[3][5][2] = {{{0xEC93FEA56869308ELL,0xEC93FEA56869308ELL},{0xE2F3F13E0A9F8FBFLL,0xEC93FEA56869308ELL},{0xEC93FEA56869308ELL,0xE2F3F13E0A9F8FBFLL},{0xEC93FEA56869308ELL,0xEC93FEA56869308ELL},{0xE2F3F13E0A9F8FBFLL,0xEC93FEA56869308ELL}},{{0xEC93FEA56869308ELL,0xE2F3F13E0A9F8FBFLL},{0xEC93FEA56869308ELL,0xEC93FEA56869308ELL},{0xE2F3F13E0A9F8FBFLL,0xEC93FEA56869308ELL},{0xEC93FEA56869308ELL,0xE2F3F13E0A9F8FBFLL},{0xEC93FEA56869308ELL,0xEC93FEA56869308ELL}},{{0xE2F3F13E0A9F8FBFLL,0xEC93FEA56869308ELL},{0xEC93FEA56869308ELL,0xE2F3F13E0A9F8FBFLL},{0xEC93FEA56869308ELL,0xEC93FEA56869308ELL},{0xE2F3F13E0A9F8FBFLL,0xEC93FEA56869308ELL},{0xEC93FEA56869308ELL,0xE2F3F13E0A9F8FBFLL}}};
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_1160[i] = 4294967286UL;
    for (i = 0; i < 2; i++)
        l_1215[i] = &g_95;
    for (i = 0; i < 7; i++)
        l_1444[i] = 0xED2CL;
    for (i = 0; i < 3; i++)
        l_1502[i] = (-1L);
    for (i = 0; i < 2; i++)
        l_1571[i] = &g_1241;
    for (g_337.f0.f0 = 0; (g_337.f0.f0 <= 3); g_337.f0.f0 += 1)
    { 
        union U3 l_1002 = {1L};
        union U2 l_1012 = {0xED63316BL};
        int32_t l_1014[4] = {0L,0L,0L,0L};
        int64_t l_1032 = (-1L);
        uint16_t l_1038 = 1UL;
        int32_t l_1055 = 0xECEFA63FL;
        const union U1 l_1122 = {0x25FEC207C3998582LL};
        int32_t *l_1137 = &l_1014[0];
        uint16_t l_1192 = 0x6632L;
        int32_t * const *l_1212[6] = {&g_509[4][3],&g_509[0][2],&g_509[0][2],&g_509[4][3],&g_509[0][2],&g_509[0][2]};
        int32_t * const **l_1211[4] = {&l_1212[4],&l_1212[4],&l_1212[4],&l_1212[4]};
        uint8_t l_1235[4] = {2UL,2UL,2UL,2UL};
        union U3 *****l_1242[3];
        uint8_t *l_1323 = &l_1235[0];
        uint8_t **l_1322 = &l_1323;
        uint16_t l_1360 = 0x1A7BL;
        struct S0 **l_1383 = (void*)0;
        struct S0 ***l_1382 = &l_1383;
        struct S0 **** const l_1381 = &l_1382;
        struct S0 **** const *l_1380 = &l_1381;
        int32_t l_1403 = 1L;
        union U3 * const *l_1448[4][5] = {{&g_111[2],(void*)0,(void*)0,&g_111[2],&g_111[2]},{&l_1215[1],&g_111[1],&l_1215[1],&g_111[1],&l_1215[1]},{&g_111[2],&g_111[2],(void*)0,(void*)0,&g_111[2]},{&g_111[2],&g_111[1],&g_111[2],&g_111[1],&g_111[2]}};
        union U3 * const **l_1447 = &l_1448[3][4];
        uint64_t l_1541 = 1UL;
        int8_t ***l_1542 = &l_1120;
        int32_t l_1572 = 1L;
        int32_t l_1598 = 0xF2FA8BDFL;
        int i, j;
        for (i = 0; i < 3; i++)
            l_1242[i] = &g_1240[0];
        for (g_99.f1 = 0; g_99.f1 < 5; g_99.f1 += 1)
        {
            for (g_168 = 0; g_168 < 6; g_168 += 1)
            {
                g_509[g_99.f1][g_168] = &g_3;
            }
        }
    }
    l_1601[2][0][1]--;
    return g_1169[1][0][0].f2;
}



static int32_t * func_30(int32_t * p_31, const union U3  p_32)
{ 
    int32_t l_599 = 0x1FEA14F6L;
    int32_t l_605 = 1L;
    const union U1 l_662 = {8L};
    int32_t l_697 = 1L;
    const int64_t *l_735 = &g_167;
    const int64_t **l_734 = &l_735;
    int32_t l_780 = 0x1C304093L;
    int32_t l_781[2];
    struct S0 * const l_858[3] = {&g_68,&g_68,&g_68};
    union U3 *l_911 = &g_95;
    union U3 *l_912 = (void*)0;
    union U2 **l_971 = &g_507;
    int32_t *l_987[7];
    uint32_t l_988 = 0xB7D05F44L;
    int32_t *l_991 = &l_599;
    int32_t *l_992 = (void*)0;
    int i;
    for (i = 0; i < 2; i++)
        l_781[i] = 0L;
    for (i = 0; i < 7; i++)
        l_987[i] = (void*)0;
lbl_612:
    (*g_232) |= l_599;
    for (g_226 = 1; (g_226 <= 5); g_226 += 1)
    { 
        uint32_t l_607 = 4294967295UL;
        const int32_t *l_610 = &g_527;
        const union U4 *l_622[6][1];
        union U2 **l_646 = &g_507;
        union U4 *l_680[3];
        const union U1 l_686 = {-9L};
        int32_t **l_694 = &g_232;
        int32_t ** const *l_693 = &l_694;
        int32_t ** const **l_692 = &l_693;
        int32_t l_695 = 0L;
        int32_t l_696 = 1L;
        const uint8_t l_763 = 0xE2L;
        int32_t l_782 = 0x800217EFL;
        int32_t l_783[3];
        uint64_t l_784 = 4UL;
        int8_t l_795 = 1L;
        struct S0 **l_831[3][6][4] = {{{&g_374,&g_374,&g_374,(void*)0},{&g_374,&g_374,(void*)0,&g_374},{&g_374,(void*)0,&g_374,&g_374},{(void*)0,&g_374,&g_374,&g_374},{&g_374,&g_374,(void*)0,(void*)0},{&g_374,&g_374,&g_374,&g_374}},{{&g_374,&g_374,(void*)0,&g_374},{&g_374,&g_374,(void*)0,&g_374},{&g_374,&g_374,&g_374,(void*)0},{&g_374,&g_374,(void*)0,&g_374},{&g_374,&g_374,&g_374,&g_374},{&g_374,(void*)0,(void*)0,&g_374}},{{&g_374,&g_374,&g_374,(void*)0},{&g_374,&g_374,(void*)0,(void*)0},{&g_374,&g_374,(void*)0,(void*)0},{&g_374,&g_374,&g_374,(void*)0},{&g_374,&g_374,(void*)0,&g_374},{&g_374,(void*)0,&g_374,&g_374}}};
        union U4 l_887 = {{0x9D358EB5L}};
        int i, j, k;
        for (i = 0; i < 6; i++)
        {
            for (j = 0; j < 1; j++)
                l_622[i][j] = &g_337;
        }
        for (i = 0; i < 3; i++)
            l_680[i] = (void*)0;
        for (i = 0; i < 3; i++)
            l_783[i] = 1L;
        for (g_148 = 0; (g_148 <= 4); g_148 += 1)
        { 
            int32_t l_600 = 1L;
            int8_t l_606 = 0x29L;
            if (l_599)
                break;
            for (g_168 = 0; (g_168 <= 4); g_168 += 1)
            { 
                union U2 ** const l_643 = &g_507;
                int32_t *l_653 = &g_3;
                if ((l_599 = l_599))
                { 
                    int32_t *l_601 = (void*)0;
                    int32_t *l_602 = &g_8;
                    int32_t *l_603 = (void*)0;
                    int32_t *l_604[5];
                    uint64_t l_613 = 1UL;
                    uint8_t *l_635[5] = {&g_194,&g_194,&g_194,&g_194,&g_194};
                    uint32_t *l_645 = &l_607;
                    int16_t *l_647 = &g_337.f2;
                    int8_t *l_648 = &g_65[0];
                    int i, j;
                    for (i = 0; i < 5; i++)
                        l_604[i] = &g_165;
                    l_607++;
                    g_611 = l_610;
                    if (g_345)
                        goto lbl_612;
                    l_613++;
                    (*g_232) = (safe_sub_func_uint32_t_u_u(((safe_mul_func_int8_t_s_s(((safe_rshift_func_uint16_t_u_s(((void*)0 == l_622[5][0]), 0)) == 4UL), (((*l_648) ^= (g_502 , (safe_add_func_uint8_t_u_u(((safe_div_func_uint32_t_u_u(((((((--(**g_532)) ^ ((safe_mul_func_uint8_t_u_u((((safe_mul_func_int16_t_s_s(l_599, (((safe_lshift_func_int16_t_s_s(((g_638 |= (g_194++)) , (safe_mod_func_int16_t_s_s((safe_sub_func_int16_t_s_s(((*l_647) ^= ((l_643 != ((safe_unary_minus_func_uint32_t_u(((*l_645) |= g_493.f0))) , l_646)) > 0xE1C81B3E8127FF60LL)), 1UL)), (**g_428)))), g_254[0])) & 1UL) > (**g_428)))) > 4L) ^ 1L), 0x11L)) < l_606)) > (-2L)) | (*l_610)) == g_95.f0) && 5L), p_32.f0)) && p_32.f0), 0x22L)))) ^ (*l_610)))) >= (*g_611)), l_599));
                }
                else
                { 
                    int32_t **l_649 = &g_509[2][2];
                    int32_t **l_650 = (void*)0;
                    int32_t **l_651 = &g_232;
                    int32_t *l_652 = &l_605;
                    (*l_651) = ((*l_649) = &g_3);
                    return l_653;
                }
                if (p_32.f0)
                    continue;
                if ((*g_611))
                    break;
            }
        }
        if (l_599)
            break;
        if (((*g_232) = (*l_610)))
        { 
            union U4 l_654[6][3][5] = {{{{{1L}},{{0x60038E78L}},{{0x30CBD3FFL}},{{0x30CBD3FFL}},{{0x60038E78L}}},{{{0xA273B2F0L}},{{0x7517070FL}},{{0x30CBD3FFL}},{{0x7B39741BL}},{{0x01F4EF09L}}},{{{-1L}},{{0xEEE380B1L}},{{0xFBF7F1AFL}},{{0x30CBD3FFL}},{{0x01F4EF09L}}}},{{{{0x612D3098L}},{{0x18A656B2L}},{{0x7B39741BL}},{{4L}},{{0x60038E78L}}},{{{-1L}},{{0x18A656B2L}},{{0xF757BB90L}},{{-1L}},{{0xEEE380B1L}}},{{{0xA273B2F0L}},{{0xEEE380B1L}},{{0x7B39741BL}},{{-1L}},{{0x442ABAEBL}}}},{{{{0xF3DE28B0L}},{{7L}},{{0x60038E78L}},{{0x7517070FL}},{{0x3C39E1FBL}}},{{{0xF3DE28B0L}},{{0L}},{{0x01F4EF09L}},{{0x01F4EF09L}},{{0L}}},{{{0x3170294CL}},{{7L}},{{0x01F4EF09L}},{{0xEEE380B1L}},{{1L}}}},{{{{0x14313F82L}},{{0x3C39E1FBL}},{{0x60038E78L}},{{0x01F4EF09L}},{{1L}}},{{{0xB45CC10EL}},{{0xDF173DD1L}},{{0xEEE380B1L}},{{0x7517070FL}},{{0L}}},{{{0x14313F82L}},{{0xDF173DD1L}},{{0x442ABAEBL}},{{0xFB2F34A4L}},{{0x3C39E1FBL}}}},{{{{0x3170294CL}},{{0x3C39E1FBL}},{{0xEEE380B1L}},{{0xFB2F34A4L}},{{0x030F1414L}}},{{{0xF3DE28B0L}},{{7L}},{{0x60038E78L}},{{0x7517070FL}},{{0x3C39E1FBL}}},{{{0xF3DE28B0L}},{{0L}},{{0x01F4EF09L}},{{0x01F4EF09L}},{{0L}}}},{{{{0x3170294CL}},{{7L}},{{0x01F4EF09L}},{{0xEEE380B1L}},{{1L}}},{{{0x14313F82L}},{{0x3C39E1FBL}},{{0x60038E78L}},{{0x01F4EF09L}},{{1L}}},{{{0xB45CC10EL}},{{0xDF173DD1L}},{{0xEEE380B1L}},{{0x7517070FL}},{{0L}}}}};
            int32_t *l_663 = &l_605;
            struct S0 *l_703 = &g_493;
            union U3 **l_715[1][3];
            uint64_t l_730[6][4][4] = {{{18446744073709551615UL,18446744073709551610UL,18446744073709551610UL,18446744073709551615UL},{0x09735B0B7E83C21CLL,0x6980854B28F7C328LL,18446744073709551610UL,0xD9A06AE417EEC504LL},{18446744073709551615UL,18446744073709551608UL,0xD82B4AC6260B2D45LL,18446744073709551608UL},{18446744073709551608UL,18446744073709551610UL,0x09735B0B7E83C21CLL,18446744073709551608UL}},{{0x09735B0B7E83C21CLL,18446744073709551608UL,0xD9A06AE417EEC504LL,0xD9A06AE417EEC504LL},{0x6980854B28F7C328LL,0x6980854B28F7C328LL,0xD82B4AC6260B2D45LL,18446744073709551615UL},{0x6980854B28F7C328LL,18446744073709551610UL,0xD9A06AE417EEC504LL,0x6980854B28F7C328LL},{0x09735B0B7E83C21CLL,18446744073709551615UL,0x09735B0B7E83C21CLL,0xD9A06AE417EEC504LL}},{{18446744073709551608UL,18446744073709551615UL,0xD82B4AC6260B2D45LL,0x6980854B28F7C328LL},{18446744073709551615UL,18446744073709551610UL,18446744073709551610UL,18446744073709551615UL},{0x09735B0B7E83C21CLL,0x6980854B28F7C328LL,18446744073709551610UL,0xD9A06AE417EEC504LL},{18446744073709551615UL,18446744073709551608UL,0xD82B4AC6260B2D45LL,18446744073709551608UL}},{{18446744073709551608UL,18446744073709551610UL,0x09735B0B7E83C21CLL,18446744073709551608UL},{0x09735B0B7E83C21CLL,18446744073709551608UL,0xD9A06AE417EEC504LL,0xD9A06AE417EEC504LL},{0x6980854B28F7C328LL,0x6980854B28F7C328LL,0xD82B4AC6260B2D45LL,18446744073709551615UL},{0x6980854B28F7C328LL,18446744073709551610UL,0xD9A06AE417EEC504LL,0x6980854B28F7C328LL}},{{0x09735B0B7E83C21CLL,18446744073709551615UL,0x09735B0B7E83C21CLL,0xD9A06AE417EEC504LL},{18446744073709551608UL,18446744073709551615UL,0xD82B4AC6260B2D45LL,0x6980854B28F7C328LL},{18446744073709551615UL,18446744073709551610UL,18446744073709551610UL,18446744073709551615UL},{0x09735B0B7E83C21CLL,0x6980854B28F7C328LL,18446744073709551610UL,0xD9A06AE417EEC504LL}},{{18446744073709551615UL,18446744073709551608UL,0xD82B4AC6260B2D45LL,18446744073709551608UL},{18446744073709551608UL,18446744073709551610UL,0x09735B0B7E83C21CLL,18446744073709551608UL},{0x09735B0B7E83C21CLL,18446744073709551608UL,0xD9A06AE417EEC504LL,0xD9A06AE417EEC504LL},{0x6980854B28F7C328LL,0x6980854B28F7C328LL,0xD82B4AC6260B2D45LL,18446744073709551615UL}}};
            const int64_t **l_736 = (void*)0;
            int64_t l_774 = 0x072B11519C69E464LL;
            int32_t *l_775 = &l_605;
            int32_t *l_776 = &g_3;
            int32_t *l_777 = &l_695;
            int32_t *l_778 = &l_695;
            int32_t *l_779[5];
            int i, j, k;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 3; j++)
                    l_715[i][j] = &g_111[2];
            }
            for (i = 0; i < 5; i++)
                l_779[i] = (void*)0;
            for (l_605 = 0; (l_605 <= 0); l_605 += 1)
            { 
                uint16_t *l_661 = &g_63;
                int32_t **l_664 = &g_509[0][0];
                uint32_t *l_679 = &g_92;
                union U4 **l_681 = &l_680[2];
                uint16_t l_683[1][7] = {{0x6C49L,0x8FAEL,0x8FAEL,0x6C49L,0x8FAEL,0x8FAEL,0x6C49L}};
                struct S0 l_688 = {0L};
                int32_t ***l_691 = &l_664;
                int32_t ****l_690 = &l_691;
                int32_t *****l_689[1][3];
                int i, j;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 3; j++)
                        l_689[i][j] = &l_690;
                }
                (*l_664) = l_663;
                (*g_232) = (safe_mul_func_int16_t_s_s((*l_610), (safe_add_func_int16_t_s_s(((((**g_428) ^= (((*l_679) = (!(safe_mod_func_int16_t_s_s(((safe_rshift_func_uint8_t_u_u(((!0xE4L) < 0x9CL), 7)) != (safe_sub_func_int32_t_s_s((*l_663), (*l_663)))), (((safe_div_func_int64_t_s_s(((void*)0 != &g_111[g_226]), (*l_663))) ^ (*g_232)) ^ (*l_610)))))) | p_32.f0)) | g_65[0]) <= 5L), g_502.f1))));
                if ((&g_337 == ((*l_681) = l_680[2])))
                { 
                    int32_t *l_682[6] = {&g_165,&g_165,&g_165,&g_165,&g_165,&g_165};
                    int i;
                    l_599 = (*l_610);
                    ++l_683[0][1];
                }
                else
                { 
                    struct S0 l_687[7] = {{-1L},{-1L},{-1L},{-1L},{-1L},{-1L},{-1L}};
                    int i;
                    (*l_664) = &g_3;
                    return p_31;
                }
                l_692 = (void*)0;
                for (g_337.f2 = 0; (g_337.f2 >= 0); g_337.f2 -= 1)
                { 
                    uint64_t l_698 = 0x6C80DBEF6093D619LL;
                    struct S0 **l_704 = (void*)0;
                    struct S0 **l_705[3];
                    uint32_t *l_706 = &l_654[2][2][0].f3;
                    int i, j, k;
                    for (i = 0; i < 3; i++)
                        l_705[i] = &l_703;
                    ++l_698;
                    (**l_694) |= g_159[l_605][(l_605 + 1)][g_337.f2];
                    (*g_232) = p_32.f0;
                    (**l_694) |= (safe_mod_func_int16_t_s_s(((g_374 = l_703) == (void*)0), ((--(*l_706)) , p_32.f0)));
                }
            }
            for (g_282 = 0; (g_282 != 0); g_282 = safe_add_func_uint64_t_u_u(g_282, 8))
            { 
                union U3 l_716 = {-1L};
                struct S0 l_719 = {0x88E48183L};
                uint8_t *l_731 = &g_194;
                int8_t l_732 = 0L;
                uint32_t *l_743 = &g_283[0][4][4];
                uint32_t **l_744 = &l_743;
                l_732 = (safe_add_func_int64_t_s_s((((safe_lshift_func_uint16_t_u_u((**g_428), (l_715[0][1] == (void*)0))) , (l_716 , ((*l_731) = (((safe_mul_func_int8_t_s_s(((l_719 , p_32.f0) && ((safe_div_func_uint32_t_u_u((safe_sub_func_uint64_t_u_u(((((safe_mod_func_int64_t_s_s(((safe_mod_func_uint32_t_u_u((safe_sub_func_uint32_t_u_u(((*g_429) | p_32.f0), l_716.f0)), (-5L))) == 0x1E7FL), l_719.f0)) | l_730[2][2][3]) , (**g_532)) ^ l_719.f0), 0UL)), g_166[0])) <= l_662.f0)), p_32.f0)) || (***l_693)) | g_282)))) & l_697), p_32.f0));
                (*l_663) ^= ((*g_232) = ((+(1UL > (&l_654[2][2][0] != &g_337))) ^ ((l_734 = l_734) != l_736)));
                (**l_694) &= (safe_mul_func_uint8_t_u_u(((*l_731) ^= ((safe_mul_func_uint8_t_u_u(252UL, l_662.f0)) && ((&g_283[1][2][2] == ((*l_744) = l_743)) , ((safe_mul_func_uint8_t_u_u(1UL, g_59[3][6][1])) <= 0x1BD36C6CL)))), 0L));
            }
            for (g_345 = 1; (g_345 >= 0); g_345 -= 1)
            { 
                uint16_t l_750 = 65535UL;
                int32_t l_760 = 0L;
                uint8_t *l_769 = (void*)0;
                int32_t l_773 = (-1L);
                for (l_599 = 2; (l_599 >= 0); l_599 -= 1)
                { 
                    int32_t *l_747 = &l_695;
                    int32_t *l_748 = (void*)0;
                    int32_t *l_749[1];
                    int16_t *l_758 = (void*)0;
                    int16_t *l_759[6][7][6] = {{{&g_159[1][0][0],&g_226,&g_337.f2,&g_159[1][0][0],&l_654[2][2][0].f2,&g_159[1][2][0]},{&g_337.f2,(void*)0,&g_159[1][2][0],&g_226,&g_159[0][2][0],&g_337.f2},{&g_159[1][0][0],&l_654[2][2][0].f2,(void*)0,&g_159[1][0][0],&g_159[1][2][0],&g_473},{&g_159[1][0][0],&g_473,&l_654[2][2][0].f2,(void*)0,&g_159[0][2][0],&g_337.f2},{(void*)0,&g_159[0][1][0],&g_159[1][2][0],&l_654[2][2][0].f2,&g_159[0][1][0],&g_226},{&g_226,&g_159[1][0][0],(void*)0,&g_337.f2,(void*)0,&g_159[1][0][0]},{&g_226,&g_159[1][0][0],&g_473,&g_159[1][0][0],&g_159[1][0][0],&g_337.f2}},{{&g_159[1][2][0],&g_159[0][2][0],&g_473,&l_654[2][2][0].f2,&g_226,&g_159[1][2][0]},{&g_337.f2,&g_159[0][2][0],(void*)0,&l_654[2][2][0].f2,&g_159[1][0][0],&g_159[1][0][0]},{&l_654[2][2][0].f2,&g_159[1][0][0],(void*)0,&g_337.f2,(void*)0,&g_159[1][0][0]},{&l_654[2][2][0].f2,&g_159[1][0][0],&g_473,(void*)0,&g_159[0][1][0],&g_337.f2},{(void*)0,&g_159[0][1][0],&g_226,&g_337.f2,&g_159[0][2][0],&g_473},{&g_159[0][1][0],&g_473,(void*)0,&g_337.f2,&g_159[1][2][0],&g_159[1][2][0]},{&l_654[2][2][0].f2,&g_337.f2,(void*)0,(void*)0,&g_473,(void*)0}},{{&g_159[1][0][0],&g_226,(void*)0,(void*)0,&g_226,&g_473},{(void*)0,(void*)0,&g_159[0][1][0],&g_226,&g_159[0][0][0],&l_654[2][2][0].f2},{(void*)0,&g_337.f2,(void*)0,&g_226,&g_159[1][2][0],(void*)0},{&g_159[1][2][0],(void*)0,&g_159[1][0][0],&g_159[1][2][0],&g_337.f2,&g_159[1][0][0]},{&g_159[0][1][0],&g_226,&g_159[1][0][0],&l_654[2][2][0].f2,&l_654[2][2][0].f2,(void*)0},{(void*)0,&g_159[1][0][0],&g_159[1][0][0],&g_159[1][0][0],(void*)0,&l_654[2][2][0].f2},{&g_159[1][2][0],&g_473,&g_226,(void*)0,&g_159[1][0][0],&g_159[1][0][0]}},{{&g_473,&g_337.f2,(void*)0,&g_473,&l_654[2][2][0].f2,&g_159[1][0][0]},{(void*)0,&g_226,&g_159[1][0][0],&g_473,&l_654[2][2][0].f2,(void*)0},{&g_159[1][0][0],&g_473,(void*)0,(void*)0,&g_473,&g_159[1][0][0]},{&g_159[1][0][0],&g_473,&g_226,&g_337.f2,&l_654[2][2][0].f2,&g_159[0][1][0]},{(void*)0,&g_159[1][0][0],&g_473,&l_654[2][2][0].f2,(void*)0,&g_159[1][0][0]},{(void*)0,(void*)0,&l_654[2][2][0].f2,&g_337.f2,(void*)0,&g_473},{&g_159[1][0][0],&l_654[2][2][0].f2,&g_337.f2,(void*)0,&g_159[1][0][0],&g_159[1][0][0]}},{{&g_159[1][0][0],&g_337.f2,&g_337.f2,&g_473,(void*)0,(void*)0},{(void*)0,&g_226,(void*)0,&g_473,(void*)0,(void*)0},{&g_473,(void*)0,(void*)0,(void*)0,&l_654[2][2][0].f2,(void*)0},{&g_159[1][2][0],&g_159[1][0][0],&g_226,&g_159[1][0][0],&g_159[1][0][0],(void*)0},{(void*)0,&g_159[1][2][0],(void*)0,&l_654[2][2][0].f2,&g_159[1][2][0],&g_159[1][0][0]},{&g_159[0][1][0],&l_654[2][2][0].f2,(void*)0,&g_159[1][2][0],&g_159[1][0][0],&g_473},{&g_159[1][2][0],(void*)0,&g_226,&g_159[1][0][0],&g_226,&g_159[1][0][0]}},{{(void*)0,(void*)0,&g_473,&l_654[2][2][0].f2,&g_337.f2,&g_159[0][1][0]},{&g_159[0][1][0],&g_159[1][0][0],&g_159[1][0][0],(void*)0,&g_337.f2,&g_337.f2},{&g_337.f2,&g_226,(void*)0,&g_159[0][1][0],&g_159[0][0][0],&g_159[1][0][0]},{&g_159[1][0][0],(void*)0,(void*)0,&g_159[1][0][0],&g_159[1][0][0],&g_226},{&g_159[1][0][0],&g_473,(void*)0,&g_159[0][1][0],&g_159[1][2][0],&l_654[2][2][0].f2},{(void*)0,&g_159[1][0][0],&g_337.f2,&g_159[1][0][0],&l_654[2][2][0].f2,&g_159[1][0][0]},{(void*)0,&g_337.f2,(void*)0,&g_337.f2,(void*)0,&l_654[2][2][0].f2}}};
                    uint32_t *l_770 = (void*)0;
                    uint32_t *l_771 = &g_99.f0;
                    int8_t *l_772 = &g_65[0];
                    int i, j, k;
                    for (i = 0; i < 1; i++)
                        l_749[i] = &g_8;
                    l_750--;
                    (*l_747) &= (safe_add_func_uint8_t_u_u(g_166[l_599], (((p_32.f0 <= p_32.f0) | p_32.f0) < 0L)));
                    l_773 = ((safe_rshift_func_int8_t_s_s(((safe_unary_minus_func_uint32_t_u(g_159[1][0][0])) ^ (((*g_429) = 65532UL) > (l_760 = g_249.f0.f0))), ((*l_610) > (((l_697 ^= ((*l_772) = ((((safe_sub_func_int8_t_s_s((((((**g_532) != l_763) >= (~((*l_771) = (safe_rshift_func_int16_t_s_s((safe_rshift_func_int16_t_s_s(((p_32 , (void*)0) != l_769), p_32.f0)), 7))))) == (**g_532)) <= p_32.f0), (*l_663))) == 1UL) & g_95.f0) | p_32.f0))) | p_32.f0) | g_311)))) <= l_750);
                    if (l_774)
                        continue;
                    if (g_282)
                        goto lbl_612;
                }
            }
            for (g_337.f1 = 0; g_337.f1 < 3; g_337.f1 += 1)
            {
                g_166[g_337.f1] = (-1L);
            }
            ++l_784;
        }
        else
        { 
            uint64_t l_796 = 18446744073709551610UL;
            int32_t l_797 = 0xEFB494BEL;
            uint8_t *l_802[4];
            int32_t l_803[1][3][7] = {{{(-2L),1L,(-2L),0xF66566D1L,0xF66566D1L,(-2L),1L},{0xF66566D1L,1L,0xA989E856L,0xA989E856L,1L,0xF66566D1L,1L},{(-2L),0xF66566D1L,0xF66566D1L,(-2L),1L,(-2L),0xF66566D1L}}};
            int8_t *l_806 = &g_65[0];
            int32_t *l_807 = &g_3;
            int64_t *l_832 = &g_309;
            int8_t l_872 = 0x6EL;
            uint64_t l_878 = 18446744073709551615UL;
            struct S0 l_904 = {0xA18C9236L};
            const int32_t **l_910 = &g_611;
            int i, j, k;
            for (i = 0; i < 4; i++)
                l_802[i] = &g_194;
            l_780 &= (safe_lshift_func_int8_t_s_u((safe_sub_func_int32_t_s_s((safe_div_func_uint8_t_u_u(((safe_add_func_uint16_t_u_u(((l_796 |= l_795) <= (((*l_807) = ((((**g_428) == (((*l_806) = (l_797 != ((safe_lshift_func_int8_t_s_s(((safe_rshift_func_int16_t_s_u((g_311 && (l_803[0][0][4] &= (g_194 |= g_354))), (((**l_694) &= l_605) <= (safe_sub_func_uint16_t_u_u(p_32.f0, (*g_429)))))) && p_32.f0), 3)) ^ l_662.f0))) || 0xF5L)) > p_32.f0) == l_797)) > p_32.f0)), g_465)) && 1UL), l_605)), l_781[1])), 7));
            if ((*g_611))
                break;
            if ((safe_sub_func_int8_t_s_s(((((((safe_rshift_func_uint16_t_u_u((p_32.f0 > ((*l_832) ^= (((0x47D1L >= (safe_add_func_uint8_t_u_u((++g_194), (safe_add_func_uint64_t_u_u((251UL != (safe_lshift_func_int16_t_s_u(((safe_div_func_int8_t_s_s((((safe_sub_func_uint8_t_u_u(((safe_rshift_func_int8_t_s_u((safe_sub_func_int64_t_s_s(((safe_sub_func_int8_t_s_s((0L ^ ((~(g_63 , (((p_32.f0 < ((&g_67 != l_831[2][4][1]) , (***l_693))) <= l_697) <= 0x8801L))) || g_148)), 0L)) , p_32.f0), (*l_807))), p_32.f0)) < (**g_428)), g_68.f0)) , p_32.f0) || g_311), l_781[1])) == 1UL), 0))), l_662.f1))))) < 8UL) , g_174))), 8)) & (*l_610)) || g_148) , 18446744073709551608UL) , 18446744073709551607UL) && 0UL), 6UL)))
            { 
                uint32_t *l_844 = (void*)0;
                uint32_t **l_843 = &l_844;
                int32_t *l_845 = &l_697;
                int64_t ***l_850 = (void*)0;
                int64_t ***l_851 = (void*)0;
                int64_t ***l_852 = (void*)0;
                int64_t ***l_853[2];
                uint32_t **l_854 = (void*)0;
                uint32_t *l_856 = &g_92;
                uint32_t **l_855 = &l_856;
                uint8_t l_857 = 0x83L;
                struct S0 l_862 = {0x394D3FE2L};
                uint64_t * const *l_877[5][6] = {{&g_533[0],&g_533[0],&g_533[1],&g_533[0],&g_533[1],&g_533[0]},{&g_533[1],&g_533[0],&g_533[0],&g_533[0],&g_533[0],&g_533[1]},{&g_533[0],&g_533[1],&g_533[0],&g_533[1],&g_533[0],&g_533[0]},{&g_533[1],&g_533[1],&g_533[1],&g_533[1],&g_533[0],&g_533[1]},{&g_533[1],&g_533[0],&g_533[1],&g_533[1],&g_533[1],&g_533[1]}};
                uint64_t * const **l_876 = &l_877[3][0];
                uint64_t * const ***l_875[2][3][2] = {{{&l_876,&l_876},{&l_876,&l_876},{&l_876,&l_876}},{{&l_876,&l_876},{&l_876,&l_876},{&l_876,&l_876}}};
                int i, j, k;
                for (i = 0; i < 2; i++)
                    l_853[i] = (void*)0;
                (*l_845) |= (safe_add_func_int16_t_s_s((safe_add_func_int32_t_s_s((*l_807), (((p_32.f0 != g_9) <= (safe_mod_func_uint8_t_u_u(((void*)0 != &p_31), (safe_mul_func_int16_t_s_s((((safe_rshift_func_int16_t_s_u(0xAFDFL, 13)) && ((((((*l_843) = g_29) == p_31) | (*g_429)) | 0xEFL) != (*g_232))) & (-5L)), p_32.f0))))) || (*l_807)))), (**g_428)));
                if (g_493.f0)
                    goto lbl_986;
                for (g_167 = 0; (g_167 != (-23)); g_167 = safe_sub_func_uint32_t_u_u(g_167, 1))
                { 
                    if ((*l_807))
                        break;
                }
                if ((safe_mod_func_int64_t_s_s((((1UL & (&g_427 != (g_426 = &g_427))) , ((*l_855) = &g_174)) != (void*)0), l_857)))
                { 
                    struct S0 **l_859[2];
                    struct S0 **l_860 = &g_374;
                    int i;
                    for (i = 0; i < 2; i++)
                        l_859[i] = &g_374;
                    (*l_860) = l_858[1];
                    (*g_232) = ((safe_unary_minus_func_uint16_t_u(((**g_428) |= ((p_32.f0 , l_862) , (((void*)0 == (*l_843)) || 65531UL))))) != (safe_unary_minus_func_uint8_t_u((safe_mod_func_uint8_t_u_u(0x5AL, ((safe_lshift_func_int8_t_s_s(((safe_lshift_func_uint16_t_u_u((safe_add_func_int8_t_s_s(l_781[0], l_872)), p_32.f0)) ^ p_32.f0), p_32.f0)) | (*l_807)))))));
                    return p_31;
                }
                else
                { 
                    uint64_t * const ****l_874[4] = {&g_873,&g_873,&g_873,&g_873};
                    int i;
                    l_875[0][1][0] = g_873;
                }
                (*l_845) = l_781[0];
            }
            else
            { 
                const union U1 l_888 = {0L};
                struct S0 l_889 = {1L};
                int32_t l_892 = (-9L);
                int8_t l_894 = 3L;
                int32_t l_899 = (-1L);
                if (l_878)
                { 
                    uint32_t l_879 = 1UL;
                    l_879 &= (p_32.f0 || l_697);
                    if ((*g_232))
                        continue;
                }
                else
                { 
                    uint32_t *l_891 = &g_283[2][2][4];
                    uint32_t **l_890 = &l_891;
                    int32_t *l_893 = &l_605;
                    int32_t *l_895 = &l_605;
                    int32_t *l_896 = &l_781[0];
                    int32_t *l_897 = &l_780;
                    int32_t *l_898[3][1];
                    int32_t l_900 = (-7L);
                    uint32_t l_901[7] = {0xED48CA55L,1UL,1UL,0xED48CA55L,1UL,1UL,0xED48CA55L};
                    int i, j;
                    for (i = 0; i < 3; i++)
                    {
                        for (j = 0; j < 1; j++)
                            l_898[i][j] = &g_3;
                    }
                    (*l_807) = ((**l_694) = (safe_lshift_func_uint8_t_u_u(((~(safe_div_func_uint32_t_u_u((safe_div_func_int64_t_s_s(((((l_887 , &l_607) == ((*l_890) = &g_150)) == (*g_429)) == l_781[0]), (**l_694))), 5L))) | g_68.f0), g_95.f0)));
                    l_901[3]++;
                    g_95.f1 = ((*g_374) = l_904);
                    if (g_63)
                        goto lbl_612;
                }
                if (p_32.f0)
                    continue;
            }
            (*l_910) = &g_527;
            l_912 = l_911;
        }
    }
lbl_986:
    for (g_354 = 10; (g_354 <= (-17)); g_354 = safe_sub_func_int16_t_s_s(g_354, 9))
    { 
        struct S0 l_915 = {0L};
        int32_t *l_916 = &g_165;
        int32_t *l_917 = (void*)0;
        int32_t *l_918 = &l_605;
        int32_t *l_919 = (void*)0;
        int32_t *l_920 = (void*)0;
        int32_t *l_921[3][4][3] = {{{&g_3,&l_605,&g_3},{&l_781[1],&g_3,&l_781[1]},{&g_3,&l_605,&g_3},{&l_781[1],&g_3,&l_781[1]}},{{&g_3,&l_605,&g_3},{&l_781[1],&g_3,&l_781[1]},{&g_3,&l_605,&g_3},{&l_781[1],&g_3,&l_781[1]}},{{&g_3,&l_605,&g_3},{&l_781[1],&g_3,&l_781[1]},{&g_3,&l_605,&g_3},{&l_781[1],&g_3,&l_781[1]}}};
        int32_t l_922[5] = {0x84C5CB3DL,0x84C5CB3DL,0x84C5CB3DL,0x84C5CB3DL,0x84C5CB3DL};
        int64_t l_923[6][3] = {{0xE37389321FE37217LL,0xE37389321FE37217LL,0xE37389321FE37217LL},{(-9L),(-9L),(-9L)},{0xE37389321FE37217LL,0xE37389321FE37217LL,0xE37389321FE37217LL},{(-9L),(-9L),(-9L)},{0xE37389321FE37217LL,0xE37389321FE37217LL,0xE37389321FE37217LL},{(-9L),(-9L),(-9L)}};
        uint32_t l_924 = 0UL;
        int64_t l_953 = 0xC056D605ED6108C3LL;
        int32_t l_983 = 1L;
        int i, j, k;
        for (g_168 = 1; (g_168 >= 0); g_168 -= 1)
        { 
            (*g_67) = (*g_67);
            (*g_67) = l_915;
        }
        --l_924;
        if (l_781[0])
            break;
        for (g_337.f3 = 0; (g_337.f3 <= 22); g_337.f3++)
        { 
            int64_t l_929 = (-1L);
            int32_t l_930 = 0x56BC9537L;
            int32_t l_931 = 0xE240FCDAL;
            int32_t l_932 = 0xE8E07773L;
            int32_t l_933 = 8L;
            int32_t l_934[1];
            uint32_t l_935 = 4294967295UL;
            int8_t l_946[4] = {0x6FL,0x6FL,0x6FL,0x6FL};
            int8_t ***l_956 = (void*)0;
            union U2 **l_972 = &g_507;
            int i;
            for (i = 0; i < 1; i++)
                l_934[i] = 0L;
            ++l_935;
            for (l_697 = 1; (l_697 <= 4); l_697 += 1)
            { 
                uint8_t l_938 = 250UL;
                l_938--;
                (*l_916) &= (-9L);
                for (g_99.f0 = 0; (g_99.f0 <= 0); g_99.f0 += 1)
                { 
                    int32_t **l_941 = &l_919;
                    int i;
                    l_922[l_697] |= 0x8CA61029L;
                    (*l_941) = &l_922[l_697];
                }
                for (g_638 = 1; (g_638 >= 0); g_638 -= 1)
                { 
                    int16_t *l_947 = &g_473;
                    int8_t *l_948 = &g_95.f0;
                    int i, j, k;
                    (*g_232) &= ((safe_rshift_func_int8_t_s_u(g_59[(g_638 + 4)][(g_638 + 3)][g_638], 2)) ^ (((*l_948) = ((((*l_918) = 0xF356DD9FL) == (safe_add_func_uint16_t_u_u(l_946[1], ((*l_947) = 0xD86DL)))) != l_781[0])) == (p_32.f0 & (safe_mod_func_int32_t_s_s((safe_lshift_func_int8_t_s_s(l_953, 0)), l_934[0])))));
                }
            }
            for (g_226 = 0; (g_226 < (-10)); g_226 = safe_sub_func_uint8_t_u_u(g_226, 5))
            { 
                int8_t ****l_957 = &l_956;
                uint8_t l_959 = 0x0EL;
                int32_t ***l_978 = &g_976;
                if ((&g_108 != ((*l_957) = l_956)))
                { 
                    int32_t ****l_977[6] = {&g_975,&g_975,&g_975,&g_975,&g_975,&g_975};
                    int16_t *l_981 = (void*)0;
                    int64_t l_982 = 1L;
                    uint32_t *l_984 = &l_924;
                    int32_t *l_985 = &g_95.f1.f0;
                    int i;
                    (*g_232) = (~1L);
                    if (l_959)
                        continue;
                    p_31 = ((*g_976) = (((*l_985) = ((((*l_984) |= (((safe_rshift_func_int8_t_s_u(((safe_sub_func_uint8_t_u_u((((((safe_mul_func_uint16_t_u_u((((-1L) != (safe_div_func_int64_t_s_s((~(l_933 = (safe_mod_func_uint32_t_u_u((((l_972 = l_971) != (void*)0) < ((**g_532) = ((safe_mul_func_uint16_t_u_u(((g_975 = g_975) != l_978), ((p_32.f0 != ((((safe_rshift_func_int8_t_s_s((*l_918), p_32.f0)) > l_934[0]) > 0UL) < 0xE3L)) ^ 1UL))) <= 1UL))), l_933)))), p_32.f0))) != l_982), p_32.f0)) | 5L) ^ p_32.f0) < l_983) == 0x503BL), l_662.f0)) , 0xC9L), 0)) != p_32.f0) || p_32.f0)) , l_929) && g_226)) , (*g_976)));
                    (*l_971) = (*l_971);
                }
                else
                { 
                    l_932 = (*g_232);
                    (*l_916) |= (*l_918);
                }
            }
        }
    }
    l_781[0] = (l_605 = ((*g_232) = l_662.f0));
    l_988--;
    return l_992;
}



static int32_t * func_33(int32_t * p_34)
{ 
    int32_t l_256[7];
    int32_t l_260 = 0x6F2C5EE9L;
    const union U1 l_261 = {0L};
    int32_t l_278 = 0x3EB53713L;
    int16_t l_294 = 0xA097L;
    int32_t l_310 = (-1L);
    uint16_t l_352[4];
    uint64_t l_414 = 0x5D07C6043B0A0F1ELL;
    union U4 *l_419[5] = {&g_337,&g_337,&g_337,&g_337,&g_337};
    union U2 l_457 = {4294967293UL};
    uint32_t l_508 = 0UL;
    struct S0 l_510 = {1L};
    int8_t l_517 = 0xF7L;
    int32_t l_518 = 0L;
    int32_t l_519 = 0x91570E07L;
    int32_t l_520 = 0xECB77272L;
    int32_t l_521[3];
    union U3 l_535 = {0L};
    int16_t l_574 = (-1L);
    int16_t l_592 = (-1L);
    int64_t l_595 = 0xE81C148C86CE65EBLL;
    int32_t *l_596 = (void*)0;
    int32_t *l_597 = &l_521[0];
    int i;
    for (i = 0; i < 7; i++)
        l_256[i] = 0x6DDCF8C0L;
    for (i = 0; i < 4; i++)
        l_352[i] = 0UL;
    for (i = 0; i < 3; i++)
        l_521[i] = 0x7D4871F9L;
    (*p_34) = (*g_232);
    for (g_63 = 0; (g_63 <= 2); g_63 += 1)
    { 
        uint64_t l_252 = 2UL;
        int32_t l_257 = 1L;
        int32_t l_280 = (-3L);
        int32_t l_281 = 1L;
        union U2 *l_342 = (void*)0;
        union U2 **l_341 = &l_342;
        struct S0 l_404 = {0L};
        uint16_t *l_408 = (void*)0;
        uint16_t **l_407 = &l_408;
        uint16_t l_431 = 0x8417L;
        uint64_t l_468[5] = {0UL,0UL,0UL,0UL,0UL};
        int32_t l_474 = (-8L);
        int32_t l_480 = 0x203E3364L;
        int i;
        for (g_95.f1.f0 = 5; (g_95.f1.f0 >= 0); g_95.f1.f0 -= 1)
        { 
            uint16_t *l_253 = &g_254[0];
            int8_t *l_255 = &g_107;
            struct S0 l_267[4][1][3] = {{{{-6L},{-6L},{0xB10661FEL}}},{{{0xC02D8466L},{0xC02D8466L},{0x62700E5FL}}},{{{-6L},{-6L},{0xB10661FEL}}},{{{0xC02D8466L},{0xC02D8466L},{0x62700E5FL}}}};
            int32_t l_273 = 0x9E0A391BL;
            int32_t l_274 = 0x714C3FAFL;
            int32_t l_276 = 1L;
            int64_t l_277 = 3L;
            int32_t l_279 = 0xDEF5BE23L;
            uint32_t l_297 = 0x9DCF5472L;
            union U4 *l_336 = &g_337;
            int i, j, k;
        }
    }
    for (g_68.f0 = (-14); (g_68.f0 > (-7)); g_68.f0++)
    { 
        union U1 l_488 = {0x040F198841D4FA86LL};
        uint64_t l_496[2][6];
        uint8_t *l_497 = &g_194;
        int16_t *l_498 = &g_226;
        union U4 *l_499 = &g_337;
        int32_t **l_500 = &g_232;
        int i, j;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 6; j++)
                l_496[i][j] = 0x88472AB0E2C5663DLL;
        }
        (*p_34) = (((((*l_498) &= ((*g_429) || (((l_488 , ((safe_lshift_func_int16_t_s_u(((safe_mul_func_uint16_t_u_u((g_493 , (0x3A26B86AL > (l_488.f1 == ((*l_497) &= ((l_310 = l_256[1]) <= l_496[0][5]))))), 65529UL)) || l_310), 6)) , l_488)) , g_337.f0.f0) < l_496[1][3]))) & g_309) == l_496[1][0]) || (-9L));
        if ((*p_34))
            break;
        (*g_232) &= (&l_497 != (void*)0);
        l_499 = (void*)0;
        (*l_500) = (p_34 = &g_345);
    }
    for (g_148 = 0; (g_148 <= 3); g_148 += 1)
    { 
        int32_t *l_501 = (void*)0;
        const union U1 l_503 = {0xEAFBAB12887DC570LL};
        int32_t **l_511[7][3] = {{&g_232,(void*)0,&g_232},{&g_509[0][2],&g_509[0][2],&g_232},{&g_29,&g_29,(void*)0},{&g_509[1][1],&g_509[0][2],&g_509[0][2]},{(void*)0,(void*)0,&g_509[0][2]},{&g_509[1][1],&l_501,&g_509[1][1]},{&g_29,(void*)0,&g_509[0][2]}};
        int8_t * const l_514[1] = {&g_59[3][5][0]};
        uint8_t l_523 = 0UL;
        struct S0 l_528 = {0x06C3CCBCL};
        uint64_t *l_531[1];
        uint64_t **l_530 = &l_531[0];
        int i, j;
        for (i = 0; i < 1; i++)
            l_531[i] = &l_414;
        for (g_95.f0 = 2; (g_95.f0 >= 0); g_95.f0 -= 1)
        { 
            return l_501;
        }
        g_509[3][5] = p_34;
        for (g_99.f1 = 0; (g_99.f1 <= 2); g_99.f1 += 1)
        { 
            int16_t l_515 = 0x0918L;
            int32_t l_516[3];
            int16_t l_522[2][7][6] = {{{(-1L),(-1L),(-10L),(-6L),(-10L),(-1L)},{0x8941L,(-1L),1L,(-10L),(-10L),0x46E9L},{0L,(-1L),9L,0x269CL,(-10L),0x62E3L},{(-1L),(-1L),(-10L),(-6L),(-10L),(-1L)},{0x8941L,(-1L),1L,(-10L),(-10L),0x46E9L},{0L,(-1L),9L,0x269CL,(-10L),0x62E3L},{(-1L),(-1L),(-10L),(-6L),(-10L),(-1L)}},{{0x8941L,(-1L),1L,(-10L),(-10L),0x46E9L},{0L,(-1L),9L,0x269CL,(-10L),0x62E3L},{(-1L),(-1L),(-10L),(-6L),(-10L),(-1L)},{0x8941L,(-1L),1L,(-10L),(-10L),0x46E9L},{0L,(-1L),9L,0x269CL,(-10L),0x62E3L},{(-1L),(-1L),(-10L),(-6L),(-10L),(-1L)},{0x8941L,(-1L),1L,(-10L),(-10L),0x46E9L}}};
            const int32_t *l_526 = &g_527;
            const int32_t **l_529 = &l_526;
            uint64_t ***l_534 = &g_532;
            int i, j, k;
            for (i = 0; i < 3; i++)
                l_516[i] = 0L;
            for (l_414 = 0; (l_414 <= 3); l_414 += 1)
            { 
                uint8_t *l_512[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                int32_t l_513 = 0L;
                int i;
                (*p_34) = ((l_513 = g_166[g_99.f1]) >= (l_514[0] == (void*)0));
            }
            ++l_523;
            (*l_529) = &g_527;
            (*p_34) = (l_530 != (((-1L) <= g_166[g_99.f1]) , ((*l_534) = g_532)));
            for (l_310 = 3; (l_310 >= 0); l_310 -= 1)
            { 
                int i, j;
                (*l_529) = &g_527;
                if (g_355[g_148][(g_148 + 1)])
                    continue;
                if ((**l_529))
                    break;
                return p_34;
            }
        }
        if ((*g_232))
            continue;
        (*g_232) = ((l_535 = l_535) , (0L && (g_355[1][1] && (safe_rshift_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u((safe_div_func_uint16_t_u_u(((*g_429) && (((((g_337 = g_337) , 4294967294UL) < ((safe_mul_func_int16_t_s_s(((*g_429) >= (**g_428)), 0L)) , g_150)) >= 0x771398337A31723CLL) , 65528UL)), l_256[1])), l_256[1])), l_535.f0)), l_520)))));
        for (l_457.f0 = 0; (l_457.f0 <= 2); l_457.f0 += 1)
        { 
            int32_t l_559[3];
            int64_t l_561 = 0xBFD9BED3464A58D5LL;
            int32_t l_564 = 8L;
            struct S0 l_570[5][4][7] = {{{{0x54096B5AL},{0x60119AC2L},{0xA2E19B98L},{0x776F9E77L},{0x776F9E77L},{0xA2E19B98L},{0x60119AC2L}},{{0xFE45AFF6L},{0x5131F781L},{-1L},{0xFE45AFF6L},{0L},{0L},{0xFE45AFF6L}},{{-1L},{0x60119AC2L},{-1L},{0x734DAC24L},{0x60119AC2L},{0L},{0L}},{{0L},{0xFE45AFF6L},{0L},{0xFE45AFF6L},{0L},{0L},{1L}}},{{{0x776F9E77L},{0L},{0x734DAC24L},{0x776F9E77L},{0x734DAC24L},{0L},{0x776F9E77L}},{{-1L},{1L},{0x5131F781L},{0L},{1L},{0L},{0x5131F781L}},{{0x776F9E77L},{0x776F9E77L},{0xA2E19B98L},{0x60119AC2L},{0x54096B5AL},{0xA2E19B98L},{0x54096B5AL}},{{0L},{0x5131F781L},{0x5131F781L},{0L},{0L},{-1L},{0L}}},{{{-1L},{0x54096B5AL},{0x734DAC24L},{-10L},{0x734DAC24L},{0x874D9ADDL},{0xA2E19B98L}},{{0L},{0x5131F781L},{1L},{-1L},{-1L},{1L},{0x5131F781L}},{{0x734DAC24L},{0xA2E19B98L},{0x874D9ADDL},{0x734DAC24L},{-10L},{-10L},{0x734DAC24L}},{{1L},{0x5131F781L},{1L},{0x9B0F8A24L},{0x5131F781L},{0L},{0L}}},{{{0L},{0x734DAC24L},{0x776F9E77L},{0x734DAC24L},{0L},{0x776F9E77L},{-1L}},{{-1L},{0L},{0x9B0F8A24L},{-1L},{0x9B0F8A24L},{0L},{-1L}},{{0x874D9ADDL},{-1L},{0xA2E19B98L},{-10L},{-1L},{-10L},{0xA2E19B98L}},{{-1L},{-1L},{1L},{0x5131F781L},{0L},{1L},{0L}}},{{{0L},{0xA2E19B98L},{0xA2E19B98L},{0L},{-10L},{0x874D9ADDL},{0L}},{{1L},{0L},{0x9B0F8A24L},{0x9B0F8A24L},{0L},{1L},{0L}},{{0x734DAC24L},{0L},{0x776F9E77L},{-1L},{-1L},{0x776F9E77L},{0L}},{{0L},{0L},{1L},{0L},{0x9B0F8A24L},{0x9B0F8A24L},{0L}}}};
            int32_t l_571 = 0x732C6AABL;
            int32_t l_572 = 9L;
            int32_t l_573[7][4] = {{1L,1L,1L,1L},{1L,1L,1L,1L},{1L,1L,1L,1L},{1L,1L,1L,1L},{1L,1L,1L,1L},{1L,1L,1L,1L},{1L,1L,1L,1L}};
            int16_t l_575 = 0L;
            uint8_t l_576 = 0x4FL;
            int i, j, k;
            for (i = 0; i < 3; i++)
                l_559[i] = (-1L);
            for (g_337.f1 = 0; (g_337.f1 <= 0); g_337.f1 += 1)
            { 
                union U3 l_548[2][5][4] = {{{{-8L},{-8L},{-8L},{0xE2L}},{{-8L},{-8L},{2L},{-8L}},{{1L},{0xE2L},{1L},{2L}},{{9L},{0xE2L},{-8L},{-8L}},{{0xE2L},{-8L},{-8L},{0xE2L}}},{{{1L},{-8L},{-8L},{2L}},{{0xE2L},{9L},{-8L},{9L}},{{9L},{-8L},{1L},{9L}},{{1L},{9L},{2L},{2L}},{{-8L},{-8L},{-8L},{0xE2L}}}};
                uint16_t *l_560 = (void*)0;
                int32_t l_562 = 8L;
                int32_t l_563 = 0xEDBBEB77L;
                struct S0 l_568 = {0xB44BBBFFL};
                union U2 l_569 = {0x0BA5EFD8L};
                int i, j, k;
                if ((((safe_add_func_uint8_t_u_u((l_548[1][0][3] , (safe_lshift_func_uint16_t_u_s((g_159[(g_337.f1 + 1)][(g_337.f1 + 1)][g_337.f1] || ((((safe_mod_func_int16_t_s_s((l_528 , (safe_div_func_int64_t_s_s((safe_div_func_uint16_t_u_u(((**g_428) = (safe_sub_func_int64_t_s_s(l_559[1], ((l_560 != ((*g_374) , (*g_428))) >= l_414)))), (-10L))), g_159[(g_337.f1 + 1)][(g_337.f1 + 1)][g_337.f1]))), g_159[(g_337.f1 + 1)][(g_337.f1 + 1)][g_337.f1])) <= l_559[0]) , 0xB2083721L) , g_283[0][6][1])), g_65[4]))), l_517)) >= g_159[(g_337.f1 + 1)][(g_337.f1 + 1)][g_337.f1]) & l_561))
                { 
                    (*g_67) = (*g_374);
                }
                else
                { 
                    uint16_t l_565[5][3] = {{0xCD4FL,0xCD4FL,0x3D3DL},{0xF7A1L,1UL,6UL},{3UL,0xCD4FL,3UL},{3UL,0xF7A1L,0xCD4FL},{0xF7A1L,3UL,3UL}};
                    int i, j;
                    l_565[3][2]++;
                    p_34 = &g_8;
                    (*g_67) = l_568;
                    p_34 = (l_569 , func_35(g_502, &g_3, p_34, p_34, l_568));
                    (*g_374) = l_570[4][3][3];
                }
                if (l_548[1][0][3].f0)
                    break;
                (*g_232) |= 0xFE4A7F53L;
            }
            l_576++;
            for (l_571 = 0; (l_571 <= 3); l_571 += 1)
            { 
                for (l_414 = 0; l_414 < 3; l_414 += 1)
                {
                    l_521[l_414] = 6L;
                }
            }
        }
    }
    (*l_597) = (safe_mod_func_int32_t_s_s(((*g_232) = ((((l_518 = ((!(safe_mul_func_uint8_t_u_u(l_518, l_261.f0))) < 0x930B4BA5L)) ^ (safe_mul_func_uint8_t_u_u((((((*g_429) = ((safe_mul_func_int16_t_s_s((safe_sub_func_int16_t_s_s(l_520, (((((-9L) & ((safe_sub_func_uint16_t_u_u(l_592, (safe_lshift_func_int8_t_s_s(1L, 0)))) , l_595)) == g_168) != 255UL) & 1UL))), l_261.f1)) < (*p_34))) == l_457.f0) , l_457.f0) & 9UL), g_174))) <= (*p_34)) || l_457.f0)), g_337.f1));
    return &g_8;
}



static int32_t * func_35(const union U1  p_36, int32_t * const  p_37, const int32_t * p_38, int32_t * p_39, struct S0  p_40)
{ 
    uint32_t l_115 = 0xAE3A9463L;
    int8_t ***l_144 = (void*)0;
    int32_t l_151 = (-6L);
    int32_t l_153 = 0xB3A25EAEL;
    int32_t l_154 = (-1L);
    int32_t l_156 = (-7L);
    int64_t l_157 = 1L;
    int32_t l_158 = 0x22D57251L;
    int32_t l_160 = 9L;
    int32_t l_169 = 1L;
    int32_t l_170 = 0x25BE5548L;
    int32_t l_171 = 1L;
    int32_t l_172 = 0x005EDC9CL;
    int32_t **l_237 = &g_232;
    int64_t *l_242 = &g_168;
    ++l_115;
    if (l_115)
        goto lbl_241;
lbl_241:
    for (g_92 = (-27); (g_92 == 40); g_92++)
    { 
        int8_t l_122[4][7][5] = {{{(-1L),0x24L,0x28L,0x1BL,4L},{(-1L),(-1L),0L,1L,1L},{0x9AL,0xCBL,0x9AL,(-8L),0xE2L},{0L,(-1L),(-1L),0L,0x2CL},{0x28L,0x24L,(-1L),8L,0x9AL},{0xB1L,(-1L),(-3L),(-1L),0xB1L},{0xF8L,0xCBL,0xE4L,0xCBL,0xF8L}},{{0xB9L,(-1L),1L,(-1L),(-10L)},{0x9AL,8L,(-1L),0x24L,0x28L},{0L,(-3L),0L,(-1L),(-10L)},{1L,0x24L,0xF8L,0x1BL,0xF8L},{(-10L),(-10L),0xB9L,0L,0xB1L},{1L,0x23L,0x9AL,0xA4L,0xE4L},{0L,0x2CL,0L,(-1L),(-1L)}},{{0x9AL,0x23L,1L,8L,4L},{0xB9L,(-10L),(-10L),0xB9L,0L},{0xF8L,0x24L,1L,(-1L),0L},{0L,(-3L),0L,(-3L),0L},{(-1L),8L,0x9AL,(-1L),0x61L},{1L,(-1L),0xB9L,0xB9L,(-1L)},{0xE4L,0xCBL,0xF8L,8L,0x61L}},{{(-3L),0xB9L,0L,(-1L),0L},{0x61L,(-8L),(-1L),0xA4L,0L},{(-3L),0xB1L,1L,0L,0L},{0xE4L,0x47L,0xE4L,0x1BL,4L},{1L,0xB1L,(-3L),(-1L),(-1L)},{(-1L),(-8L),0x61L,0x24L,0xE4L},{0L,0xB9L,(-3L),(-1L),0xB1L}}};
        int32_t l_162 = 0x39A9149AL;
        int32_t l_163 = 0L;
        int32_t l_173[4];
        union U3 **l_183 = &g_111[2];
        int32_t *l_210 = &l_151;
        struct S0 l_211 = {-8L};
        int32_t ***l_238[5][2][5] = {{{&l_237,(void*)0,(void*)0,(void*)0,&l_237},{&l_237,(void*)0,&l_237,&l_237,(void*)0}},{{&l_237,(void*)0,&l_237,&l_237,(void*)0},{(void*)0,(void*)0,&l_237,(void*)0,(void*)0}},{{(void*)0,&l_237,&l_237,(void*)0,&l_237},{(void*)0,(void*)0,&l_237,(void*)0,(void*)0}},{{(void*)0,(void*)0,&l_237,(void*)0,(void*)0},{(void*)0,&l_237,(void*)0,(void*)0,&l_237}},{{&l_237,(void*)0,(void*)0,(void*)0,&l_237},{&l_237,(void*)0,(void*)0,&l_237,(void*)0}}};
        int i, j, k;
        for (i = 0; i < 4; i++)
            l_173[i] = (-1L);
    }
    (*p_39) &= (g_167 == ((*l_242) ^= (**l_237)));
    return p_39;
}



static int16_t  func_41(int32_t * p_42, int32_t * p_43, int16_t  p_44)
{ 
    const union U1 l_57 = {0x632CAC2457718DA9LL};
    int8_t *l_58 = &g_59[5][5][0];
    uint16_t *l_62 = &g_63;
    int8_t *l_64 = &g_65[0];
    int32_t l_66 = 0x9AB6322AL;
    struct S0 l_103[3] = {{0xC6110BDBL},{0xC6110BDBL},{0xC6110BDBL}};
    union U3 ***l_112 = &g_110;
    int i;
    if ((l_66 &= ((safe_lshift_func_int8_t_s_s((safe_mul_func_int16_t_s_s(((p_44 || ((safe_lshift_func_int8_t_s_u(((*l_58) = (safe_rshift_func_int16_t_s_s((safe_rshift_func_uint8_t_u_s((&g_8 == (void*)0), g_8)), (l_57 , g_3)))), 5)) | (((*l_64) = ((safe_lshift_func_int16_t_s_u((((*l_62) = ((g_3 >= 0x69L) , g_3)) ^ 0x4DCFL), p_44)) , l_57.f0)) <= g_9))) != p_44), l_57.f0)), l_57.f0)) <= 0xCCL)))
    { 
        struct S0 *l_69 = &g_68;
        int16_t l_74 = 0x7B60L;
        uint8_t l_90 = 251UL;
        uint32_t *l_91 = &g_92;
        int32_t l_93 = 0L;
        l_69 = g_67;
        l_93 ^= (safe_div_func_uint8_t_u_u(((safe_div_func_uint32_t_u_u(l_74, 0xBE3E2CA5L)) > ((safe_mod_func_uint64_t_u_u(((safe_mul_func_uint16_t_u_u((safe_div_func_int16_t_s_s((safe_add_func_uint32_t_u_u(((*l_91) = (safe_div_func_int8_t_s_s((((l_66 ^= ((1UL && g_3) <= ((l_74 & (safe_lshift_func_uint8_t_u_u(251UL, 7))) , ((+((safe_rshift_func_uint8_t_u_s((g_63 || g_59[2][3][0]), p_44)) || 0xB10CD78DC7DAD055LL)) , p_44)))) > p_44) & l_90), 0xD8L))), g_63)), p_44)), l_57.f1)) >= 0x51L), l_90)) | l_90)), p_44));
        for (g_68.f0 = 0; (g_68.f0 <= 5); g_68.f0 += 1)
        { 
            union U3 *l_94 = &g_95;
            union U3 **l_96 = &l_94;
            int i;
            (*l_96) = l_94;
            return g_65[g_68.f0];
        }
    }
    else
    { 
        const struct S0 l_97 = {0L};
        union U2 *l_98 = &g_99;
        union U2 **l_100 = &l_98;
        union U2 *l_102[5] = {&g_99,&g_99,&g_99,&g_99,&g_99};
        union U2 **l_101 = &l_102[2];
        int8_t * const l_106 = &g_107;
        int8_t * const *l_105 = &l_106;
        int8_t * const **l_104 = &l_105;
        int i;
        (*g_67) = l_97;
        (*l_101) = ((*l_100) = l_98);
        (*g_67) = l_103[2];
        g_108 = ((*l_104) = (void*)0);
    }
    (*l_112) = g_110;
    return g_65[4];
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_8, "g_8", print_hash_value);
    transparent_crc(g_9, "g_9", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_59[i][j][k], "g_59[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_63, "g_63", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_65[i], "g_65[i]", print_hash_value);

    }
    transparent_crc(g_68.f0, "g_68.f0", print_hash_value);
    transparent_crc(g_92, "g_92", print_hash_value);
    transparent_crc(g_95.f0, "g_95.f0", print_hash_value);
    transparent_crc(g_99.f0, "g_99.f0", print_hash_value);
    transparent_crc(g_107, "g_107", print_hash_value);
    transparent_crc(g_148, "g_148", print_hash_value);
    transparent_crc(g_150, "g_150", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_159[i][j][k], "g_159[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_161, "g_161", print_hash_value);
    transparent_crc(g_165, "g_165", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_166[i], "g_166[i]", print_hash_value);

    }
    transparent_crc(g_167, "g_167", print_hash_value);
    transparent_crc(g_168, "g_168", print_hash_value);
    transparent_crc(g_174, "g_174", print_hash_value);
    transparent_crc(g_194, "g_194", print_hash_value);
    transparent_crc(g_226, "g_226", print_hash_value);
    transparent_crc(g_249.f0.f0, "g_249.f0.f0", print_hash_value);
    transparent_crc(g_249.f1, "g_249.f1", print_hash_value);
    transparent_crc(g_249.f2, "g_249.f2", print_hash_value);
    transparent_crc(g_249.f3, "g_249.f3", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_254[i], "g_254[i]", print_hash_value);

    }
    transparent_crc(g_282, "g_282", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(g_283[i][j][k], "g_283[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_309, "g_309", print_hash_value);
    transparent_crc(g_311, "g_311", print_hash_value);
    transparent_crc(g_337.f2, "g_337.f2", print_hash_value);
    transparent_crc(g_345, "g_345", print_hash_value);
    transparent_crc(g_354, "g_354", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_355[i][j], "g_355[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_356, "g_356", print_hash_value);
    transparent_crc(g_465, "g_465", print_hash_value);
    transparent_crc(g_473, "g_473", print_hash_value);
    transparent_crc(g_475, "g_475", print_hash_value);
    transparent_crc(g_479, "g_479", print_hash_value);
    transparent_crc(g_493.f0, "g_493.f0", print_hash_value);
    transparent_crc(g_502.f0, "g_502.f0", print_hash_value);
    transparent_crc(g_502.f1, "g_502.f1", print_hash_value);
    transparent_crc(g_527, "g_527", print_hash_value);
    transparent_crc(g_638, "g_638", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_1169[i][j][k].f0.f0, "g_1169[i][j][k].f0.f0", print_hash_value);
                transparent_crc(g_1169[i][j][k].f1, "g_1169[i][j][k].f1", print_hash_value);
                transparent_crc(g_1169[i][j][k].f2, "g_1169[i][j][k].f2", print_hash_value);
                transparent_crc(g_1169[i][j][k].f3, "g_1169[i][j][k].f3", print_hash_value);

            }
        }
    }
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_1174[i][j], "g_1174[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(g_1189[i][j], "g_1189[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_1299, "g_1299", print_hash_value);
    transparent_crc(g_1643, "g_1643", print_hash_value);
    transparent_crc(g_1695, "g_1695", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_1696[i], "g_1696[i]", print_hash_value);

    }
    transparent_crc(g_1798, "g_1798", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
