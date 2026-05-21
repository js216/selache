// SPDX-License-Identifier: MIT
// cctest_csmith_6edc49e0.c --- cctest case csmith_6edc49e0 (csmith seed 1859930592)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xf93b3dd2 */

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

// Options:   -s 1859930592 -o /tmp/csmith_gen_h6ih58zm/csmith.c --concise --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   int16_t  f0;
};
#pragma pack(pop)

union U1 {
   int16_t  f0;
   int64_t  f1;
   int32_t  f2;
   uint16_t  f3;
   uint64_t  f4;
};


static int32_t g_20 = 4L;
static uint16_t g_47 = 0xCFF2L;
static int32_t g_53 = 1L;
static int64_t g_54[3][5] = {{(-1L),(-1L),(-1L),(-1L),(-1L)},{0x5FBC01D4C3F121F2LL,0x5FBC01D4C3F121F2LL,0x5FBC01D4C3F121F2LL,0x5FBC01D4C3F121F2LL,0x5FBC01D4C3F121F2LL},{(-1L),(-1L),(-1L),(-1L),(-1L)}};
static uint32_t g_55 = 4294967290UL;
static uint8_t g_72 = 0x89L;
static int32_t *g_74 = (void*)0;
static int32_t **g_73 = &g_74;
static struct S0 g_76 = {-10L};
static int8_t g_83 = 1L;
static union U1 g_97[7] = {{-1L},{-1L},{-1L},{-1L},{-1L},{-1L},{-1L}};
static union U1 *g_102 = &g_97[2];
static uint64_t g_112[1] = {1UL};
static uint32_t g_116 = 0xCADD72F7L;
static uint8_t g_128[5][4][5] = {{{252UL,255UL,252UL,255UL,252UL},{0x80L,0x80L,0x80L,0x80L,0x80L},{252UL,255UL,252UL,255UL,252UL},{0x80L,0x80L,0x80L,0x80L,0x80L}},{{252UL,255UL,252UL,255UL,252UL},{0x80L,0x80L,0x80L,0x80L,0x80L},{252UL,255UL,252UL,255UL,252UL},{0x80L,0x80L,0x80L,0x80L,0x80L}},{{252UL,255UL,252UL,255UL,252UL},{0x80L,0x80L,0x80L,0x80L,0x80L},{252UL,255UL,252UL,255UL,252UL},{0x80L,0x80L,0x80L,0x80L,0x80L}},{{252UL,255UL,252UL,255UL,252UL},{0x80L,0x80L,0x80L,0x80L,0x80L},{252UL,255UL,252UL,255UL,252UL},{0x80L,0x80L,0x80L,0x80L,0x80L}},{{252UL,255UL,252UL,255UL,252UL},{0x80L,0x80L,0x80L,0x80L,0x80L},{252UL,255UL,252UL,255UL,252UL},{0x80L,0x80L,0x80L,0x80L,0x80L}}};
static struct S0 *g_154 = &g_76;
static int8_t g_159[6] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
static int16_t g_160 = 0xD68CL;
static uint8_t g_163 = 250UL;
static const uint8_t g_182 = 0x2CL;
static int8_t *g_226 = &g_159[3];
static int32_t g_238 = 7L;
static int16_t g_241 = 1L;
static int8_t g_243 = 0x3FL;
static int16_t g_244 = 0x5A1DL;
static uint32_t g_246 = 18446744073709551608UL;
static uint64_t g_252 = 0x0FE33B61AE5F7052LL;
static int8_t g_284 = 1L;
static int16_t g_285 = (-2L);
static uint32_t g_288[2][5] = {{0x8BD1D58CL,0x8BD1D58CL,18446744073709551606UL,0xBFD860E4L,18446744073709551606UL},{0x8BD1D58CL,0x8BD1D58CL,18446744073709551606UL,0xBFD860E4L,18446744073709551606UL}};
static int64_t g_293 = 0xD1871B915A60A70DLL;
static int32_t g_295 = 0x2A8841FFL;
static uint16_t g_296 = 65527UL;
static uint32_t g_311 = 18446744073709551609UL;
static int8_t g_324 = 0xBEL;
static int16_t g_325 = 0x402CL;
static uint16_t g_326 = 65529UL;
static uint32_t g_366 = 7UL;
static int32_t g_386 = 0x7367FBF1L;
static uint32_t g_387[6][2][7] = {{{0UL,4294967295UL,0x350084BEL,4294967293UL,0xB809C7C7L,5UL,5UL},{0UL,0xD7FA70DFL,0x42029209L,0xD7FA70DFL,0UL,5UL,8UL}},{{4294967293UL,0x3E55AA21L,4294967292UL,0xD7FA70DFL,0xB809C7C7L,0x1A4851CBL,4294967294UL},{0xB809C7C7L,0x3E55AA21L,0x42029209L,4294967293UL,0xE194D7DDL,8UL,4294967294UL}},{{4294967293UL,0xD7FA70DFL,0x350084BEL,0xF99BF465L,0xE194D7DDL,0x1A4851CBL,8UL},{0UL,4294967295UL,0x350084BEL,4294967293UL,0xB809C7C7L,5UL,5UL}},{{0UL,0xD7FA70DFL,0x42029209L,0xD7FA70DFL,0UL,5UL,8UL},{4294967293UL,0x3E55AA21L,4294967292UL,0xD7FA70DFL,0xB809C7C7L,0x1A4851CBL,4294967294UL}},{{0xB809C7C7L,0x3E55AA21L,0x42029209L,4294967293UL,0xE194D7DDL,8UL,4294967294UL},{4294967293UL,0xD7FA70DFL,0x350084BEL,0xF99BF465L,0xE194D7DDL,0x1A4851CBL,8UL}},{{0UL,4294967295UL,0x350084BEL,4294967293UL,0xB809C7C7L,5UL,5UL},{0UL,0xD7FA70DFL,0x42029209L,0xD7FA70DFL,0UL,5UL,8UL}}};
static uint64_t *g_401 = &g_112[0];
static uint64_t **g_400 = &g_401;
static uint64_t ***g_399 = &g_400;
static int32_t g_412 = 0L;
static union U1 **g_453 = &g_102;
static union U1 ***g_452 = &g_453;
static union U1 ****g_451 = &g_452;
static uint32_t g_526[7][5] = {{0xF9841DA2L,0xF9841DA2L,7UL,0xF9841DA2L,0xF9841DA2L},{2UL,0xF9841DA2L,2UL,2UL,0xF9841DA2L},{0xF9841DA2L,2UL,2UL,0xF9841DA2L,7UL},{2UL,2UL,0xF9841DA2L,2UL,2UL},{7UL,2UL,7UL,7UL,2UL},{2UL,7UL,7UL,2UL,7UL},{2UL,2UL,0xF9841DA2L,2UL,2UL}};
static uint8_t g_531 = 0x0AL;
static int64_t *g_623 = &g_293;
static uint8_t g_632 = 0x5BL;
static int16_t g_666[6] = {1L,(-1L),1L,1L,(-1L),1L};
static int64_t g_684 = (-6L);
static int16_t g_685 = 4L;
static uint16_t *g_693 = &g_326;
static uint16_t **g_692 = &g_693;
static int64_t *g_695 = &g_54[2][3];
static int64_t *g_696[2] = {&g_684,&g_684};
static int8_t g_709 = 0xB3L;
static int32_t g_710[1] = {0xA4711444L};
static uint64_t g_712[3] = {4UL,4UL,4UL};
static const int32_t *g_727 = &g_53;
static const int32_t **g_726 = &g_727;
static uint32_t g_764 = 0xD25E9CE7L;
static int32_t g_786 = 1L;
static int32_t g_788[1][7][2] = {{{0xC7BF0724L,0x1D7C1D2EL},{0x1D7C1D2EL,0xC7BF0724L},{0x1D7C1D2EL,0x1D7C1D2EL},{0xC7BF0724L,0x1D7C1D2EL},{0x1D7C1D2EL,0xC7BF0724L},{0x1D7C1D2EL,0x1D7C1D2EL},{0xC7BF0724L,0x1D7C1D2EL}}};
static int32_t g_844 = (-1L);
static struct S0 ***g_854 = (void*)0;
static int32_t *g_874 = &g_788[0][1][1];
static uint8_t g_902 = 0x6BL;
static int32_t *g_921 = &g_53;
static int32_t *g_933 = &g_238;
static int32_t **g_932 = &g_933;
static int32_t ****g_1025 = (void*)0;
static const uint64_t g_1035 = 0UL;
static int32_t ***g_1042 = &g_73;
static int32_t ****g_1041[1] = {&g_1042};
static const union U1 *g_1079 = &g_97[1];
static const union U1 **g_1078 = &g_1079;
static const union U1 ***g_1077[6][7][5] = {{{&g_1078,&g_1078,&g_1078,(void*)0,&g_1078},{&g_1078,&g_1078,(void*)0,(void*)0,&g_1078},{(void*)0,&g_1078,&g_1078,(void*)0,&g_1078},{&g_1078,&g_1078,(void*)0,&g_1078,&g_1078},{&g_1078,&g_1078,&g_1078,(void*)0,&g_1078},{&g_1078,&g_1078,&g_1078,(void*)0,&g_1078},{(void*)0,&g_1078,&g_1078,(void*)0,&g_1078}},{{&g_1078,&g_1078,&g_1078,&g_1078,&g_1078},{&g_1078,&g_1078,&g_1078,(void*)0,&g_1078},{&g_1078,&g_1078,(void*)0,(void*)0,&g_1078},{(void*)0,&g_1078,&g_1078,(void*)0,&g_1078},{&g_1078,&g_1078,(void*)0,&g_1078,&g_1078},{&g_1078,&g_1078,&g_1078,(void*)0,&g_1078},{&g_1078,&g_1078,&g_1078,(void*)0,&g_1078}},{{(void*)0,&g_1078,&g_1078,(void*)0,&g_1078},{&g_1078,&g_1078,&g_1078,&g_1078,&g_1078},{&g_1078,&g_1078,&g_1078,(void*)0,&g_1078},{&g_1078,&g_1078,(void*)0,(void*)0,&g_1078},{(void*)0,&g_1078,&g_1078,(void*)0,&g_1078},{&g_1078,&g_1078,(void*)0,&g_1078,&g_1078},{&g_1078,&g_1078,&g_1078,(void*)0,&g_1078}},{{&g_1078,&g_1078,&g_1078,(void*)0,&g_1078},{(void*)0,&g_1078,&g_1078,(void*)0,&g_1078},{&g_1078,&g_1078,&g_1078,&g_1078,&g_1078},{&g_1078,&g_1078,&g_1078,(void*)0,&g_1078},{&g_1078,&g_1078,(void*)0,(void*)0,&g_1078},{(void*)0,&g_1078,&g_1078,(void*)0,&g_1078},{&g_1078,&g_1078,(void*)0,&g_1078,&g_1078}},{{&g_1078,&g_1078,&g_1078,&g_1078,&g_1078},{&g_1078,&g_1078,(void*)0,&g_1078,(void*)0},{&g_1078,&g_1078,&g_1078,&g_1078,&g_1078},{(void*)0,&g_1078,(void*)0,&g_1078,&g_1078},{&g_1078,&g_1078,&g_1078,&g_1078,&g_1078},{(void*)0,&g_1078,&g_1078,&g_1078,&g_1078},{&g_1078,(void*)0,&g_1078,&g_1078,&g_1078}},{{&g_1078,&g_1078,&g_1078,&g_1078,(void*)0},{&g_1078,(void*)0,&g_1078,&g_1078,&g_1078},{&g_1078,&g_1078,(void*)0,&g_1078,(void*)0},{&g_1078,&g_1078,&g_1078,&g_1078,&g_1078},{(void*)0,&g_1078,(void*)0,&g_1078,&g_1078},{&g_1078,&g_1078,&g_1078,&g_1078,&g_1078},{(void*)0,&g_1078,&g_1078,&g_1078,&g_1078}}};
static int32_t ***g_1096 = &g_932;
static int32_t **** const g_1095 = &g_1096;
static int32_t **** const *g_1094 = &g_1095;
static uint64_t g_1134 = 4UL;
static int16_t g_1156 = 0xC95AL;
static uint8_t g_1162 = 2UL;
static int32_t * const *g_1196[7][1] = {{&g_74},{&g_74},{&g_74},{&g_74},{&g_74},{&g_74},{&g_74}};
static int32_t * const **g_1195 = &g_1196[1][0];
static uint64_t g_1214[3] = {0x279B95536B5959F4LL,0x279B95536B5959F4LL,0x279B95536B5959F4LL};
static uint16_t g_1267 = 1UL;
static uint64_t g_1333[7][1] = {{0xBD6CF1060CC91F8CLL},{0xBD6CF1060CC91F8CLL},{1UL},{0xBD6CF1060CC91F8CLL},{0xBD6CF1060CC91F8CLL},{1UL},{0xBD6CF1060CC91F8CLL}};
static int64_t g_1345 = 0xA58B6B32076B4C6ALL;
static struct S0 **g_1371 = (void*)0;
static struct S0 ***g_1370[7][5] = {{&g_1371,&g_1371,&g_1371,&g_1371,&g_1371},{&g_1371,(void*)0,&g_1371,(void*)0,&g_1371},{&g_1371,&g_1371,&g_1371,&g_1371,&g_1371},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_1371,&g_1371,&g_1371,&g_1371,&g_1371},{&g_1371,(void*)0,&g_1371,(void*)0,&g_1371},{&g_1371,&g_1371,&g_1371,&g_1371,&g_1371}};
static union U1 *****g_1490[3][3][2] = {{{&g_451,&g_451},{&g_451,&g_451},{&g_451,&g_451}},{{&g_451,&g_451},{&g_451,&g_451},{&g_451,&g_451}},{{&g_451,&g_451},{&g_451,&g_451},{&g_451,&g_451}}};
static uint32_t g_1505 = 18446744073709551607UL;
static int32_t g_1527 = 0xF33D13A3L;
static const int32_t g_1669 = 0x59113357L;
static int8_t g_1706 = (-1L);
static uint16_t ****g_1714[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
static union U1 * const *g_1751 = (void*)0;
static int16_t g_1910 = (-1L);
static union U1 ** const g_1943 = (void*)0;
static union U1 ** const *g_1942 = &g_1943;
static union U1 ** const **g_1941[6][5][6] = {{{&g_1942,&g_1942,&g_1942,&g_1942,&g_1942,&g_1942},{&g_1942,&g_1942,&g_1942,&g_1942,&g_1942,&g_1942},{&g_1942,&g_1942,&g_1942,&g_1942,&g_1942,&g_1942},{(void*)0,&g_1942,&g_1942,&g_1942,&g_1942,&g_1942},{&g_1942,&g_1942,&g_1942,&g_1942,&g_1942,&g_1942}},{{&g_1942,&g_1942,&g_1942,&g_1942,&g_1942,&g_1942},{&g_1942,&g_1942,&g_1942,&g_1942,(void*)0,&g_1942},{(void*)0,&g_1942,&g_1942,&g_1942,(void*)0,&g_1942},{&g_1942,&g_1942,&g_1942,&g_1942,&g_1942,&g_1942},{(void*)0,&g_1942,&g_1942,&g_1942,&g_1942,&g_1942}},{{&g_1942,&g_1942,&g_1942,&g_1942,(void*)0,&g_1942},{&g_1942,&g_1942,&g_1942,(void*)0,&g_1942,&g_1942},{&g_1942,(void*)0,&g_1942,&g_1942,&g_1942,&g_1942},{&g_1942,(void*)0,&g_1942,&g_1942,&g_1942,&g_1942},{(void*)0,(void*)0,&g_1942,&g_1942,&g_1942,&g_1942}},{{&g_1942,(void*)0,&g_1942,&g_1942,&g_1942,&g_1942},{&g_1942,&g_1942,&g_1942,&g_1942,(void*)0,&g_1942},{&g_1942,&g_1942,&g_1942,(void*)0,&g_1942,&g_1942},{(void*)0,&g_1942,&g_1942,(void*)0,&g_1942,&g_1942},{&g_1942,&g_1942,&g_1942,&g_1942,&g_1942,&g_1942}},{{&g_1942,&g_1942,&g_1942,&g_1942,&g_1942,&g_1942},{&g_1942,&g_1942,&g_1942,&g_1942,&g_1942,&g_1942},{(void*)0,&g_1942,&g_1942,&g_1942,&g_1942,&g_1942},{&g_1942,&g_1942,&g_1942,&g_1942,(void*)0,&g_1942},{&g_1942,&g_1942,&g_1942,(void*)0,&g_1942,&g_1942}},{{&g_1942,(void*)0,&g_1942,&g_1942,&g_1942,&g_1942},{&g_1942,(void*)0,&g_1942,&g_1942,&g_1942,&g_1942},{(void*)0,(void*)0,&g_1942,&g_1942,&g_1942,&g_1942},{&g_1942,(void*)0,&g_1942,&g_1942,&g_1942,&g_1942},{&g_1942,&g_1942,&g_1942,&g_1942,(void*)0,&g_1942}}};
static union U1 ** const ***g_1940 = &g_1941[5][0][4];
static int64_t g_2116 = 0L;
static int32_t g_2172 = 0x74718DD1L;
static struct S0 ****g_2198 = &g_854;
static struct S0 **** const *g_2197[4][7] = {{&g_2198,&g_2198,&g_2198,&g_2198,&g_2198,&g_2198,&g_2198},{&g_2198,&g_2198,&g_2198,&g_2198,&g_2198,&g_2198,&g_2198},{&g_2198,&g_2198,(void*)0,&g_2198,&g_2198,&g_2198,&g_2198},{(void*)0,&g_2198,&g_2198,&g_2198,(void*)0,&g_2198,&g_2198}};
static int32_t *g_2250 = &g_53;
static int64_t g_2261 = 0xDC102ECC6C33D66ELL;
static int8_t **g_2323[2][6][6] = {{{&g_226,&g_226,&g_226,(void*)0,(void*)0,&g_226},{&g_226,&g_226,(void*)0,&g_226,&g_226,&g_226},{&g_226,(void*)0,(void*)0,&g_226,&g_226,&g_226},{(void*)0,&g_226,&g_226,&g_226,&g_226,&g_226},{&g_226,&g_226,&g_226,&g_226,&g_226,&g_226},{&g_226,&g_226,&g_226,&g_226,&g_226,&g_226}},{{(void*)0,&g_226,&g_226,&g_226,&g_226,&g_226},{(void*)0,&g_226,&g_226,&g_226,&g_226,(void*)0},{&g_226,&g_226,&g_226,&g_226,&g_226,&g_226},{(void*)0,&g_226,&g_226,(void*)0,&g_226,(void*)0},{&g_226,&g_226,&g_226,(void*)0,(void*)0,&g_226},{(void*)0,(void*)0,&g_226,&g_226,(void*)0,&g_226}}};
static int8_t ***g_2322[7][4] = {{&g_2323[0][3][2],&g_2323[0][0][4],&g_2323[0][3][2],&g_2323[0][0][4]},{&g_2323[0][3][2],&g_2323[0][0][4],&g_2323[0][3][2],&g_2323[0][0][4]},{&g_2323[0][3][2],&g_2323[0][0][4],&g_2323[0][3][2],&g_2323[0][0][4]},{&g_2323[0][3][2],&g_2323[0][0][4],&g_2323[0][3][2],&g_2323[0][0][4]},{&g_2323[0][3][2],&g_2323[0][0][4],&g_2323[0][3][2],&g_2323[0][0][4]},{&g_2323[0][3][2],&g_2323[0][0][4],&g_2323[0][3][2],&g_2323[0][0][4]},{&g_2323[0][3][2],&g_2323[0][0][4],&g_2323[0][3][2],&g_2323[0][0][4]}};
static uint64_t g_2338 = 0xEEF273827E587EE6LL;
static uint16_t *****g_2340 = &g_1714[1];
static const int16_t *g_2419 = &g_1910;
static const int16_t ** const g_2418 = &g_2419;
static int32_t g_2538 = 1L;
static int64_t g_2572[1][4][2] = {{{(-1L),(-1L)},{(-1L),(-1L)},{(-1L),(-1L)},{(-1L),(-1L)}}};
static int32_t *g_2669 = &g_53;
static uint64_t g_2749 = 0x5AEFE7107843D38DLL;
static const uint16_t g_2811 = 65535UL;
static uint32_t g_2878 = 18446744073709551610UL;
static int32_t g_2933 = (-9L);
static int8_t g_2956 = 0x95L;
static uint8_t g_2965 = 0x1AL;
static uint8_t *g_2979 = &g_902;
static uint8_t **g_2978 = &g_2979;
static const struct S0 ** const **g_3001 = (void*)0;
static const struct S0 ** const ***g_3000 = &g_3001;
static int16_t ***g_3007 = (void*)0;
static int16_t ****g_3006 = &g_3007;
static int32_t g_3059[3] = {0L,0L,0L};



static uint16_t  func_1(void);
static int32_t * func_2(int32_t * p_3, int32_t * const  p_4, int64_t  p_5, union U1  p_6, int32_t * p_7);
static int32_t * func_8(int32_t * p_9, int32_t  p_10, uint16_t  p_11, int64_t  p_12);
static int32_t * func_13(uint64_t  p_14, int32_t * p_15);
static int32_t * func_23(uint32_t  p_24, int32_t * p_25, int32_t  p_26, uint64_t  p_27);
static uint64_t  func_35(int32_t  p_36);
static int32_t  func_59(const uint32_t  p_60, uint16_t  p_61, struct S0  p_62);
static int64_t  func_65(uint16_t * p_66, int32_t * p_67, uint8_t  p_68, int32_t ** p_69);




static uint16_t  func_1(void)
{ 
    uint8_t l_16 = 0x3AL;
    int32_t *l_17 = (void*)0;
    uint8_t l_2258 = 255UL;
    int8_t *l_2259[6];
    uint32_t l_2260 = 0x09F01749L;
    uint32_t l_2640 = 0UL;
    union U1 l_2641 = {2L};
    int32_t *l_2642 = &g_295;
    int i;
    for (i = 0; i < 6; i++)
        l_2259[i] = &g_1706;
    (*g_73) = func_2(func_8(func_13(l_16, l_17), (*g_933), ((l_2260 &= (((((safe_rshift_func_int8_t_s_u((((((l_16 && (safe_unary_minus_func_int32_t_s(l_16))) , (safe_rshift_func_uint16_t_u_u(((safe_div_func_uint64_t_u_u(0x8E5BAA4BE0CEA9EBLL, 0x727E44A44CD8B6FALL)) && l_16), 3))) | l_16) > l_16) >= g_97[3].f0), g_387[2][1][6])) && l_2258) || 0xE869BB70L) & (-1L)) , 9L)) ^ 0L), l_2258), l_17, l_2640, l_2641, l_2642);
    return (*g_693);
}



static int32_t * func_2(int32_t * p_3, int32_t * const  p_4, int64_t  p_5, union U1  p_6, int32_t * p_7)
{ 
    int32_t l_2643 = 0L;
    struct S0 l_2650 = {0x158CL};
    uint32_t l_2658 = 0xC5A63EBDL;
    int32_t *l_2659 = &g_788[0][6][0];
    int32_t ***l_2666 = &g_73;
    uint64_t ***l_2710[6] = {&g_400,&g_400,&g_400,&g_400,&g_400,&g_400};
    uint16_t ***l_2715 = &g_692;
    const struct S0 *l_2734 = &g_76;
    int32_t l_2768 = 0x730E5EC8L;
    const uint64_t l_2795 = 1UL;
    uint8_t l_2831 = 0x12L;
    uint32_t l_2832 = 0x5E24A36AL;
    int8_t l_2859 = 3L;
    int32_t l_2909 = 0L;
    int64_t l_2926 = 5L;
    int32_t l_2928 = 1L;
    int32_t l_2929 = 0xB1218080L;
    int16_t l_2931 = (-1L);
    int32_t l_2932 = 5L;
    int32_t l_2947 = (-4L);
    int32_t l_2958 = (-3L);
    int32_t l_2959 = 0L;
    int32_t l_2960 = (-4L);
    int32_t l_2961 = 1L;
    int32_t l_2962[7][4][4] = {{{0L,0xE04B089BL,0L,0L},{(-8L),0xD9AFA0C1L,0L,(-8L)},{0L,(-5L),0x432C98A0L,6L},{(-4L),0x15AF2CDFL,(-3L),(-1L)}},{{(-3L),(-1L),0xB244D2DAL,(-4L)},{0xD9AFA0C1L,(-7L),1L,6L},{0xD487B0A7L,0x5BDE6DCCL,(-4L),0L},{0xE04B089BL,0xD9AFA0C1L,0x3BB4ECACL,0x3BB4ECACL}},{{0L,0L,0xDE6B25B5L,0L},{0xD487B0A7L,0x3BB4ECACL,0xE04B089BL,(-5L)},{0L,(-4L),0xB244D2DAL,0xE04B089BL},{6L,(-4L),0L,(-5L)}},{{(-4L),0x3BB4ECACL,0xCDAFDDBDL,0L},{1L,0L,0L,0x3BB4ECACL},{0L,0xD9AFA0C1L,0L,0L},{0L,0x5BDE6DCCL,0xCDAFDDBDL,6L}},{{5L,(-7L),(-3L),(-4L)},{6L,(-1L),0xB2C9AB1BL,(-1L)},{0xD9AFA0C1L,0x15AF2CDFL,0xE04B089BL,6L},{0x0F1795CBL,(-5L),(-4L),(-8L)}},{{0L,0xD9AFA0C1L,0xDF3135D2L,0L},{0L,0xE04B089BL,(-4L),0L},{0x0F1795CBL,0L,0xE04B089BL,0x5BDE6DCCL},{0xD9AFA0C1L,(-4L),0xB2C9AB1BL,0L}},{{6L,5L,(-3L),(-5L)},{5L,0L,0xCDAFDDBDL,1L},{0x5BDE6DCCL,(-4L),0L,0L},{0xE04B089BL,1L,1L,0xE04B089BL}}};
    int64_t l_2963 = 0x4DA5624768A15E4CLL;
    int8_t l_2964[7] = {(-4L),0x8FL,(-4L),(-4L),0x8FL,(-4L),(-4L)};
    uint8_t ** const l_2977 = (void*)0;
    struct S0 **l_2996[6][3][6] = {{{&g_154,&g_154,&g_154,&g_154,&g_154,&g_154},{&g_154,&g_154,&g_154,(void*)0,&g_154,(void*)0},{&g_154,&g_154,&g_154,&g_154,&g_154,&g_154}},{{&g_154,&g_154,&g_154,&g_154,&g_154,&g_154},{&g_154,&g_154,&g_154,&g_154,&g_154,&g_154},{&g_154,&g_154,&g_154,&g_154,&g_154,&g_154}},{{&g_154,&g_154,&g_154,(void*)0,&g_154,&g_154},{&g_154,(void*)0,&g_154,&g_154,(void*)0,&g_154},{&g_154,(void*)0,&g_154,&g_154,&g_154,&g_154}},{{&g_154,&g_154,&g_154,&g_154,&g_154,(void*)0},{&g_154,&g_154,&g_154,&g_154,&g_154,&g_154},{&g_154,&g_154,&g_154,&g_154,&g_154,&g_154}},{{&g_154,&g_154,&g_154,(void*)0,&g_154,(void*)0},{&g_154,&g_154,&g_154,&g_154,&g_154,&g_154},{&g_154,&g_154,&g_154,&g_154,&g_154,&g_154}},{{&g_154,&g_154,&g_154,&g_154,&g_154,&g_154},{&g_154,&g_154,&g_154,&g_154,&g_154,&g_154},{&g_154,&g_154,&g_154,(void*)0,&g_154,&g_154}}};
    struct S0 ** const *l_2999[4] = {&g_1371,&g_1371,&g_1371,&g_1371};
    struct S0 ** const **l_2998 = &l_2999[2];
    struct S0 ** const ***l_2997 = &l_2998;
    struct S0 **l_3003 = (void*)0;
    struct S0 **l_3004[3];
    int32_t l_3058[7] = {6L,6L,6L,6L,6L,6L,6L};
    uint32_t *l_3090 = &g_387[2][1][4];
    uint32_t *l_3091 = &g_55;
    int16_t *l_3094 = &g_1156;
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_3004[i] = &g_154;
    if (((*g_2419) < (*g_693)))
    { 
lbl_2647:
        (*p_7) = l_2643;
    }
    else
    { 
        uint16_t l_2644 = 65535UL;
        struct S0 **l_2665 = &g_154;
        int32_t *l_2668 = (void*)0;
        const uint64_t *l_2713[4];
        const uint64_t **l_2712 = &l_2713[1];
        const uint64_t ***l_2711 = &l_2712;
        int32_t l_2751 = 6L;
        int32_t l_2758 = 0x3D3B8DD7L;
        int32_t l_2763 = 0x58B7AB02L;
        int32_t l_2764 = 0xE9B3ADBFL;
        int32_t l_2765[3];
        int32_t l_2769 = 0x249556DFL;
        uint64_t l_2770 = 0x74EFF4946598BCBCLL;
        int i;
        for (i = 0; i < 4; i++)
            l_2713[i] = &g_1214[2];
        for (i = 0; i < 3; i++)
            l_2765[i] = (-5L);
        for (g_1156 = 2; (g_1156 <= 6); g_1156 += 1)
        { 
            ++l_2644;
        }
        for (p_6.f0 = 4; (p_6.f0 >= 1); p_6.f0 -= 1)
        { 
            int32_t *****l_2657 = &g_1025;
            const int32_t l_2689 = (-2L);
            int8_t l_2699 = 1L;
            int32_t l_2762 = (-5L);
            int32_t l_2766 = 0x795AFABDL;
            int32_t l_2767 = (-5L);
            for (g_1134 = 0; (g_1134 <= 0); g_1134 += 1)
            { 
                if (p_6.f0)
                    goto lbl_2647;
                return p_3;
            }
            if ((safe_rshift_func_uint16_t_u_u((l_2650 , (safe_sub_func_int16_t_s_s(((((safe_sub_func_uint8_t_u_u((safe_lshift_func_int16_t_s_s(0xD4D1L, (l_2657 != ((((((*g_623) ^= 0xB41F77C40B2AE9A6LL) <= (((l_2658 , (3UL < ((l_2643 > l_2643) , (*g_2419)))) <= g_295) | (**g_2418))) != l_2643) < (*g_226)) , l_2657)))), 0xD1L)) , 0x9E664EA68FB3AADDLL) ^ p_6.f3) >= 0x4C32L), 0xC5FEL))), l_2658)))
            { 
                if ((*p_7))
                    break;
                (**g_1042) = p_3;
            }
            else
            { 
                int16_t *l_2662 = &g_241;
                int32_t ****l_2667 = &g_1042;
                int32_t *l_2705[3];
                uint16_t ***l_2714 = (void*)0;
                uint8_t l_2732 = 246UL;
                int i;
                for (i = 0; i < 3; i++)
                    l_2705[i] = &g_788[0][3][1];
                l_2659 = (void*)0;
                (**g_1042) = g_2669;
                for (g_844 = 0; (g_844 <= 0); g_844 += 1)
                { 
                    int32_t *** const *l_2674 = &g_1096;
                    uint8_t *l_2687 = &g_902;
                    uint8_t *l_2688[7] = {(void*)0,&g_531,(void*)0,(void*)0,&g_531,(void*)0,(void*)0};
                    int32_t l_2690 = 1L;
                    int32_t l_2704 = 4L;
                    int i, j;
                    l_2690 &= ((*p_7) = (safe_add_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_s(((l_2674 == ((*l_2657) = (*l_2657))) , 0x7AL), (safe_add_func_int32_t_s_s((safe_mod_func_int16_t_s_s(((safe_mod_func_int8_t_s_s((safe_mod_func_uint8_t_u_u(((safe_mul_func_int8_t_s_s((safe_mul_func_uint8_t_u_u(g_526[p_6.f0][(g_844 + 4)], ((*l_2687) = 0x36L))), ((****l_2667) = ((((*g_623) = g_526[(p_6.f0 + 2)][p_6.f0]) == (p_5 & p_5)) || (*g_695))))) >= p_5), (-9L))), p_6.f0)) != p_6.f0), (-1L))), p_6.f3)))), l_2689)));
                    if ((*p_7))
                        continue;
                    l_2704 |= ((**g_73) ^= (safe_add_func_int16_t_s_s((safe_mod_func_int16_t_s_s((safe_lshift_func_int16_t_s_s((p_6.f0 >= (safe_rshift_func_uint16_t_u_u(l_2690, 14))), l_2699)), ((*l_2662) &= (safe_mod_func_int32_t_s_s((p_6.f0 , (safe_mod_func_uint16_t_u_u(l_2699, l_2690))), 1L))))), p_6.f0)));
                    return l_2705[2];
                }
                for (g_685 = 4; (g_685 >= 0); g_685 -= 1)
                { 
                    const struct S0 *l_2733 = &l_2650;
                    int i, j;
                    (*g_874) ^= (((*g_74) = (7UL != (safe_lshift_func_int16_t_s_u((((0x3E6DL && (safe_mul_func_int8_t_s_s(g_526[(g_685 + 1)][g_685], g_526[(g_685 + 1)][g_685]))) , l_2710[4]) != l_2711), 3)))) <= (p_6.f3 , (*p_7)));
                    (***l_2666) &= ((void*)0 != l_2668);
                    l_2734 = ((((l_2714 != l_2715) || (safe_rshift_func_uint16_t_u_u(((**g_692) = (safe_add_func_uint64_t_u_u(((safe_rshift_func_int16_t_s_s((safe_mul_func_int8_t_s_s((safe_add_func_uint16_t_u_u((safe_sub_func_uint32_t_u_u((0x23L || (***l_2666)), ((safe_add_func_uint64_t_u_u(7UL, (safe_sub_func_uint64_t_u_u(((*g_1079) , (((p_6.f3 || (*g_2419)) != p_6.f3) != l_2732)), 0xEAC91F2D1C088964LL)))) == (*g_693)))), 0xDDEBL)), 0x61L)), 10)) , l_2689), 0x29C42437F16B9387LL))), g_526[(g_685 + 1)][g_685]))) & 0x659FL) , l_2733);
                }
            }
            for (g_2538 = 4; (g_2538 >= 0); g_2538 -= 1)
            { 
                int16_t l_2750[7][5] = {{1L,0x6E37L,1L,0x6E37L,1L},{0x9172L,(-1L),0x9172L,0x9172L,(-1L)},{1L,0x89CFL,(-4L),0x6E37L,(-4L)},{(-1L),(-1L),0x4000L,(-1L),(-1L)},{(-4L),0x6E37L,(-4L),0x89CFL,1L},{(-1L),0x9172L,0x9172L,(-1L),0x9172L},{1L,0x6E37L,1L,0x6E37L,1L}};
                int32_t l_2752 = 0xBAC872A5L;
                int i, j;
                (**g_1042) = p_3;
                for (g_2116 = 4; (g_2116 >= 0); g_2116 -= 1)
                { 
                    int16_t *l_2746 = &g_685;
                    (*g_2669) |= (safe_unary_minus_func_uint8_t_u((safe_rshift_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s((~((0x17EBL == ((-3L) != ((((((safe_rshift_func_int8_t_s_u((((void*)0 == &g_400) , ((*g_226) = l_2644)), 5)) , (((safe_rshift_func_int8_t_s_s((((+((*l_2746) = (**g_2418))) || (safe_mul_func_int8_t_s_s(((void*)0 == (*g_451)), p_6.f3))) && p_5), g_2749)) != 0x5EL) == 0xCC85L)) | 0x0C4C6A77L) || (*p_7)) || l_2699) || l_2750[2][4]))) & 0xFAL)), (**g_2418))), 3))));
                    if ((*p_7))
                        break;
                }
                for (g_241 = 4; (g_241 >= 1); g_241 -= 1)
                { 
                    int32_t *l_2753 = (void*)0;
                    int32_t *l_2754 = &g_386;
                    int32_t l_2755 = (-2L);
                    int32_t *l_2756 = &g_20;
                    int32_t *l_2757 = &g_53;
                    int32_t *l_2759 = &g_20;
                    int32_t *l_2760 = &l_2751;
                    int32_t *l_2761[5][6][5] = {{{(void*)0,&g_1527,(void*)0,&g_788[0][2][1],(void*)0},{&g_788[0][5][0],&g_788[0][1][1],&g_2538,&g_788[0][1][1],&g_788[0][5][0]},{(void*)0,&g_788[0][2][1],(void*)0,&g_1527,&g_788[0][2][1]},{&l_2752,&l_2758,(void*)0,&l_2758,&l_2752},{&g_788[0][2][1],(void*)0,&g_53,&g_1527,&g_788[0][2][1]},{&g_1527,&l_2758,&l_2751,&l_2758,&g_1527}},{{&g_788[0][2][1],&g_1527,&g_53,(void*)0,&g_788[0][2][1]},{&l_2752,&l_2758,(void*)0,&l_2758,&l_2752},{&g_788[0][2][1],(void*)0,&g_53,&g_1527,&g_788[0][2][1]},{&g_1527,&l_2758,&l_2751,&l_2758,&g_1527},{&g_788[0][2][1],&g_1527,&g_53,(void*)0,&g_788[0][2][1]},{&l_2752,&l_2758,(void*)0,&l_2758,&l_2752}},{{&g_788[0][2][1],(void*)0,&g_53,&g_1527,&g_788[0][2][1]},{&g_1527,&l_2758,&l_2751,&l_2758,&g_1527},{&g_788[0][2][1],&g_1527,&g_53,(void*)0,&g_788[0][2][1]},{&l_2752,&l_2758,(void*)0,&l_2758,&l_2752},{&g_788[0][2][1],(void*)0,&g_53,&g_1527,&g_788[0][2][1]},{&g_1527,&l_2758,&l_2751,&l_2758,&g_1527}},{{&g_788[0][2][1],&g_1527,&g_53,(void*)0,&g_788[0][2][1]},{&l_2752,&l_2758,(void*)0,&l_2758,&l_2752},{&g_788[0][2][1],(void*)0,&g_53,&g_1527,&g_788[0][2][1]},{&g_1527,&l_2758,&l_2751,&l_2758,&g_1527},{&g_788[0][2][1],&g_1527,&g_53,(void*)0,&g_788[0][2][1]},{&l_2752,&l_2758,(void*)0,&l_2758,&l_2752}},{{&g_788[0][2][1],(void*)0,&g_53,&g_1527,&g_788[0][2][1]},{&g_1527,&l_2758,&l_2751,&l_2758,&g_1527},{&g_788[0][2][1],&g_1527,&g_53,(void*)0,&g_788[0][2][1]},{&l_2752,&l_2758,(void*)0,&l_2758,&l_2752},{&g_788[0][2][1],(void*)0,&g_53,&g_1527,&g_788[0][2][1]},{&g_1527,&l_2758,&l_2751,&l_2758,&g_1527}}};
                    int i, j, k;
                    if ((*p_7))
                        break;
                    if ((*p_7))
                        break;
                    ++l_2770;
                }
            }
        }
        (*g_874) = (safe_mod_func_uint32_t_u_u(((***g_399) , p_6.f3), p_5));
        if (g_241)
            goto lbl_2647;
    }
    if (((*p_7) &= (*g_2669)))
    { 
        int16_t *l_2775 = &g_241;
        int32_t l_2776 = 0xA151212FL;
        l_2776 ^= (p_6.f3 | ((*l_2775) = (*g_2419)));
        l_2776 &= 0xAC16843CL;
    }
    else
    { 
        uint32_t l_2790 = 0xD7A78D1AL;
        uint16_t ***l_2791[1];
        uint32_t l_2792[1][3];
        union U1 *l_2812 = &g_97[5];
        int32_t *l_2813[1];
        int8_t l_2842 = 0xAAL;
        int64_t l_2875[2][1][2] = {{{(-1L),(-1L)}},{{(-1L),(-1L)}}};
        union U1 *l_2942 = &g_97[3];
        int32_t l_2955 = 0x735EB9FBL;
        struct S0 ****l_2976 = &g_1370[3][0];
        struct S0 l_3064 = {0x7585L};
        uint8_t l_3072 = 0x02L;
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_2791[i] = &g_692;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 3; j++)
                l_2792[i][j] = 1UL;
        }
        for (i = 0; i < 1; i++)
            l_2813[i] = &g_20;
        for (g_2116 = (-27); (g_2116 >= (-1)); g_2116 = safe_add_func_int32_t_s_s(g_2116, 9))
        { 
            int8_t l_2783 = 0x12L;
            uint16_t * const *l_2816 = &g_693;
            uint16_t ** const l_2818 = &g_693;
            int32_t *l_2827[6];
            uint16_t l_2833 = 0UL;
            uint8_t l_2860 = 0x2EL;
            int i;
            for (i = 0; i < 6; i++)
                l_2827[i] = (void*)0;
        }
        for (g_2749 = 0; (g_2749 <= 0); g_2749 += 1)
        { 
            int16_t l_2865 = 0xE9C5L;
            int32_t l_2892[4];
            int64_t l_2911 = 0x95376C99CDD215E4LL;
            int i;
            for (i = 0; i < 4; i++)
                l_2892[i] = 0L;
            if ((l_2865 && (safe_lshift_func_int8_t_s_s((((safe_div_func_int8_t_s_s(0x4AL, p_6.f0)) < (((*p_7) , (safe_div_func_int16_t_s_s((~1UL), 0x85D8L))) , (safe_lshift_func_int16_t_s_u(0x8DC3L, l_2865)))) && 1UL), l_2875[1][0][0]))))
            { 
                uint16_t l_2887 = 65535UL;
                int32_t l_2890 = 0xC6D4E48CL;
                int32_t l_2891 = 0L;
                if ((safe_sub_func_int8_t_s_s(g_2878, (safe_rshift_func_uint8_t_u_u((safe_mul_func_int16_t_s_s(((((p_6.f0 != p_6.f3) , p_6.f0) == (safe_rshift_func_int16_t_s_s((safe_add_func_uint16_t_u_u(l_2865, (l_2887 = (*g_2419)))), 12))) < (safe_sub_func_int16_t_s_s((-1L), 65526UL))), 3L)), 0)))))
                { 
                    uint16_t l_2893 = 0x55CEL;
                    l_2893++;
                }
                else
                { 
                    uint64_t l_2896[4][7][1] = {{{0x1787B2D922DA0A25LL},{4UL},{0x1787B2D922DA0A25LL},{4UL},{0x1787B2D922DA0A25LL},{4UL},{0x1787B2D922DA0A25LL}},{{4UL},{0x1787B2D922DA0A25LL},{4UL},{0x1787B2D922DA0A25LL},{4UL},{0x1787B2D922DA0A25LL},{4UL}},{{0x1787B2D922DA0A25LL},{4UL},{0x1787B2D922DA0A25LL},{4UL},{0x1787B2D922DA0A25LL},{4UL},{0x1787B2D922DA0A25LL}},{{4UL},{0x1787B2D922DA0A25LL},{4UL},{0x1787B2D922DA0A25LL},{4UL},{0x1787B2D922DA0A25LL},{4UL}}};
                    struct S0 ****l_2899[3][5][3] = {{{&g_1370[2][0],&g_1370[3][0],&g_1370[2][0]},{(void*)0,&g_1370[3][0],&g_1370[6][3]},{(void*)0,(void*)0,(void*)0},{&g_854,&g_1370[3][0],&g_1370[3][0]},{(void*)0,&g_1370[3][0],&g_1370[4][1]}},{{&g_854,&g_1370[1][1],&g_854},{(void*)0,(void*)0,&g_1370[4][1]},{(void*)0,(void*)0,&g_854},{&g_1370[4][1],&g_1370[2][0],&g_1370[2][0]},{&g_854,(void*)0,&g_1370[1][1]}},{{&g_1370[4][1],(void*)0,&g_1370[4][1]},{&g_1370[3][0],&g_854,&g_1370[1][1]},{(void*)0,(void*)0,&g_1370[2][0]},{&g_1370[6][3],&g_854,&g_854},{&g_1370[2][0],(void*)0,&g_1370[3][0]}}};
                    int16_t *l_2908 = &g_285;
                    uint8_t *l_2910 = &g_72;
                    int i, j, k;
                    l_2896[1][4][0]++;
                    (*g_2669) ^= ((((*g_226) = (*g_226)) != ((*l_2910) = (((void*)0 != l_2899[0][4][0]) && (safe_add_func_uint16_t_u_u((*g_693), (safe_mul_func_int16_t_s_s(((((safe_mod_func_uint64_t_u_u((((*l_2908) = ((*g_1094) != (void*)0)) ^ (0x2679D072FB77FA9DLL > 0x63FCDE4904C255B8LL)), l_2891)) > (*g_2419)) , 0xED8A7983L) , (*g_2419)), l_2909))))))) >= l_2911);
                    if (l_2865)
                        continue;
                }
                return p_3;
            }
            else
            { 
                if ((*p_7))
                    break;
            }
            for (g_366 = 0; (g_366 <= 0); g_366 += 1)
            { 
                int16_t l_2918 = (-9L);
                int32_t l_2921 = 0x5ABD7E17L;
                int32_t l_2924 = (-1L);
                int32_t l_2925 = 0xE62EA50EL;
                int32_t l_2927 = 0x923877CCL;
                int32_t l_2934 = (-1L);
                uint16_t l_2935 = 6UL;
                for (g_531 = 0; g_531 < 7; g_531 += 1)
                {
                    for (l_2790 = 0; l_2790 < 4; l_2790 += 1)
                    {
                        g_2322[g_531][l_2790] = &g_2323[1][2][5];
                    }
                }
                for (p_5 = 0; (p_5 <= 0); p_5 += 1)
                { 
                    int32_t l_2919 = 0xA3677B4BL;
                    int32_t l_2920 = 5L;
                    int32_t l_2922 = 3L;
                    int32_t l_2923 = 1L;
                    int32_t l_2930[5];
                    int i, j, k;
                    for (i = 0; i < 5; i++)
                        l_2930[i] = (-1L);
                    g_788[g_2749][(p_5 + 6)][(g_366 + 1)] = ((l_2911 | ((safe_unary_minus_func_int16_t_s((**g_2418))) == (*g_2419))) || ((+((&l_2734 == (void*)0) || ((safe_lshift_func_int16_t_s_s((safe_add_func_uint16_t_u_u(((((***g_399) , (((p_5 | p_6.f0) >= p_6.f3) && 0xFC5CL)) & 0x975CL) == l_2892[3]), 0xFA6BL)), p_6.f0)) == 9L))) != (**g_2418)));
                    ++l_2935;
                    return p_7;
                }
            }
        }
        for (g_296 = 0; (g_296 == 27); g_296++)
        { 
            uint64_t l_2943 = 0x1DD6E1F38D3995ADLL;
            int32_t l_2948[1];
            int64_t l_2957 = 0x8B25852A1342B040LL;
            struct S0 ****l_2972[7][6][5] = {{{(void*)0,&g_1370[3][0],(void*)0,(void*)0,(void*)0},{&g_1370[4][2],(void*)0,&g_854,(void*)0,(void*)0},{(void*)0,&g_854,&g_1370[3][0],(void*)0,&g_1370[0][1]},{(void*)0,&g_1370[3][0],&g_1370[3][0],(void*)0,&g_1370[3][0]},{&g_1370[4][2],&g_1370[6][0],&g_1370[3][0],&g_1370[1][0],&g_1370[3][0]},{(void*)0,(void*)0,(void*)0,(void*)0,&g_1370[3][0]}},{{&g_854,&g_1370[3][0],(void*)0,(void*)0,(void*)0},{&g_1370[4][3],&g_1370[4][3],(void*)0,&g_1370[3][0],&g_1370[3][0]},{&g_1370[3][0],(void*)0,&g_1370[3][0],&g_1370[3][0],&g_854},{&g_1370[6][4],&g_1370[3][0],&g_1370[3][0],&g_1370[4][2],&g_1370[3][0]},{&g_1370[3][2],(void*)0,(void*)0,(void*)0,&g_1370[4][1]},{&g_1370[3][0],&g_1370[4][3],&g_1370[1][2],&g_1370[4][1],&g_854}},{{&g_1370[1][0],&g_1370[3][0],&g_854,(void*)0,(void*)0},{&g_1370[4][1],(void*)0,&g_1370[3][2],&g_1370[3][0],&g_1370[3][4]},{&g_854,&g_1370[6][0],&g_1370[3][0],&g_1370[3][0],&g_1370[5][1]},{(void*)0,&g_1370[3][0],&g_854,&g_1370[3][0],(void*)0},{&g_1370[3][0],&g_854,&g_854,&g_1370[1][2],&g_1370[3][0]},{&g_1370[6][2],(void*)0,&g_1370[3][0],&g_854,&g_1370[3][2]}},{{&g_1370[3][0],&g_1370[3][0],&g_1370[3][2],&g_854,&g_854},{&g_1370[6][4],(void*)0,&g_854,&g_1370[4][1],&g_854},{(void*)0,&g_1370[1][2],&g_1370[1][2],(void*)0,&g_1370[6][0]},{&g_854,(void*)0,(void*)0,&g_1370[3][0],&g_1370[3][0]},{&g_1370[5][1],&g_1370[3][0],&g_1370[3][0],&g_1370[3][2],&g_1370[3][0]},{&g_1370[0][0],&g_1370[3][0],&g_1370[3][0],&g_1370[3][0],&g_1370[3][4]}},{{(void*)0,(void*)0,(void*)0,(void*)0,&g_1370[3][2]},{&g_1370[3][0],&g_1370[6][4],(void*)0,&g_1370[4][1],&g_1370[3][0]},{&g_1370[3][0],&g_1370[3][0],(void*)0,&g_854,&g_1370[6][4]},{&g_854,&g_1370[3][0],&g_1370[3][0],&g_854,(void*)0},{&g_854,&g_1370[6][4],&g_1370[3][0],&g_1370[1][2],(void*)0},{(void*)0,&g_1370[3][0],&g_1370[3][0],&g_1370[3][0],(void*)0}},{{&g_1370[3][0],(void*)0,&g_854,&g_1370[3][0],(void*)0},{&g_1370[3][4],&g_1370[3][0],(void*)0,&g_1370[3][0],&g_1370[6][4]},{&g_1370[3][4],&g_1370[6][2],&g_854,(void*)0,&g_1370[3][0]},{&g_854,&g_1370[3][2],&g_1370[4][1],&g_1370[4][1],&g_1370[3][0]},{&g_854,&g_1370[3][2],&g_1370[0][2],(void*)0,&g_854},{&g_854,&g_1370[0][0],&g_1370[3][3],&g_854,&g_854}},{{&g_1370[3][0],&g_1370[6][4],&g_854,&g_1370[3][0],&g_1370[4][1]},{&g_854,&g_854,&g_1370[3][0],&g_854,&g_1370[3][0]},{&g_854,(void*)0,&g_1370[3][0],&g_1370[0][0],(void*)0},{(void*)0,&g_1370[6][0],&g_854,&g_1370[3][0],&g_1370[3][4]},{&g_854,&g_1370[3][0],&g_1370[4][1],&g_1370[3][0],&g_1370[3][0]},{&g_1370[6][4],&g_1370[3][0],(void*)0,&g_1370[3][2],&g_854}}};
            int64_t l_2975 = 0x90CDCCD6EF3C8814LL;
            const struct S0 ** const ***l_3002 = &g_3001;
            uint8_t l_3060 = 0x56L;
            struct S0 *l_3063 = &l_2650;
            int i, j, k;
            for (i = 0; i < 1; i++)
                l_2948[i] = (-5L);
            for (g_284 = 2; (g_284 != (-8)); --g_284)
            { 
                int32_t l_2951 = 0L;
                int32_t l_2952 = 0L;
                int32_t l_2953[3];
                int64_t l_2954 = 9L;
                struct S0 *****l_2973 = (void*)0;
                struct S0 *****l_2974 = &g_2198;
                int16_t *l_2980 = &l_2931;
                uint32_t l_3012 = 18446744073709551615UL;
                int i;
                for (i = 0; i < 3; i++)
                    l_2953[i] = 0x8829CE11L;
                for (g_1134 = 0; (g_1134 <= 0); g_1134 += 1)
                { 
                    int32_t l_2946 = 0xAFFAA76DL;
                    int32_t l_2949 = (-1L);
                    int32_t l_2950[3];
                    int32_t **l_2968[7][6] = {{(void*)0,&l_2813[g_1134],(void*)0,&l_2813[g_1134],(void*)0,&l_2813[g_1134]},{(void*)0,&l_2813[g_1134],(void*)0,&l_2813[g_1134],(void*)0,&l_2813[g_1134]},{(void*)0,&l_2813[g_1134],(void*)0,&l_2813[g_1134],(void*)0,&l_2813[g_1134]},{(void*)0,&l_2813[g_1134],(void*)0,&l_2813[g_1134],(void*)0,&l_2813[g_1134]},{(void*)0,&l_2813[g_1134],(void*)0,&l_2813[g_1134],(void*)0,&l_2813[g_1134]},{(void*)0,&l_2813[g_1134],(void*)0,&l_2813[g_1134],(void*)0,&l_2813[g_1134]},{(void*)0,&l_2813[g_1134],(void*)0,&l_2813[g_1134],(void*)0,&l_2813[g_1134]}};
                    int32_t **l_2969 = &l_2813[g_1134];
                    int i, j;
                    for (i = 0; i < 3; i++)
                        l_2950[i] = (-8L);
                    if (g_710[g_1134])
                        break;
                    (*g_1078) = l_2942;
                    --l_2943;
                    ++g_2965;
                    (*l_2969) = p_4;
                }
                (*p_7) = (((((((((safe_sub_func_uint8_t_u_u((((*l_2974) = l_2972[5][5][1]) != (l_2975 , l_2976)), (l_2977 == g_2978))) ^ (*g_2419)) != p_6.f0) || p_6.f0) || (***g_399)) , p_3) != &l_2952) & p_6.f0) , 0L);
                if ((((*l_2980) ^= (**g_2418)) == (safe_mul_func_int16_t_s_s((((*g_226) = (safe_rshift_func_uint16_t_u_s(p_6.f0, 15))) || (p_6.f0 < p_5)), p_6.f3))))
                { 
                    int32_t *l_2987 = (void*)0;
                    int16_t *l_3005[2];
                    int i;
                    for (i = 0; i < 2; i++)
                        l_3005[i] = (void*)0;
                    (*g_726) = l_2987;
                    (*g_2669) = (safe_div_func_int8_t_s_s(((((~(safe_lshift_func_uint8_t_u_s((+((safe_div_func_int16_t_s_s((p_6.f3 == 0x7A5BL), l_2951)) ^ ((((((l_2996[5][0][2] = l_2996[5][0][2]) == (l_3004[1] = ((((0xA2ABDAD0C7BFFAFBLL & (l_2997 != (l_3002 = g_3000))) > p_6.f0) , (*g_154)) , l_3003))) >= 0xCB1AL) > p_5) <= p_6.f3) ^ (*g_2979)))), 2))) , l_3005[0]) == l_3005[0]) , (-1L)), p_6.f3));
                }
                else
                { 
                    int16_t *****l_3008 = &g_3006;
                    int32_t l_3009 = 0L;
                    (**g_1042) = p_3;
                    (*l_3008) = g_3006;
                    if (l_3009)
                        continue;
                }
                for (g_53 = (-23); (g_53 >= 0); g_53 = safe_add_func_uint8_t_u_u(g_53, 7))
                { 
                    struct S0 l_3026 = {0L};
                    uint64_t ***l_3042 = (void*)0;
                    ++l_3012;
                    (*g_874) &= (safe_add_func_uint32_t_u_u((p_6.f3 , (((p_6.f1 = ((*g_623) = (safe_rshift_func_uint8_t_u_u((safe_unary_minus_func_int8_t_s(p_6.f0)), (p_6 , (((safe_add_func_int32_t_s_s(((safe_mul_func_uint16_t_u_u(((safe_lshift_func_uint16_t_u_u(l_2952, ((l_3026 , (safe_mul_func_uint16_t_u_u((((((safe_lshift_func_int16_t_s_u((safe_unary_minus_func_uint8_t_u((0xC8A53785L | ((safe_add_func_int8_t_s_s(l_3026.f0, p_6.f0)) <= g_55)))), 4)) & l_2953[1]) < p_6.f0) != g_2538) > (*p_7)), p_6.f3))) > 0L))) < l_3026.f0), 3L)) && l_2954), 0xD465E9B3L)) && 0UL) ^ l_3026.f0)))))) , 1UL) < 3L)), l_2948[0]));
                    (*g_73) = p_3;
                    (*p_7) = (((*l_2980) = (safe_add_func_int64_t_s_s(l_2975, (((safe_lshift_func_uint16_t_u_u((((safe_rshift_func_int16_t_s_u(p_6.f0, (safe_mod_func_int16_t_s_s((((l_3042 == (((*g_623) , ((safe_mul_func_int16_t_s_s((safe_mod_func_int32_t_s_s(((~(safe_mod_func_int16_t_s_s(((*g_2419) >= (((((((safe_add_func_uint16_t_u_u(((***l_2715) = (safe_rshift_func_int16_t_s_s(((safe_sub_func_int16_t_s_s((safe_mul_func_uint8_t_u_u(0x1AL, p_6.f2)), p_6.f3)) < l_2953[1]), 1))), 0UL)) ^ l_3026.f0) == p_6.f4) != (**g_2978)) <= g_159[3]) ^ 0xD5L) & l_3012)), p_5))) == 0x5C0EL), 1L)), 0x7F9FL)) , p_6.f0)) , &g_400)) != p_5) == 6L), p_6.f4)))) > 0x5343L) & p_6.f2), 14)) , p_6.f3) != p_6.f0)))) <= l_3026.f0);
                }
                ++l_3060;
            }
            for (g_2878 = 0; (g_2878 <= 2); g_2878 += 1)
            { 
                l_3063 = (void*)0;
                return p_7;
            }
            (*g_154) = l_3064;
            for (l_2790 = 0; (l_2790 >= 18); ++l_2790)
            { 
                int8_t l_3069 = 0xC8L;
                int32_t l_3070 = (-9L);
                int32_t l_3071[4][7][5] = {{{0x8AEA2BE5L,0L,0L,0x8AEA2BE5L,0L},{0x8AEA2BE5L,0x8AEA2BE5L,(-1L),0x8AEA2BE5L,0x8AEA2BE5L},{0L,0x8AEA2BE5L,0L,0L,0x8AEA2BE5L},{0x8AEA2BE5L,0L,0L,0x8AEA2BE5L,0L},{0x8AEA2BE5L,0x8AEA2BE5L,(-1L),0x8AEA2BE5L,0x8AEA2BE5L},{0L,0x8AEA2BE5L,0L,0L,0x8AEA2BE5L},{0x8AEA2BE5L,0L,0L,0x8AEA2BE5L,0L}},{{0x8AEA2BE5L,0x8AEA2BE5L,(-1L),0x8AEA2BE5L,0x8AEA2BE5L},{0L,0x8AEA2BE5L,0L,0L,0x8AEA2BE5L},{0x8AEA2BE5L,0L,0L,0x8AEA2BE5L,0L},{0x8AEA2BE5L,0x8AEA2BE5L,(-1L),0x8AEA2BE5L,0x8AEA2BE5L},{0L,0x8AEA2BE5L,0L,0L,0x8AEA2BE5L},{0x8AEA2BE5L,0L,0L,0x8AEA2BE5L,0L},{0x8AEA2BE5L,0x8AEA2BE5L,(-1L),0x8AEA2BE5L,0x8AEA2BE5L}},{{0L,0x8AEA2BE5L,0L,0L,0x8AEA2BE5L},{0x8AEA2BE5L,0L,0L,0x8AEA2BE5L,0L},{0x8AEA2BE5L,0x8AEA2BE5L,(-1L),0x8AEA2BE5L,0x8AEA2BE5L},{0L,0x8AEA2BE5L,0L,0L,0x8AEA2BE5L},{0x8AEA2BE5L,0L,0L,0x8AEA2BE5L,0L},{0x8AEA2BE5L,0x8AEA2BE5L,(-1L),0x8AEA2BE5L,0x8AEA2BE5L},{0L,0x8AEA2BE5L,0L,0L,0x8AEA2BE5L}},{{0x8AEA2BE5L,0L,(-1L),0L,(-1L)},{0L,0L,0x8AEA2BE5L,0L,0L},{(-1L),0L,(-1L),(-1L),0L},{0L,(-1L),(-1L),0L,(-1L)},{0L,0L,0x8AEA2BE5L,0L,0L},{(-1L),0L,(-1L),(-1L),0L},{0L,(-1L),(-1L),0L,(-1L)}}};
                int i, j, k;
                for (l_2932 = (-9); (l_2932 == (-2)); l_2932++)
                { 
                    ++l_3072;
                }
            }
        }
    }
    (*p_7) = (((*g_2979) = ((safe_rshift_func_uint16_t_u_u(((safe_sub_func_int16_t_s_s((*g_2419), (safe_mod_func_int32_t_s_s((safe_add_func_int64_t_s_s((p_6.f0 == ((*l_3094) &= ((g_764 = (safe_lshift_func_int8_t_s_u((safe_rshift_func_uint16_t_u_s(((safe_lshift_func_uint16_t_u_u((((**g_692) = 65528UL) ^ (g_241 |= (!((*l_3091) = ((*l_3090) = p_5))))), (~0xEA63L))) && ((*l_3090) = (~0x08EEL))), (((*g_933) , g_324) & (-2L)))), 2))) || (*p_7)))), (**g_400))), 0xC16F8C32L)))) < 0UL), 0)) == (*p_7))) , (*p_7));
    return p_3;
}



static int32_t * func_8(int32_t * p_9, int32_t  p_10, uint16_t  p_11, int64_t  p_12)
{ 
    struct S0 l_2269 = {3L};
    int32_t l_2360[3][3][3] = {{{(-1L),(-1L),0xBC90ADD8L},{(-1L),(-1L),0xBC90ADD8L},{(-1L),(-1L),0xBC90ADD8L}},{{(-1L),(-1L),0xBC90ADD8L},{(-1L),(-1L),0xBC90ADD8L},{(-1L),(-1L),0xBC90ADD8L}},{{(-1L),(-1L),0xBC90ADD8L},{(-1L),(-1L),0xBC90ADD8L},{(-1L),(-1L),0xBC90ADD8L}}};
    union U1 l_2368 = {0x50E6L};
    uint8_t *l_2382 = &g_902;
    int32_t l_2443 = 0L;
    int32_t l_2525 = (-1L);
    int8_t l_2639 = 0x1AL;
    int i, j, k;
    if (((g_2261 == ((*g_623) &= (~((safe_sub_func_int8_t_s_s((safe_mod_func_int32_t_s_s((safe_mod_func_int8_t_s_s(((l_2269 , (((4L > (safe_mul_func_uint16_t_u_u((safe_div_func_uint16_t_u_u((((~(((((safe_lshift_func_uint16_t_u_u(((void*)0 == &g_226), ((safe_add_func_uint32_t_u_u(0xC3BC7C07L, (((safe_lshift_func_uint16_t_u_u(((((safe_lshift_func_int8_t_s_s(((*g_226) = ((((safe_div_func_uint32_t_u_u(((safe_div_func_uint16_t_u_u((((safe_mod_func_uint64_t_u_u(p_10, l_2269.f0)) ^ 0x3EC7L) > (-1L)), p_11)) == (*g_401)), p_12)) > 2UL) ^ 0x4D09456AL) , 0x6DL)), p_10)) & (**g_726)) , 0x61FA7A472629CC10LL) < p_10), l_2269.f0)) ^ 0x367AL) >= g_412))) | p_12))) || 2UL) >= l_2269.f0) && (-1L)) | p_11)) != 4294967290UL) != 0UL), p_10)), 0UL))) , (-3L)) && (***g_399))) != 0x17AACB9EL), l_2269.f0)), l_2269.f0)), 246UL)) , l_2269.f0)))) >= l_2269.f0))
    { 
        int32_t l_2304 = 0xB145AAD8L;
        int64_t *l_2367 = (void*)0;
        (**g_1042) = (*g_73);
        for (g_238 = 0; (g_238 > (-21)); g_238 = safe_sub_func_int32_t_s_s(g_238, 3))
        { 
            int32_t l_2303 = 0xBB2DA300L;
            union U1 *****l_2308 = &g_451;
            int32_t l_2358 = 0x4599620FL;
            int32_t l_2359[4][1] = {{0x57113A4EL},{(-9L)},{0x57113A4EL},{(-9L)}};
            int i, j;
            for (g_241 = 0; (g_241 >= 0); g_241 -= 1)
            { 
                struct S0 *****l_2296 = &g_2198;
                union U1 *****l_2309 = &g_451;
                int32_t l_2321 = 4L;
                int32_t l_2362 = 0L;
                uint64_t l_2363 = 0x24FBFEF1AE0E9954LL;
                (**g_1042) = func_13((safe_rshift_func_int16_t_s_u(((((!(*g_693)) , (safe_div_func_int16_t_s_s((((void*)0 != l_2296) <= (((void*)0 != &p_10) >= (safe_rshift_func_uint8_t_u_s((p_12 & (safe_mul_func_int8_t_s_s((((safe_mod_func_uint8_t_u_u(((0x69A202E9L > p_10) == p_12), 8L)) ^ 0L) <= p_10), l_2269.f0))), (*g_226))))), l_2303))) != l_2304) > (***g_399)), 15)), p_9);
                l_2321 ^= (((~(safe_add_func_uint64_t_u_u((**g_400), l_2304))) , (l_2308 != (l_2309 = l_2309))) , ((*g_874) = (safe_lshift_func_int8_t_s_u(((((*g_2250) = (safe_rshift_func_int16_t_s_s(((safe_sub_func_uint8_t_u_u(((~((safe_mod_func_int64_t_s_s(((safe_sub_func_int16_t_s_s(l_2303, l_2269.f0)) > ((*g_226) ^ 0x46L)), p_11)) < g_412)) , l_2269.f0), (*g_226))) < 1UL), p_12))) , (void*)0) != &g_399), 3))));
                for (l_2304 = 4; (l_2304 >= 0); l_2304 -= 1)
                { 
                    uint8_t l_2324 = 4UL;
                    uint32_t *l_2325 = &g_764;
                    int16_t *l_2337[4];
                    uint16_t *****l_2339[4][2] = {{&g_1714[1],&g_1714[1]},{&g_1714[1],&g_1714[1]},{&g_1714[1],&g_1714[1]},{&g_1714[1],&g_1714[1]}};
                    int32_t *l_2341 = (void*)0;
                    int32_t *l_2342 = &g_788[0][1][1];
                    int32_t *l_2343 = &g_53;
                    int32_t *l_2344 = &g_20;
                    int32_t *l_2345 = &g_788[0][5][0];
                    int32_t *l_2346 = &g_295;
                    int32_t *l_2347 = &g_295;
                    int32_t *l_2348 = &g_295;
                    int32_t *l_2349 = &g_788[0][1][1];
                    int32_t *l_2350 = &g_53;
                    int32_t *l_2351 = &g_295;
                    int32_t *l_2352 = &g_788[0][6][0];
                    int32_t *l_2353 = &l_2321;
                    int32_t *l_2354 = &g_788[0][1][1];
                    int32_t *l_2355 = &g_1527;
                    int32_t *l_2356 = &g_788[0][1][1];
                    int32_t *l_2357[4];
                    int64_t l_2361[3];
                    int i, j, k;
                    for (i = 0; i < 4; i++)
                        l_2337[i] = &g_1910;
                    for (i = 0; i < 4; i++)
                        l_2357[i] = (void*)0;
                    for (i = 0; i < 3; i++)
                        l_2361[i] = 6L;
                    p_9 = ((((g_2322[6][0] != &g_2323[0][0][0]) , l_2304) || (((*l_2325) |= l_2324) > (safe_rshift_func_uint8_t_u_u(6UL, (((!(g_2338 &= ((safe_rshift_func_uint16_t_u_s((safe_lshift_func_uint8_t_u_u((safe_mod_func_int8_t_s_s((((p_10 > (safe_rshift_func_int16_t_s_s(((l_2269.f0 && 2UL) != p_11), p_11))) > l_2321) | p_12), l_2304)), l_2324)), p_12)) <= 0L))) == 0xD5784B3E861D0E1ELL) > p_11))))) , l_2325);
                    g_2340 = (l_2339[1][0] = (void*)0);
                    l_2363--;
                }
                for (g_160 = 3; (g_160 >= 0); g_160 -= 1)
                { 
                    int64_t **l_2366[1][7] = {{(void*)0,(void*)0,&g_696[1],(void*)0,(void*)0,&g_696[1],(void*)0}};
                    int i, j, k;
                    (*g_2250) = (((l_2367 = &g_54[2][2]) == &p_12) | (((*g_695) = ((-1L) < 0x2CC5L)) < ((l_2368 , ((safe_div_func_int64_t_s_s(p_11, (l_2368 , 18446744073709551615UL))) && 5UL)) >= g_252)));
                }
            }
        }
    }
    else
    { 
        int16_t l_2375 = 0x7B19L;
        uint64_t *l_2376 = &g_1214[2];
        int16_t *l_2383[3];
        int32_t l_2399 = 1L;
        int32_t l_2402 = 0xE3E45BBBL;
        int32_t l_2403 = 0x7263B0A6L;
        int32_t l_2405[2];
        int32_t l_2476 = 0xF3BD0260L;
        int64_t l_2501 = 0L;
        int32_t * const l_2529 = &l_2402;
        int8_t l_2541 = 0xE0L;
        int8_t **l_2545 = &g_226;
        int32_t l_2573 = 0x915B41E8L;
        int i;
        for (i = 0; i < 3; i++)
            l_2383[i] = &g_76.f0;
        for (i = 0; i < 2; i++)
            l_2405[i] = (-1L);
lbl_2561:
        (*g_921) ^= (((safe_lshift_func_uint8_t_u_s(((((((*l_2376) |= ((**g_400) ^= (l_2375 = (safe_mul_func_int8_t_s_s(p_10, (0UL && p_10)))))) >= (((*g_226) = (safe_add_func_uint8_t_u_u((safe_rshift_func_int8_t_s_s(p_12, ((!(l_2360[2][1][0] = (l_2382 == l_2382))) < l_2368.f3))), 6L))) && g_1333[3][0])) | 8UL) | (*g_623)) , l_2360[1][2][1]), p_11)) > p_10) > p_12);
        for (g_244 = 0; (g_244 >= 0); g_244 -= 1)
        { 
            int8_t * const *l_2385 = &g_226;
            int8_t * const **l_2384 = &l_2385;
            const uint64_t *l_2393 = &g_1214[1];
            const uint64_t **l_2392 = &l_2393;
            const uint64_t ***l_2391 = &l_2392;
            const uint64_t ****l_2390 = &l_2391;
            int32_t l_2397 = (-4L);
            int32_t l_2398 = 0x8BEA1220L;
            int32_t l_2400 = 0x530DE9BFL;
            int32_t l_2401 = (-1L);
            int32_t l_2404 = 1L;
            int32_t l_2406 = (-3L);
            int32_t l_2407 = 0xE1F91674L;
            int32_t l_2408 = 0x6DAD3F04L;
            int32_t l_2409 = 0xEFD6E511L;
            int32_t l_2410 = (-1L);
            int32_t l_2411[1];
            uint8_t l_2412 = 0x26L;
            uint64_t l_2502 = 18446744073709551607UL;
            uint16_t ***l_2506 = &g_692;
            uint16_t ****l_2505 = &l_2506;
            int32_t **l_2509 = &g_933;
            int32_t **l_2530 = &g_921;
            uint8_t *l_2542 = &g_128[2][3][3];
            int i;
            for (i = 0; i < 1; i++)
                l_2411[i] = 0x505C00D4L;
            (*g_2250) = 0xDB43A612L;
            if (((l_2384 == &g_2323[0][5][1]) <= ((safe_rshift_func_uint16_t_u_s((p_11 = ((**g_692) = g_112[g_244])), (((void*)0 != l_2390) == ((safe_sub_func_int16_t_s_s(g_112[g_244], p_12)) != p_12)))) != 0xF60577C2C76B7F5BLL)))
            { 
                int32_t *l_2396[2];
                const int16_t **l_2421[5][5] = {{&g_2419,&g_2419,&g_2419,&g_2419,&g_2419},{(void*)0,(void*)0,&g_2419,&g_2419,(void*)0},{&g_2419,&g_2419,&g_2419,&g_2419,&g_2419},{(void*)0,&g_2419,&g_2419,(void*)0,(void*)0},{&g_2419,&g_2419,&g_2419,&g_2419,&g_2419}};
                const int16_t ***l_2420[1][7];
                const int16_t ***l_2422 = (void*)0;
                const int16_t ***l_2423 = &l_2421[4][3];
                int i, j;
                for (i = 0; i < 2; i++)
                    l_2396[i] = &g_20;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 7; j++)
                        l_2420[i][j] = &l_2421[1][1];
                }
                ++l_2412;
                for (l_2412 = 0; (l_2412 <= 2); l_2412 += 1)
                { 
                    int32_t *l_2417 = &l_2397;
                    (*g_874) = (safe_lshift_func_uint8_t_u_u(0xC8L, 4));
                    (*g_726) = ((**g_1042) = l_2417);
                    return p_9;
                }
                (*l_2423) = g_2418;
                if ((safe_add_func_uint64_t_u_u((**g_400), (safe_lshift_func_uint16_t_u_s(((*g_623) <= (***g_399)), 6)))))
                { 
                    uint16_t l_2442 = 3UL;
                    (*g_921) = l_2402;
                    (*g_921) = (((0xEBL >= ((l_2399 < (((((safe_lshift_func_int8_t_s_s(1L, 4)) > ((safe_mod_func_int16_t_s_s((safe_rshift_func_int16_t_s_u((g_160 = l_2375), 4)), ((**g_692)++))) | (safe_add_func_uint16_t_u_u(((safe_mul_func_uint8_t_u_u(((void*)0 != &g_1095), ((safe_mul_func_uint16_t_u_u(p_12, l_2442)) && 0x0AL))) , l_2368.f0), p_11)))) , l_2442) >= (*g_695)) < (*g_2419))) < p_11)) < p_12) , l_2269.f0);
                    if (l_2443)
                        continue;
                }
                else
                { 
                    if ((*g_874))
                        break;
                }
                (*g_2250) |= ((safe_sub_func_uint32_t_u_u((safe_div_func_int16_t_s_s(l_2269.f0, (*g_2419))), (safe_rshift_func_uint8_t_u_u((((safe_rshift_func_uint8_t_u_s(((((void*)0 != &p_11) <= p_10) > p_10), 5)) != (&g_623 != (void*)0)) > 0L), g_712[2])))) <= (-10L));
            }
            else
            { 
                int64_t l_2475 = 0xE80F8EF8B48F969CLL;
                const union U1 l_2477 = {0x66DAL};
                int32_t l_2499 = 0x79BCA128L;
                int32_t l_2500[5][5][5] = {{{0x0BBF1189L,1L,0xCAFE66B6L,1L,0xDBD7B545L},{0xC83E95E5L,(-1L),(-1L),0xC83E95E5L,0x0A24D0A3L},{0x297EED7DL,(-10L),2L,1L,1L},{4L,(-9L),4L,0x0A24D0A3L,0xC83E95E5L},{1L,0xF3C20DDCL,0xB95D3AA6L,0xDBD7B545L,1L}},{{0xF28BEF3DL,5L,0x803ABDF9L,0x1353FB5FL,(-3L)},{0xC3678AA3L,0x29C85ED0L,0xB95D3AA6L,1L,0x29C85ED0L},{0x801CBC84L,0L,4L,0x81D41956L,0L},{(-10L),0xCE5AB66AL,2L,0xCE5AB66AL,(-10L)},{0x4FA017C9L,0xF28BEF3DL,(-1L),0L,(-10L)}},{{0xAACEA868L,0xF3C20DDCL,0xCAFE66B6L,0xAACEA868L,0xB95D3AA6L},{0x81D41956L,0xC83E95E5L,(-2L),0xF28BEF3DL,(-10L)},{0xC3678AA3L,0xAACEA868L,0x0BBF1189L,0xB95D3AA6L,(-10L)},{(-10L),(-1L),0L,5L,0L},{0xE113701FL,0xE113701FL,(-2L),0xD73AEC32L,0x29C85ED0L}},{{4L,(-3L),1L,0L,(-3L)},{0xCE5AB66AL,0xCAFE66B6L,0x0E40D8D5L,0x297EED7DL,1L},{0x1353FB5FL,(-3L),0xF28BEF3DL,0x0A24D0A3L,(-1L)},{1L,0x0E40D8D5L,0x91DEE43BL,0xFD70E6FCL,0x0BBF1189L},{(-1L),0xE4257D9CL,0xE4257D9CL,(-1L),(-1L)}},{{0xB95D3AA6L,0xCAFE66B6L,0xDBD7B545L,0x0E40D8D5L,0xC3678AA3L},{0x562CEE24L,(-1L),(-6L),(-1L),0L},{0xC3678AA3L,0x91DEE43BL,1L,0x0E40D8D5L,0xFD70E6FCL},{0x4FA017C9L,4L,5L,(-1L),1L},{(-1L),0x47BDB709L,0xFD70E6FCL,0xFD70E6FCL,0x47BDB709L}}};
                int i, j, k;
                for (g_246 = 0; (g_246 <= 0); g_246 += 1)
                { 
                    int32_t ***l_2455 = &g_932;
                    uint8_t *l_2471 = &g_902;
                    uint8_t **l_2472 = &l_2382;
                    uint8_t *l_2473 = (void*)0;
                    uint8_t *l_2474 = &g_163;
                    (*g_921) &= l_2360[0][2][2];
                    (*g_921) = (((safe_sub_func_uint32_t_u_u((+(**g_2418)), ((*g_1095) != l_2455))) <= (((safe_mod_func_uint32_t_u_u((((*g_623) = (safe_div_func_int8_t_s_s((safe_mul_func_int16_t_s_s(((1L > (safe_add_func_int32_t_s_s((((~(((*l_2474) = (((*l_2471) = (safe_div_func_uint16_t_u_u(((safe_lshift_func_int8_t_s_u((0L && ((((*l_2472) = l_2471) != (void*)0) != 0x76L)), 1)) , 65531UL), 0x8367L))) , 0xD0L)) != 249UL)) > g_160) < l_2475), g_666[2]))) >= 4UL), 0xF4F2L)), p_11))) == (*g_695)), 0x74A0370FL)) != l_2402) >= l_2476)) & l_2398);
                    (*g_73) = p_9;
                }
                if (l_2375)
                { 
                    (*g_874) ^= 1L;
                }
                else
                { 
                    int32_t *l_2495 = &g_788[0][1][1];
                    (*g_921) = ((l_2269.f0 != g_54[2][3]) , ((l_2477 , (safe_rshift_func_uint8_t_u_u((((safe_unary_minus_func_int64_t_s((safe_lshift_func_int8_t_s_s(((g_1214[1] , g_112[g_244]) || ((safe_rshift_func_uint16_t_u_s(((safe_rshift_func_int8_t_s_s((safe_add_func_int32_t_s_s((safe_add_func_int64_t_s_s(0L, ((((safe_add_func_uint32_t_u_u((((-8L) == p_11) == p_11), (**g_726))) && (*g_727)) | 0UL) || (*g_2419)))), p_12)), l_2399)) == p_11), 15)) , l_2477.f3)), 7)))) & 1L) , l_2360[1][2][1]), g_2261))) , 1L));
                    return l_2495;
                }
                for (g_1706 = 0; (g_1706 <= 4); g_1706 += 1)
                { 
                    int32_t *l_2496 = &l_2407;
                    int32_t *l_2497 = &g_295;
                    int32_t *l_2498[6] = {&l_2400,&g_1527,&g_1527,&l_2400,&g_1527,&g_1527};
                    int i;
                    if (l_2402)
                        break;
                    p_9 = p_9;
                    l_2502--;
                    (*g_2250) &= 1L;
                    return p_9;
                }
                return p_9;
            }
            if ((((((*g_874) = ((((*g_154) , (void*)0) != ((****g_1095) , l_2505)) ^ (l_2399 == p_12))) == p_10) <= p_12) >= l_2360[1][2][1]))
            { 
                uint8_t l_2507[6] = {255UL,0x41L,0x41L,255UL,0x41L,0x41L};
                struct S0 l_2508 = {0xA856L};
                int32_t **l_2510 = (void*)0;
                int i;
                (*g_921) |= l_2507[5];
                (*g_154) = l_2508;
                if ((**g_726))
                    continue;
                (*g_2250) |= (((l_2368 = l_2368) , l_2507[0]) != (((((*g_1096) = l_2509) != l_2510) < p_11) < l_2507[5]));
            }
            else
            { 
                int64_t l_2511[2];
                int32_t *l_2512 = (void*)0;
                int32_t *l_2513 = (void*)0;
                int32_t *l_2514 = &l_2397;
                int32_t *l_2515 = &g_20;
                int32_t *l_2516 = &g_386;
                int32_t *l_2517 = &l_2408;
                int32_t *l_2518 = &g_788[0][1][1];
                int32_t *l_2519 = &l_2398;
                int32_t *l_2520 = &g_53;
                int32_t *l_2521 = (void*)0;
                int32_t *l_2522 = &l_2410;
                int32_t *l_2523 = &l_2405[1];
                int32_t *l_2524[2][3];
                uint8_t l_2526 = 251UL;
                int i, j;
                for (i = 0; i < 2; i++)
                    l_2511[i] = 1L;
                for (i = 0; i < 2; i++)
                {
                    for (j = 0; j < 3; j++)
                        l_2524[i][j] = &l_2406;
                }
                l_2526++;
                (*l_2517) = p_10;
            }
            (*l_2530) = l_2529;
            (*g_874) = ((*g_921) = (safe_lshift_func_uint16_t_u_s((safe_mul_func_int16_t_s_s(((safe_lshift_func_uint8_t_u_s((0x10L | (!(((g_2538 , 18446744073709551606UL) & l_2525) != (**l_2530)))), 3)) < (((*l_2542) = ((*l_2382) = (((safe_lshift_func_uint8_t_u_u(((l_2525 <= ((0L & p_10) == (*l_2529))) , g_526[0][4]), g_76.f0)) || 0x4668531CL) != l_2541))) & 0x2EL)), p_10)), p_12)));
            for (g_325 = 0; (g_325 <= 0); g_325 += 1)
            { 
                int8_t l_2553 = 0x80L;
                int32_t l_2562 = 0L;
                int32_t l_2563 = 0L;
                int32_t l_2570 = (-1L);
                int32_t l_2571 = 0xC3C2CC20L;
                int32_t l_2574 = (-4L);
                int32_t l_2575 = 0L;
                int32_t l_2576[7];
                uint8_t l_2578 = 8UL;
                int i;
                for (i = 0; i < 7; i++)
                    l_2576[i] = 0xE89E9252L;
                (**l_2530) &= (-7L);
                if ((2L | (p_11 , ((*l_2542) = ((l_2368.f3 , l_2360[1][2][1]) >= 4294967287UL)))))
                { 
                    int8_t ***l_2546 = &g_2323[0][5][1];
                    int64_t l_2554 = 0x42388C2A84051932LL;
                    (*g_2250) ^= (safe_lshift_func_int16_t_s_u((((*l_2546) = ((p_11 , (*g_695)) , l_2545)) == ((safe_mul_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_s((((l_2553 || 0UL) & (l_2554 < 0L)) >= 0xA4L), l_2553)), 0L)) , (*l_2384))), (*l_2529)));
                }
                else
                { 
                    union U1 ** const l_2555 = (void*)0;
                    union U1 ***l_2556 = (void*)0;
                    union U1 ***l_2557 = (void*)0;
                    union U1 ***l_2558[1];
                    union U1 ***l_2559 = &g_453;
                    int32_t l_2560 = 1L;
                    int i;
                    for (i = 0; i < 1; i++)
                        l_2558[i] = (void*)0;
                    (*l_2559) = l_2555;
                    l_2560 &= ((*****g_1094) , ((*l_2529) ^ p_11));
                    if (p_10)
                        continue;
                    if (p_12)
                        goto lbl_2561;
                    return p_9;
                }
                if (l_2360[1][0][1])
                    continue;
                for (g_311 = 1; (g_311 <= 5); g_311 += 1)
                { 
                    int32_t *l_2564 = &l_2406;
                    int32_t *l_2565 = &g_386;
                    int32_t *l_2566 = &l_2410;
                    int32_t *l_2567 = &g_788[0][4][0];
                    int32_t *l_2568 = &l_2525;
                    int32_t *l_2569[5][5][3] = {{{(void*)0,&l_2525,&l_2360[1][2][1]},{(void*)0,(void*)0,(void*)0},{&l_2409,&l_2403,&l_2443},{&l_2406,(void*)0,(void*)0},{&l_2405[1],&l_2525,&l_2360[1][2][1]}},{{&l_2406,&l_2360[1][2][1],&l_2411[0]},{&l_2409,&l_2443,&l_2360[1][2][1]},{(void*)0,&l_2360[1][0][1],(void*)0},{(void*)0,&l_2443,&l_2443},{(void*)0,&l_2360[1][2][1],(void*)0}},{{(void*)0,&l_2525,&l_2360[1][2][1]},{(void*)0,(void*)0,(void*)0},{&l_2409,&l_2403,&l_2443},{&l_2406,(void*)0,(void*)0},{&l_2405[1],&l_2525,&l_2360[1][2][1]}},{{&l_2406,&l_2360[1][2][1],&l_2411[0]},{&l_2409,&l_2443,&l_2360[1][2][1]},{(void*)0,&l_2360[1][0][1],(void*)0},{(void*)0,&l_2443,&l_2443},{(void*)0,&l_2360[1][2][1],(void*)0}},{{(void*)0,&l_2525,&l_2360[1][2][1]},{(void*)0,(void*)0,(void*)0},{&l_2409,&l_2403,&l_2443},{&l_2406,(void*)0,(void*)0},{&l_2405[1],&l_2525,&l_2360[1][2][1]}}};
                    int64_t l_2577 = 0x56A77FA5B06B778DLL;
                    int i, j, k;
                    ++l_2578;
                }
                l_2570 = ((safe_mul_func_uint16_t_u_u(p_10, ((safe_rshift_func_uint16_t_u_s((((*g_695) ^ (safe_div_func_uint32_t_u_u(g_72, (**l_2530)))) >= 1L), (**l_2530))) == (l_2443 = 0xACAAL)))) == l_2574);
                for (g_709 = 4; (g_709 >= 0); g_709 -= 1)
                { 
                    const uint64_t *l_2610 = &g_1214[1];
                    int i;
                    (*g_874) ^= ((((((*l_2376) = (safe_div_func_int32_t_s_s((safe_rshift_func_int16_t_s_u(((safe_sub_func_int64_t_s_s(p_12, (g_112[g_325] = (safe_mod_func_int16_t_s_s((+(safe_sub_func_uint32_t_u_u(((safe_rshift_func_uint16_t_u_s((safe_div_func_int32_t_s_s((((1L == ((**g_2418) || ((safe_div_func_int64_t_s_s((((((safe_add_func_int8_t_s_s((safe_rshift_func_int8_t_s_s(((**l_2385) &= 1L), 4)), ((((((**l_2391) = l_2610) == (void*)0) , &l_2610) == (void*)0) >= 0x03L))) && (***g_399)) >= g_97[3].f3) && l_2360[1][2][1]) , (*l_2529)), 0x4233238C3000946CLL)) || p_10))) , l_2443) ^ 0UL), (-1L))), 11)) && p_12), (*g_921)))), (-7L)))))) , p_11), 13)), 0x383DD30BL))) , p_10) == 0x4DL) >= (**l_2530)) <= p_12);
                    if (p_11)
                        break;
                    (**g_1042) = &l_2525;
                }
            }
        }
    }
    (*g_874) = (((5L && (safe_add_func_uint32_t_u_u((l_2525 = (!(((*g_623) &= 0xBB893B69A0E57AB4LL) >= (safe_sub_func_uint64_t_u_u(p_10, (((safe_div_func_int8_t_s_s(((safe_mul_func_uint8_t_u_u(0xA9L, 1L)) > (safe_rshift_func_uint8_t_u_s((g_710[0] <= (((g_116 = l_2639) && l_2368.f0) && p_11)), 4))), (-1L))) >= p_12) ^ p_10)))))), l_2368.f3))) >= l_2368.f0) , p_10);
    (**g_1042) = p_9;
    return (*g_73);
}



static int32_t * func_13(uint64_t  p_14, int32_t * p_15)
{ 
    uint32_t l_49[3];
    int8_t *l_1357[6][7] = {{(void*)0,&g_159[3],&g_324,&g_159[3],(void*)0,&g_159[3],&g_324},{(void*)0,(void*)0,&g_709,&g_284,&g_159[3],&g_159[3],&g_709},{(void*)0,&g_709,&g_709,&g_284,(void*)0,&g_159[3],(void*)0},{&g_159[3],&g_709,&g_159[3],&g_709,&g_159[3],&g_709,&g_159[3]},{&g_709,&g_159[3],&g_83,&g_709,(void*)0,(void*)0,&g_284},{&g_159[3],&g_709,&g_159[3],&g_284,&g_709,(void*)0,(void*)0}};
    struct S0 l_1362 = {0xC699L};
    int32_t *l_1396 = &g_386;
    int16_t l_1398 = 1L;
    const uint64_t l_1400 = 0xA97AE37384161B2FLL;
    struct S0 *l_1437 = &l_1362;
    int64_t l_1445 = 0x221237770EF74217LL;
    int32_t **** const l_1446 = &g_1096;
    union U1 *****l_1488[6];
    union U1 *****l_1489[3][7][4] = {{{(void*)0,(void*)0,&g_451,&g_451},{&g_451,&g_451,&g_451,&g_451},{&g_451,(void*)0,&g_451,(void*)0},{&g_451,&g_451,&g_451,&g_451},{&g_451,&g_451,&g_451,(void*)0},{(void*)0,(void*)0,&g_451,&g_451},{(void*)0,&g_451,&g_451,(void*)0}},{{&g_451,&g_451,&g_451,&g_451},{&g_451,&g_451,&g_451,&g_451},{(void*)0,&g_451,(void*)0,&g_451},{&g_451,&g_451,(void*)0,(void*)0},{(void*)0,&g_451,&g_451,(void*)0},{&g_451,&g_451,&g_451,&g_451},{&g_451,&g_451,&g_451,&g_451}},{{(void*)0,&g_451,(void*)0,&g_451},{&g_451,&g_451,(void*)0,(void*)0},{(void*)0,&g_451,&g_451,(void*)0},{&g_451,&g_451,&g_451,&g_451},{&g_451,&g_451,&g_451,&g_451},{(void*)0,&g_451,(void*)0,&g_451},{&g_451,&g_451,(void*)0,(void*)0}}};
    int32_t l_1491 = 0xE553CF0CL;
    const int32_t l_1511 = 3L;
    int32_t l_1517 = 0L;
    int32_t l_1518 = 0L;
    int32_t l_1519 = 0x2A8A2152L;
    int32_t l_1520[4][1] = {{1L},{0x304F7ED3L},{1L},{0x304F7ED3L}};
    int32_t l_1584[1];
    int16_t l_1649[1][3];
    uint8_t l_1651 = 0xBCL;
    uint16_t l_1695 = 0x582EL;
    uint64_t l_1795 = 0x21A89125C9910872LL;
    uint32_t l_1868 = 0x7F03CCB3L;
    uint16_t l_1869 = 65531UL;
    uint64_t *l_1870 = &g_712[1];
    uint32_t l_1922[5] = {0UL,0UL,0UL,0UL,0UL};
    uint32_t l_2006[7][6] = {{0xB55F46E8L,0x2E43445FL,0x2E43445FL,0xB55F46E8L,0x249A1595L,3UL},{0xD9CFA1C5L,0x2E43445FL,0x249A1595L,0xD9CFA1C5L,0x249A1595L,0x2E43445FL},{1UL,0x2E43445FL,3UL,1UL,0x249A1595L,0x249A1595L},{0xB55F46E8L,0x2E43445FL,0x2E43445FL,0xB55F46E8L,0x249A1595L,3UL},{0xD9CFA1C5L,0x2E43445FL,0x249A1595L,0xD9CFA1C5L,0x249A1595L,0x2E43445FL},{1UL,0x2E43445FL,3UL,1UL,0x249A1595L,0x249A1595L},{0xB55F46E8L,0x2E43445FL,0x2E43445FL,0xB55F46E8L,0x249A1595L,3UL}};
    int8_t l_2057 = (-1L);
    int32_t * const ***l_2078 = &g_1195;
    int32_t * const ****l_2077 = &l_2078;
    uint16_t ***l_2088 = &g_692;
    uint16_t ****l_2087[2][4][6] = {{{(void*)0,(void*)0,(void*)0,&l_2088,&l_2088,&l_2088},{&l_2088,&l_2088,(void*)0,&l_2088,&l_2088,&l_2088},{&l_2088,&l_2088,(void*)0,&l_2088,&l_2088,&l_2088},{&l_2088,(void*)0,&l_2088,&l_2088,(void*)0,&l_2088}},{{&l_2088,&l_2088,(void*)0,&l_2088,(void*)0,&l_2088},{(void*)0,(void*)0,(void*)0,&l_2088,&l_2088,&l_2088},{&l_2088,&l_2088,(void*)0,&l_2088,&l_2088,&l_2088},{&l_2088,&l_2088,(void*)0,&l_2088,&l_2088,&l_2088}}};
    int16_t l_2123 = 0L;
    uint8_t l_2146 = 250UL;
    uint16_t **l_2170 = &g_693;
    int32_t *l_2234 = (void*)0;
    int32_t *l_2235 = &l_1584[0];
    int32_t *l_2236 = &g_386;
    int32_t *l_2237 = &l_1518;
    int32_t *l_2238 = &l_1518;
    int32_t *l_2239 = (void*)0;
    int32_t *l_2240 = &l_1584[0];
    int32_t *l_2241 = (void*)0;
    int32_t *l_2242 = &g_386;
    int32_t *l_2243 = &g_53;
    int32_t *l_2244 = &l_1517;
    int32_t *l_2245 = &g_386;
    int32_t *l_2246[5][5] = {{&l_1520[1][0],&l_1520[2][0],&l_1520[2][0],&l_1520[1][0],&l_1518},{&l_1520[1][0],&g_788[0][5][1],&g_1527,&g_1527,&g_788[0][5][1]},{&l_1518,&l_1520[2][0],&g_1527,&l_1584[0],&l_1584[0]},{&l_1520[2][0],&l_1518,&l_1520[2][0],&g_1527,&l_1584[0]},{&g_788[0][5][1],&l_1520[1][0],&l_1584[0],&l_1520[1][0],&g_788[0][5][1]}};
    uint64_t l_2247 = 18446744073709551610UL;
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_49[i] = 0UL;
    for (i = 0; i < 6; i++)
        l_1488[i] = (void*)0;
    for (i = 0; i < 1; i++)
        l_1584[i] = 0xCED6FE7EL;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
            l_1649[i][j] = 0x325DL;
    }
    for (p_14 = 20; (p_14 >= 52); p_14++)
    { 
        uint32_t l_48 = 0x7C6DD3EDL;
        int32_t ****l_1349 = &g_1042;
        union U1 *l_1365[1][7][3] = {{{&g_97[3],&g_97[0],&g_97[3]},{&g_97[3],(void*)0,&g_97[3]},{(void*)0,(void*)0,&g_97[3]},{&g_97[3],&g_97[3],&g_97[3]},{&g_97[3],&g_97[3],&g_97[0]},{&g_97[3],&g_97[3],&g_97[3]},{(void*)0,&g_97[3],&g_97[0]}}};
        int64_t l_1399 = 7L;
        union U1 ** const **l_1426 = (void*)0;
        int64_t l_1429 = 0x4693672CE9C26500LL;
        struct S0 *l_1434 = &l_1362;
        int32_t l_1521 = 0L;
        int32_t l_1522 = 0x7C3534B6L;
        int32_t l_1523 = 0xD91A8FF3L;
        int32_t l_1524 = (-1L);
        int32_t l_1525 = 0x940B56CCL;
        int32_t l_1526[1][5][7] = {{{0L,0x10DEA9BAL,0L,1L,0x10DEA9BAL,4L,4L},{0x10DEA9BAL,(-1L),1L,(-1L),0x10DEA9BAL,1L,0x78E47805L},{0x78E47805L,4L,1L,0x78E47805L,1L,4L,0x78E47805L},{0L,0x78E47805L,4L,1L,0x78E47805L,1L,4L},{0x78E47805L,0x78E47805L,1L,0x10DEA9BAL,(-1L),1L,(-1L)}}};
        int16_t l_1544 = (-1L);
        int16_t l_1597 = 0x69CBL;
        int32_t l_1641[7][2] = {{0x8184B423L,(-1L)},{0x8184B423L,0x8184B423L},{(-1L),0x8184B423L},{0x8184B423L,(-1L)},{0x8184B423L,0x8184B423L},{(-1L),0x8184B423L},{0x8184B423L,(-1L)}};
        int32_t *l_1670[7][6] = {{&g_710[0],&g_710[0],&g_97[3].f2,(void*)0,(void*)0,&g_97[3].f2},{(void*)0,(void*)0,&g_97[3].f2,&g_710[0],&g_710[0],&g_97[3].f2},{&g_710[0],&g_710[0],&g_97[3].f2,&g_710[0],&g_710[0],&g_97[3].f2},{&g_710[0],&g_710[0],&g_97[3].f2,(void*)0,(void*)0,&g_97[3].f2},{(void*)0,(void*)0,&g_97[3].f2,&g_710[0],&g_710[0],&g_97[3].f2},{&g_710[0],&g_710[0],&g_97[3].f2,&g_710[0],&g_710[0],&g_97[3].f2},{&g_710[0],&g_710[0],&g_97[3].f2,(void*)0,(void*)0,&g_97[3].f2}};
        int32_t *l_1700 = &l_1522;
        int32_t *l_1701 = &l_1584[0];
        int32_t *l_1702 = &g_788[0][5][1];
        int32_t *l_1703 = (void*)0;
        int32_t *l_1704 = &l_1526[0][4][5];
        int32_t *l_1705[4][5] = {{&l_1491,&l_1491,&l_1491,&l_1491,&l_1491},{&g_788[0][4][1],&g_788[0][4][1],&g_788[0][4][1],&g_788[0][4][1],&g_788[0][4][1]},{&l_1491,&l_1491,&l_1491,&l_1491,&l_1491},{&g_788[0][4][1],&g_788[0][4][1],&g_788[0][4][1],&g_788[0][4][1],&g_788[0][4][1]}};
        int8_t l_1707 = 0x82L;
        uint8_t l_1708 = 255UL;
        uint16_t * const *l_1713 = &g_693;
        uint16_t * const **l_1712 = &l_1713;
        uint16_t * const ***l_1711 = &l_1712;
        int32_t * const *l_1731 = (void*)0;
        int32_t * const **l_1730[7] = {&l_1731,&l_1731,&l_1731,&l_1731,&l_1731,&l_1731,&l_1731};
        int32_t * const ***l_1729 = &l_1730[6];
        int32_t l_1733 = 0x04B5D31BL;
        uint64_t ****l_1774 = &g_399;
        int32_t l_1775 = (-8L);
        int32_t l_1839 = 1L;
        int i, j, k;
        for (g_20 = 0; (g_20 == 17); g_20++)
        { 
            uint32_t l_32 = 1UL;
            int32_t l_45 = 0x71DBCABEL;
            uint16_t *l_46 = &g_47;
            int32_t *l_1394 = &g_788[0][1][0];
            int32_t **l_1395[5][2] = {{&g_74,&g_74},{&g_74,&g_74},{&g_74,&g_74},{&g_74,&g_74},{&g_74,&g_74}};
            int32_t *l_1397 = &g_386;
            struct S0 *l_1438 = (void*)0;
            uint8_t l_1457 = 0xF7L;
            union U1 **l_1468 = &l_1365[0][1][1];
            int8_t *l_1487 = (void*)0;
            int i, j;
        }
        for (g_53 = 0; (g_53 >= 13); g_53 = safe_add_func_int16_t_s_s(g_53, 5))
        { 
            struct S0 l_1508[6] = {{-2L},{-2L},{-2L},{-2L},{-2L},{-2L}};
            const int32_t *l_1514 = &g_386;
            int32_t l_1515[1][4][5] = {{{0x1F00E15CL,0x1F00E15CL,0x1F00E15CL,0x1F00E15CL,0x1F00E15CL},{(-8L),(-8L),(-8L),(-8L),(-8L)},{0x1F00E15CL,0x1F00E15CL,0x1F00E15CL,0x1F00E15CL,0x1F00E15CL},{(-8L),(-8L),(-8L),(-8L),(-8L)}}};
            uint64_t l_1528[7] = {1UL,1UL,9UL,1UL,1UL,9UL,1UL};
            int32_t *****l_1579 = (void*)0;
            uint64_t l_1634 = 0x4C0ADC5E4DB59DAELL;
            union U1 l_1674 = {0x9E30L};
            int i, j, k;
            l_1508[4] = (*g_154);
            for (g_244 = 0; (g_244 <= 3); g_244 = safe_add_func_uint16_t_u_u(g_244, 7))
            { 
                int32_t *l_1516[6][6][3] = {{{(void*)0,&g_386,&g_295},{&g_20,(void*)0,&g_20},{&g_295,&l_1491,&g_53},{&g_788[0][6][0],&g_788[0][6][0],&l_1491},{&g_386,&g_788[0][0][0],&l_1491},{&g_295,(void*)0,&g_788[0][3][1]}},{{(void*)0,&g_788[0][6][0],&l_1491},{&g_386,&g_295,&g_788[0][3][1]},{&g_788[0][1][1],(void*)0,&g_788[0][4][1]},{&g_20,&l_1491,&l_1491},{&g_788[0][3][1],&g_386,&l_1491},{&l_1491,&g_20,&g_295}},{{&l_1491,&l_1491,&l_1515[0][3][1]},{&g_788[0][1][1],&g_788[0][4][1],&g_788[0][1][0]},{&l_1515[0][0][1],&g_788[0][4][1],&g_20},{&l_1515[0][0][1],&l_1515[0][3][1],&l_1491},{&g_788[0][1][1],&g_788[0][1][1],(void*)0},{&l_1491,&l_1491,&l_1515[0][0][4]}},{{&l_1491,&g_53,&g_53},{&g_788[0][3][1],&g_20,&l_1515[0][0][1]},{&g_20,&g_386,&g_788[0][6][0]},{&g_788[0][1][1],&g_20,&g_386},{&g_386,&l_1491,&g_788[0][4][1]},{(void*)0,&g_20,&l_1515[0][0][4]}},{{&g_295,&g_386,(void*)0},{&l_1491,&g_20,&g_295},{&g_788[0][1][1],&g_53,&g_295},{&g_20,&l_1491,&g_788[0][0][0]},{&l_1515[0][3][2],&g_788[0][1][1],&g_20},{&g_53,&l_1515[0][3][1],&l_1491}},{{&g_386,&g_788[0][4][1],&l_1491},{&g_788[0][0][0],&g_788[0][4][1],&g_20},{&g_53,&l_1491,&g_788[0][0][0]},{(void*)0,&g_20,&g_295},{&g_295,&g_386,&g_295},{&g_295,&l_1491,(void*)0}}};
                int i, j, k;
                if ((*l_1396))
                { 
                    (**g_1042) = p_15;
                }
                else
                { 
                    if ((*l_1396))
                        break;
                    if (l_1511)
                        continue;
                    if ((*l_1396))
                        continue;
                }
                for (g_83 = (-1); (g_83 >= 9); g_83 = safe_add_func_int8_t_s_s(g_83, 6))
                { 
                    if ((*l_1396))
                        break;
                    (*g_726) = l_1514;
                }
                (*g_73) = (void*)0;
                ++l_1528[2];
            }
            if (p_14)
            { 
                uint8_t *l_1539[5] = {&g_902,&g_902,&g_902,&g_902,&g_902};
                int32_t l_1557[4][7][5] = {{{0xC41C1BA2L,0x76136927L,(-3L),0x2040DA9EL,0xF5A8094AL},{0x288D6DB5L,0xACBB02A9L,0xB8DA1CA0L,0x0058019CL,0x4CCDB6E3L},{(-2L),0xF975D243L,(-3L),0xF5A8094AL,3L},{1L,0xB8DA1CA0L,0x4DB3AFB6L,0xBD304913L,0x044A3867L},{1L,0x1C35756CL,0xF975D243L,(-2L),0xF975D243L},{1L,1L,0x67D6D514L,(-1L),6L},{0x82455891L,1L,0x899E0533L,0xC41C1BA2L,1L}},{{(-1L),0xA194259CL,0xBD304913L,0xB8DA1CA0L,0x2825660CL},{0x11D519CDL,1L,0x125E549EL,0x899E0533L,2L},{0x408BE6F9L,1L,7L,0x1E2B3830L,0x288D6DB5L},{0x125E549EL,0x1C35756CL,(-8L),(-8L),0x1C35756CL},{0x4CCDB6E3L,0xB8DA1CA0L,0xA194259CL,0x0A82DD94L,0xBD304913L},{0L,0xF975D243L,1L,2L,(-8L)},{6L,0xACBB02A9L,(-4L),7L,(-7L)}},{{0L,0x76136927L,(-2L),1L,0x6E11D676L},{0x4CCDB6E3L,0x2BB9A12FL,0xAA0DC637L,1L,0x0A82DD94L},{0x125E549EL,0x11D519CDL,0x1C35756CL,0x11D519CDL,0x125E549EL},{0x408BE6F9L,0x95E8CAD2L,1L,0x2825660CL,1L},{0x11D519CDL,0x53E81F15L,0x6B3FB189L,0L,0x125E549EL},{0xAA0DC637L,0x67D6D514L,0x044A3867L,0x0CD0B072L,0x2825660CL},{0xC41C1BA2L,0L,(-7L),0xF5A8094AL,(-2L)}},{{0x2825660CL,0x288D6DB5L,0x408BE6F9L,(-1L),0xB8DA1CA0L},{0xF975D243L,3L,3L,0xF975D243L,0x11D519CDL},{(-4L),(-7L),1L,7L,0x67D6D514L},{0x125E549EL,(-2L),3L,1L,0x5044FD9CL},{(-1L),0xAA0DC637L,0xB8DA1CA0L,7L,6L},{3L,(-3L),0x125E549EL,0xF975D243L,0x2040DA9EL},{0x0058019CL,6L,0xA194259CL,(-1L),(-1L)}}};
                int32_t *****l_1578 = &g_1025;
                int8_t l_1604 = 0L;
                int i, j, k;
                if ((safe_mod_func_uint8_t_u_u((g_632 ^= (safe_sub_func_uint8_t_u_u((safe_add_func_int16_t_s_s(4L, 0xC330L)), ((safe_add_func_int64_t_s_s((*l_1514), p_14)) , (g_1162 = ((-7L) | ((g_159[2] >= 0x32L) | (**g_726)))))))), (-1L))))
                { 
                    uint32_t l_1556 = 0x9D68AB75L;
                    int32_t l_1558[1];
                    uint32_t *l_1581 = &g_116;
                    int i;
                    for (i = 0; i < 1; i++)
                        l_1558[i] = (-1L);
                    l_1526[0][1][6] = (safe_mul_func_uint8_t_u_u(p_14, ((-1L) <= ((safe_rshift_func_int16_t_s_s((((*l_1396) = ((*g_693) & (l_1544 <= (*g_623)))) , (g_1162 & (safe_add_func_int64_t_s_s((safe_sub_func_int32_t_s_s((l_1558[0] |= ((*g_874) |= ((safe_add_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u(((~(safe_rshift_func_uint16_t_u_u(l_1556, 12))) ^ l_1557[3][4][0]), l_1557[3][4][0])), (*l_1514))) , (-1L)))), g_182)), p_14)))), p_14)) >= (*g_226)))));
                    (*g_874) ^= (safe_div_func_uint64_t_u_u(((0L || ((((*l_1581) = (safe_sub_func_int8_t_s_s(((safe_rshift_func_uint8_t_u_u((safe_div_func_int32_t_s_s(l_1557[3][4][0], (safe_rshift_func_int8_t_s_u((+p_14), 7)))), 1)) , (safe_mul_func_uint16_t_u_u((((safe_mul_func_int8_t_s_s((safe_mul_func_uint8_t_u_u(g_72, ((((safe_mul_func_int16_t_s_s(((l_1578 == (l_1579 = l_1579)) == (((!(l_1434 != (void*)0)) || p_14) , g_243)), (*l_1396))) , &g_182) != (void*)0) && 0xDC42L))), (-1L))) == 0x7827L) && 4294967295UL), p_14))), 0x71L))) || (*l_1514)) & p_14)) && p_14), 0x1FCF8E992776F501LL));
                }
                else
                { 
                    uint32_t *l_1595 = (void*)0;
                    uint32_t *l_1596 = &g_116;
                    uint64_t l_1598 = 0x7A4A9F741C78E90CLL;
                    int32_t *l_1601 = (void*)0;
                    int32_t *l_1602 = (void*)0;
                    int32_t *l_1603[7][1][2];
                    uint16_t l_1605[6][6][7] = {{{0xB5ADL,65529UL,0xB5ADL,65529UL,0xB5ADL,65529UL,0xB5ADL},{1UL,1UL,65529UL,65529UL,1UL,1UL,65529UL},{0x5872L,65529UL,0x5872L,65529UL,0x5872L,65529UL,0x5872L},{1UL,65529UL,65529UL,1UL,1UL,65529UL,65529UL},{0xB5ADL,65529UL,0xB5ADL,65529UL,0xB5ADL,65529UL,0xB5ADL},{1UL,1UL,65529UL,65529UL,1UL,1UL,65529UL}},{{0x5872L,65529UL,0x5872L,65529UL,0x5872L,65529UL,0x5872L},{1UL,65529UL,65529UL,1UL,1UL,65529UL,65529UL},{0xB5ADL,65529UL,0xB5ADL,65529UL,0xB5ADL,65529UL,0xB5ADL},{1UL,1UL,65529UL,65529UL,1UL,1UL,65529UL},{0x5872L,65529UL,0x5872L,65529UL,0x5872L,65529UL,0x5872L},{1UL,65529UL,65529UL,1UL,1UL,65529UL,65529UL}},{{0xB5ADL,65529UL,0xB5ADL,65529UL,0xB5ADL,65529UL,0xB5ADL},{1UL,1UL,65529UL,65529UL,1UL,1UL,65529UL},{0x5872L,65529UL,0x5872L,65529UL,0x5872L,65529UL,0x5872L},{1UL,65529UL,65529UL,1UL,1UL,65529UL,65529UL},{0xB5ADL,65529UL,0xB5ADL,65529UL,0xB5ADL,65529UL,0xB5ADL},{1UL,1UL,65529UL,65529UL,1UL,1UL,65529UL}},{{0x5872L,65529UL,0x5872L,65529UL,0x5872L,65529UL,0x5872L},{1UL,65529UL,65529UL,1UL,1UL,65529UL,65529UL},{0xB5ADL,65529UL,0xB5ADL,65529UL,0xB5ADL,65529UL,0xB5ADL},{1UL,1UL,65529UL,65529UL,1UL,1UL,65529UL},{0x5872L,65529UL,0x5872L,65529UL,0x5872L,65529UL,0x5872L},{1UL,65529UL,65529UL,1UL,1UL,65529UL,65529UL}},{{0xB5ADL,65529UL,0xB5ADL,65529UL,0xB5ADL,65529UL,0xB5ADL},{1UL,1UL,65529UL,65529UL,1UL,1UL,65529UL},{0x5872L,65529UL,0x5872L,65529UL,0x5872L,65529UL,0x5872L},{1UL,65529UL,65529UL,1UL,1UL,65529UL,65529UL},{0xB5ADL,65529UL,0xB5ADL,65529UL,0xB5ADL,65529UL,0xB5ADL},{1UL,1UL,65529UL,65529UL,1UL,1UL,65529UL}},{{0x5872L,65529UL,0x5872L,65529UL,0x5872L,65529UL,0x5872L},{1UL,65529UL,65529UL,1UL,1UL,65529UL,65529UL},{0xB5ADL,65529UL,0xB5ADL,65529UL,0xB5ADL,65529UL,0xB5ADL},{1UL,1UL,65529UL,65529UL,1UL,1UL,65529UL},{0x5872L,65529UL,0x5872L,65529UL,0x5872L,65529UL,0x5872L},{1UL,65529UL,65529UL,1UL,1UL,65529UL,65529UL}}};
                    int i, j, k;
                    for (i = 0; i < 7; i++)
                    {
                        for (j = 0; j < 1; j++)
                        {
                            for (k = 0; k < 2; k++)
                                l_1603[i][j][k] = (void*)0;
                        }
                    }
                    if (l_1399)
                        break;
                    (*g_874) = (safe_sub_func_uint64_t_u_u(l_1584[0], (safe_mul_func_int16_t_s_s((l_1557[1][2][0] , (safe_mod_func_int64_t_s_s(((0x9DL | (safe_rshift_func_int8_t_s_s((((safe_mul_func_int16_t_s_s((safe_sub_func_int32_t_s_s((*l_1396), ((*l_1596) = 0xB4E59888L))), (l_1597 , (((**g_692) > p_14) ^ (*l_1396))))) <= 0UL) & g_20), 7))) , (-8L)), l_1598))), 0xADAAL))));
                    (*g_874) = (safe_sub_func_uint64_t_u_u((l_1557[3][4][0] | (p_14 && 0xB8121B6FC698F5B2LL)), (g_182 > ((-10L) | p_14))));
                    l_1605[0][2][0]--;
                }
                return (*g_73);
            }
            else
            { 
                uint32_t l_1610 = 0x176B8AD7L;
                int32_t *****l_1635 = &l_1349;
                int32_t l_1637 = 0x1D86C158L;
                int32_t l_1638 = 0x91B58E49L;
                int32_t l_1639 = 0xFE6C7E49L;
                int32_t l_1640 = (-1L);
                int32_t l_1642 = 0xD18C890EL;
                int32_t l_1643 = (-1L);
                int32_t l_1644 = (-1L);
                int32_t l_1645 = 0xAE976DCBL;
                int32_t l_1646 = 0x16C66438L;
                int32_t l_1647 = 0x9837D445L;
                int32_t l_1648[5][3] = {{1L,0x1373E174L,1L},{6L,6L,6L},{1L,0x1373E174L,1L},{6L,6L,6L},{1L,0x1373E174L,1L}};
                union U1 *l_1656[3];
                int i, j;
                for (i = 0; i < 3; i++)
                    l_1656[i] = &g_97[6];
                for (g_55 = (-3); (g_55 != 30); ++g_55)
                { 
                    l_1610++;
                }
                for (g_160 = (-26); (g_160 == (-15)); g_160 = safe_add_func_uint32_t_u_u(g_160, 2))
                { 
                    int16_t l_1617 = 0xB308L;
                    int32_t *l_1636[2][3];
                    int32_t l_1650 = 0L;
                    int i, j;
                    for (i = 0; i < 2; i++)
                    {
                        for (j = 0; j < 3; j++)
                            l_1636[i][j] = &l_1521;
                    }
                    l_1515[0][0][1] &= ((0xBCDEL == p_14) & (safe_add_func_uint8_t_u_u(l_1617, (((((safe_rshift_func_uint16_t_u_u((safe_mul_func_int16_t_s_s(((safe_rshift_func_uint16_t_u_s(((~(safe_sub_func_int64_t_s_s((p_14 < (p_14 > (safe_div_func_uint64_t_u_u((!(safe_rshift_func_int8_t_s_u(((safe_sub_func_uint32_t_u_u(g_112[0], ((-7L) || (-1L)))) >= (*l_1396)), g_666[5]))), 0x2F69031B5BFCFFF2LL)))), l_1634))) >= p_14), g_55)) && g_1267), (*l_1396))), 10)) , l_1635) != &g_1041[0]) | 0xE066971B5557E6B2LL) >= g_387[2][1][4]))));
                    if ((*g_727))
                        continue;
                    l_1651++;
                }
                for (g_20 = 0; (g_20 > 4); g_20 = safe_add_func_int8_t_s_s(g_20, 1))
                { 
                    const int32_t *l_1668 = &g_1669;
                    const int32_t **l_1667 = &l_1668;
                    (*g_1078) = l_1656[0];
                    l_1648[1][0] &= ((safe_add_func_int64_t_s_s(3L, 0x1287124485EF3F47LL)) && (safe_add_func_uint16_t_u_u((safe_add_func_uint64_t_u_u(p_14, (safe_div_func_int16_t_s_s(((safe_sub_func_int64_t_s_s((*g_695), (*g_401))) < (((*l_1667) = (****g_1094)) == (l_1670[4][2] = p_15))), 0x820AL)))), 0UL)));
                }
                if (((*g_874) = (((~(*l_1514)) < ((**g_400) |= p_14)) >= (safe_add_func_uint8_t_u_u((l_1674 , 0xF4L), 0x07L)))))
                { 
                    uint64_t l_1696 = 0x8AFD5F6D5084C96ELL;
                    int32_t l_1697 = 0xAF39534BL;
                    int32_t l_1698 = (-8L);
                    int32_t *l_1699 = &l_1644;
                    (*l_1699) ^= ((((safe_div_func_int16_t_s_s(0L, ((safe_div_func_int64_t_s_s(((*g_623) = ((**g_1078) , ((0xEAL | (l_1698 ^= ((*g_226) = (safe_div_func_int8_t_s_s((safe_div_func_int16_t_s_s((safe_rshift_func_int16_t_s_s(((!((((((*g_695) ^= (safe_lshift_func_uint8_t_u_s((~((((safe_add_func_int32_t_s_s(0xC9ADD81AL, (((-10L) && 0xFC881E74L) <= (safe_sub_func_int32_t_s_s((l_1695 = (safe_mul_func_int16_t_s_s((((((*l_1514) & 0x8A3EC9DCL) >= p_14) & 5L) == 0UL), (*g_693)))), 0x81200E2FL))))) || (*g_874)) & 0xB78A31EDL) <= l_1696)), 1))) != p_14) < (*g_921)) ^ l_1697) ^ p_14)) , g_1214[1]), (*l_1396))), (*g_693))), 0x7CL))))) || g_284))), 0x6DD6DB2BA02903E6LL)) ^ 0x4CF92788L))) && 0xBA3C613E227B019DLL) ^ p_14) > 0x2BB1L);
                }
                else
                { 
                    if ((**g_726))
                        break;
                    if ((*l_1396))
                        break;
                    return (****l_1635);
                }
            }
        }
        l_1708--;
        (*l_1700) = ((l_1711 == g_1714[1]) && 0x17L);
        if (((safe_rshift_func_uint16_t_u_s((safe_rshift_func_int8_t_s_u((safe_div_func_uint8_t_u_u(((((*l_1396) & (safe_lshift_func_uint8_t_u_s(((((*l_1396) & (((-9L) != (!(+((safe_add_func_uint16_t_u_u(0x6601L, (safe_mod_func_uint8_t_u_u(((l_1729 = l_1729) == (((((*g_226) = (((*g_693) ^ (l_1584[0] |= ((((~g_632) < p_14) ^ g_684) | (*l_1704)))) >= (*l_1396))) | (-10L)) , 0x97L) , l_1446)), (*l_1396))))) , 0xE18DA834063EC4A6LL)))) & l_1733)) != 0L) , p_14), (*l_1396)))) ^ g_97[3].f3) < (*l_1396)), 1UL)), g_112[0])), 6)) >= g_712[1]))
        { 
            if ((*g_921))
                break;
            (*l_1700) = (*l_1700);
        }
        else
        { 
            uint8_t l_1734 = 255UL;
            union U1 * const *l_1749 = &g_102;
            const struct S0 l_1788 = {1L};
            int16_t *l_1789 = (void*)0;
            int16_t *l_1790 = (void*)0;
            int16_t *l_1791 = &g_325;
            int32_t l_1792 = 0x5DAAFFA5L;
            int32_t l_1793 = (-1L);
            int32_t l_1794 = 0x03132A61L;
            uint16_t **l_1798 = &g_693;
            int32_t l_1812 = (-3L);
            int32_t l_1813 = (-8L);
            for (l_1544 = 0; (l_1544 <= 3); l_1544 += 1)
            { 
                uint32_t l_1737 = 0x2B42AF49L;
                uint64_t ****l_1773 = (void*)0;
                struct S0 l_1777 = {-6L};
                --l_1734;
                for (l_1524 = 0; (l_1524 >= 0); l_1524 -= 1)
                { 
                    return p_15;
                }
                l_1737--;
                for (l_1733 = 0; (l_1733 <= 3); l_1733 += 1)
                { 
                    union U1 * const **l_1750[1];
                    int32_t l_1752 = 0x1C058CE8L;
                    int8_t **l_1759 = &l_1357[3][0];
                    int8_t ***l_1758 = &l_1759;
                    struct S0 l_1776 = {-1L};
                    int i;
                    for (i = 0; i < 1; i++)
                        l_1750[i] = &l_1749;
                    l_1752 = ((*l_1701) &= ((*l_1704) = ((safe_mod_func_uint8_t_u_u(1UL, (safe_add_func_int32_t_s_s((safe_rshift_func_uint16_t_u_s(l_1734, p_14)), l_1734)))) , ((safe_sub_func_uint64_t_u_u((safe_unary_minus_func_int8_t_s((((*g_401) = ((g_1751 = l_1749) == l_1749)) != (((*g_226) = ((p_14 , 0UL) | 0xBA9D5A32L)) <= p_14)))), 0x82DE4106585F1A18LL)) <= (-1L)))));
                    l_1752 = (safe_unary_minus_func_int8_t_s((-2L)));
                    (*l_1704) |= ((l_1737 != ((safe_lshift_func_uint8_t_u_u(p_14, ((*g_154) , (safe_div_func_uint64_t_u_u((((*l_1758) = &g_226) == &g_226), (safe_add_func_uint32_t_u_u(1UL, ((0xB60FL || p_14) , p_14)))))))) != p_14)) && 18446744073709551614UL);
                    (*g_921) |= ((safe_unary_minus_func_uint32_t_u(0x5DB912E6L)) < (safe_add_func_int64_t_s_s(((((*g_401) = (!(safe_rshift_func_int8_t_s_u(l_1737, 5)))) == ((l_1775 = (safe_unary_minus_func_int32_t_s(((l_1737 == ((*g_693) & l_1752)) < (g_55 = ((safe_mod_func_uint32_t_u_u((((((safe_lshift_func_int8_t_s_u((p_14 || (l_1773 == l_1774)), p_14)) , (void*)0) == (void*)0) , (-1L)) >= g_1669), (*g_874))) == 0xCDBDL)))))) == 0x1E3BC50F9CB5E94DLL)) , (*l_1396)), l_1737)));
                    l_1777 = l_1776;
                }
            }
            (*l_1700) &= ((*l_1396) >= ((*l_1704) = ((*l_1701) = (p_14 , (((safe_div_func_int64_t_s_s(((safe_div_func_uint32_t_u_u((0x1AAC994CL < (safe_mul_func_uint16_t_u_u(0xF43BL, ((*l_1791) = (safe_mod_func_int16_t_s_s((((*g_693) &= (safe_mul_func_int16_t_s_s((l_1788 , g_710[0]), l_1734))) , 1L), 2L)))))), (*l_1396))) ^ 0x47B1L), (*l_1396))) != 0UL) , (**g_726))))));
            l_1795++;
            for (l_1445 = 0; (l_1445 <= 1); l_1445 += 1)
            { 
                const union U1 * const l_1805 = (void*)0;
                int32_t l_1808[7] = {0x21B97449L,0x21B97449L,0x21B97449L,0x21B97449L,0x21B97449L,0x21B97449L,0x21B97449L};
                int64_t l_1810 = 0x97DF0081C0F9D909LL;
                uint16_t l_1814 = 65533UL;
                int32_t *l_1840 = &l_1641[6][0];
                int i;
                (**l_1711) = l_1798;
                for (l_1362.f0 = 0; (l_1362.f0 <= 1); l_1362.f0 += 1)
                { 
                    (**g_1042) = (*g_73);
                }
                for (l_1522 = 0; (l_1522 <= 1); l_1522 += 1)
                { 
                    int32_t l_1809[3][4][5] = {{{1L,0x7765A518L,1L,0x7765A518L,1L},{0L,0L,0L,0L,0L},{1L,0x7765A518L,1L,0x7765A518L,1L},{0L,0L,0L,0L,0L}},{{1L,0x7765A518L,1L,0x7765A518L,1L},{0L,0L,0L,0L,0L},{1L,0x7765A518L,1L,0x7765A518L,1L},{0L,0L,0L,0L,0L}},{{1L,0x7765A518L,1L,0x7765A518L,1L},{0L,0L,0L,0L,0L},{1L,0x7765A518L,1L,0x7765A518L,1L},{0L,0L,0L,0L,0L}}};
                    int8_t l_1811 = 7L;
                    int i, j, k;
                    (*l_1396) = (((((safe_div_func_uint8_t_u_u((safe_rshift_func_int8_t_s_s((p_14 , (safe_mul_func_uint16_t_u_u(p_14, ((((l_1805 == (void*)0) | p_14) == (&l_1544 == &g_666[4])) == 0x8AFF3F21FC3FB1CBLL)))), 4)), p_14)) != p_14) == (**g_400)) , p_14) > (***g_399));
                    (*l_1704) = (safe_lshift_func_uint8_t_u_u(0x06L, l_1808[1]));
                    l_1814++;
                    return (**g_1042);
                }
                for (l_1734 = 0; (l_1734 <= 1); l_1734 += 1)
                { 
                    (*l_1701) |= (safe_mul_func_int16_t_s_s((safe_rshift_func_int16_t_s_s((*l_1396), 8)), (safe_add_func_uint16_t_u_u(((*g_693) |= (safe_sub_func_int8_t_s_s((safe_mul_func_uint8_t_u_u((safe_mod_func_int8_t_s_s((((safe_add_func_uint8_t_u_u(9UL, ((safe_lshift_func_int16_t_s_s(g_244, 14)) >= 1L))) >= (safe_rshift_func_int8_t_s_s((safe_mod_func_uint64_t_u_u(1UL, 18446744073709551610UL)), 7))) && (safe_lshift_func_uint8_t_u_u((*l_1396), p_14))), 1UL)), p_14)), g_97[3].f3))), l_1839))));
                    return p_15;
                }
            }
            (*l_1437) = (*g_154);
        }
    }
    (*g_921) &= (safe_rshift_func_int16_t_s_s(((((*l_1396) = (safe_add_func_int64_t_s_s((*g_623), ((*l_1396) || (!(safe_lshift_func_int8_t_s_s(((*l_1396) < g_632), 2))))))) != (((*g_401) | (*g_401)) || (p_15 == (void*)0))) | g_54[2][3]), p_14));
    if ((0x4EA6L == (0x7641F944F8A43E8ELL || (((((((safe_rshift_func_uint16_t_u_s((safe_div_func_uint8_t_u_u((safe_mul_func_int16_t_s_s((((***g_399) ^ ((*l_1870) &= (safe_mod_func_int64_t_s_s(((((*g_874) = (-10L)) == (safe_mul_func_int16_t_s_s(0x8DA5L, ((safe_mod_func_uint8_t_u_u((((safe_lshift_func_uint8_t_u_u((safe_add_func_uint16_t_u_u((safe_lshift_func_int8_t_s_u(0x8FL, 6)), 4UL)), 0)) , 0xA84933EEC5EAE66ELL) , l_1868), (*l_1396))) , l_1869)))) , p_14), 0xA6B85FB19A1F7DEBLL)))) , (*l_1396)), p_14)), p_14)), 15)) >= 1L) > 0xBB75L) == (*l_1396)) , (****g_451)) , (void*)0) == (void*)0))))
    { 
        int32_t l_1892 = (-10L);
        int32_t l_1894 = 0x9F963E4FL;
        int32_t l_1906 = 0xC97FAB9CL;
        int32_t l_1908 = (-2L);
        int32_t l_1912 = 0xA8AF8992L;
        int32_t l_1914 = 0L;
        uint16_t ***l_1961 = &g_692;
        const struct S0 *l_2019 = &l_1362;
        const struct S0 **l_2018 = &l_2019;
        uint8_t l_2024 = 1UL;
        uint32_t *l_2028[4];
        int32_t *l_2049 = &l_1584[0];
        struct S0 l_2084 = {-4L};
        int8_t l_2102 = (-8L);
        int32_t l_2108 = 0xFC87DD65L;
        int32_t l_2112 = 0L;
        int32_t l_2114[4][2] = {{0L,0L},{(-1L),0L},{0L,(-1L)},{0L,0L}};
        int32_t ****l_2165 = (void*)0;
        int32_t ***l_2169 = &g_932;
        int i, j;
        for (i = 0; i < 4; i++)
            l_2028[i] = &g_116;
        if (((*g_874) |= (safe_rshift_func_int8_t_s_u(0x29L, g_412))))
        { 
            int8_t l_1877 = 1L;
            int32_t l_1905 = 0L;
            int32_t l_1909 = 7L;
            int32_t l_1911 = 0x99D19085L;
            int32_t l_1913 = 8L;
            int32_t l_1915[1][6];
            union U1 *****l_1939 = &g_451;
            uint16_t ***l_1963[1];
            struct S0 l_1981 = {1L};
            const struct S0 *l_2016 = &l_1981;
            const struct S0 **l_2015 = &l_2016;
            int i, j;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 6; j++)
                    l_1915[i][j] = (-8L);
            }
            for (i = 0; i < 1; i++)
                l_1963[i] = &g_692;
lbl_2012:
            if ((*g_921))
            { 
                uint8_t *l_1893[7][3] = {{&g_163,&l_1651,&g_163},{&g_1162,&g_72,&g_72},{&g_1162,&l_1651,&g_1162},{&g_1162,&g_1162,&g_72},{&g_163,&l_1651,&g_163},{&g_1162,&g_72,&g_72},{&g_1162,&l_1651,&g_1162}};
                int16_t *l_1895 = &g_666[0];
                int32_t l_1907 = 0L;
                uint16_t l_1917 = 65528UL;
                int32_t l_1920 = 7L;
                int32_t l_1921 = 9L;
                uint32_t *l_1956 = &g_387[5][1][5];
                int i, j;
                if ((((***g_452) , 0x22ED4ADDL) && (((*l_1895) = (((*g_623) & ((safe_lshift_func_int8_t_s_u((safe_lshift_func_uint8_t_u_s(l_1877, 7)), (l_1894 &= (safe_add_func_uint16_t_u_u(((*g_693) = (safe_mod_func_int8_t_s_s((((safe_add_func_uint64_t_u_u((safe_mul_func_int16_t_s_s(p_14, (safe_sub_func_int16_t_s_s((((safe_rshift_func_int8_t_s_s(5L, (safe_add_func_int8_t_s_s((((((*l_1870) = ((***g_399) = 0x9BDA570F2F121D1DLL)) >= p_14) , &g_1345) == &l_1445), 0xC0L)))) & l_1892) >= (*g_226)), (*l_1396))))), 2L)) >= p_14) , p_14), 1L))), l_1877))))) , (*g_623))) , p_14)) ^ 0x960FL)))
                { 
                    int32_t *l_1896 = &l_1491;
                    int32_t *l_1897 = &l_1584[0];
                    int32_t *l_1898 = &l_1517;
                    int32_t *l_1899 = &g_53;
                    int32_t *l_1900 = (void*)0;
                    int32_t *l_1901 = &g_20;
                    int32_t *l_1902 = &g_295;
                    int32_t *l_1903 = &g_386;
                    int32_t *l_1904[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
                    int32_t l_1916 = 0xEA786B1BL;
                    int i;
                    l_1917--;
                    (*g_73) = p_15;
                    l_1922[0]--;
                }
                else
                { 
                    int8_t *l_1934 = (void*)0;
                    int8_t **l_1935 = &l_1357[2][4];
                    int8_t **l_1936 = &l_1934;
                    int32_t l_1937 = 0x13170769L;
                    l_1908 = ((0x1FD9L < l_1917) >= ((safe_mod_func_uint8_t_u_u((+(l_1894 = (safe_div_func_int16_t_s_s((((g_47 == (((safe_lshift_func_int8_t_s_u((safe_rshift_func_int16_t_s_u(p_14, 6)), 0)) ^ ((((((*l_1936) = ((*l_1935) = l_1934)) != &g_1706) | ((**g_1078) , (*g_226))) <= l_1908) == l_1937)) ^ l_1937)) , 0x3C3A4A01L) & l_1907), (**g_692))))), 0x40L)) != 0UL));
                    (*g_874) = (((+((((l_1939 == (g_1940 = (void*)0)) >= (p_14 || ((p_14 , l_1357[0][3]) == ((*l_1936) = &g_284)))) ^ (safe_sub_func_uint64_t_u_u((safe_add_func_uint8_t_u_u(g_288[0][4], 0xEFL)), (-4L)))) < (*g_401))) || p_14) | l_1937);
                    (*l_1396) = 0xB27AD584L;
                    (*g_726) = (*g_726);
                    (*g_874) &= ((safe_sub_func_int32_t_s_s(((p_14 > (0x814DC7A3F3B6AE2FLL ^ (safe_mul_func_uint16_t_u_u(((safe_lshift_func_int16_t_s_u((safe_rshift_func_int16_t_s_u(p_14, (l_1956 == p_15))), 5)) | (*g_226)), (safe_lshift_func_int8_t_s_s((safe_add_func_uint64_t_u_u((*l_1396), p_14)), (*g_226))))))) || p_14), g_244)) || p_14);
                }
                (*g_874) = (-3L);
                (*g_921) = (*g_874);
            }
            else
            { 
                uint16_t ****l_1962[4][4] = {{&l_1961,&l_1961,(void*)0,(void*)0},{&l_1961,&l_1961,&l_1961,(void*)0},{&l_1961,&l_1961,&l_1961,&l_1961},{&l_1961,&l_1961,&l_1961,&l_1961}};
                int32_t * const l_1964 = &g_844;
                int16_t *l_1965[6][5][5] = {{{&g_685,&g_666[2],&g_685,&g_76.f0,&g_97[3].f0},{(void*)0,&g_241,&g_666[2],&l_1398,&g_97[3].f0},{&g_285,&g_685,&g_285,&g_666[2],&g_97[3].f0},{&g_97[3].f0,&g_97[3].f0,&l_1649[0][1],&g_241,&l_1362.f0},{&l_1398,&g_244,(void*)0,&l_1398,&g_685}},{{&l_1362.f0,&g_244,&l_1649[0][1],&g_97[3].f0,&l_1398},{&g_241,&g_97[3].f0,&l_1362.f0,&l_1649[0][1],&g_1910},{&g_666[5],&g_685,&g_76.f0,&g_685,&g_685},{&g_160,&g_241,&g_160,&g_685,&g_241},{&g_685,&g_666[2],&g_244,&g_241,&g_285}},{{&g_666[5],&g_666[2],(void*)0,&g_244,(void*)0},{&g_1910,&g_685,&g_244,&g_285,&l_1649[0][1]},{&g_97[3].f0,&l_1362.f0,&g_160,&g_76.f0,&g_244},{&l_1398,&g_241,&g_76.f0,&g_1910,(void*)0},{&g_76.f0,&g_1910,&l_1362.f0,&g_285,&l_1398}},{{(void*)0,&g_1156,&l_1649[0][1],&g_666[5],&g_1156},{(void*)0,&g_97[3].f0,(void*)0,&g_666[5],&g_685},{&g_97[3].f0,&g_685,&l_1649[0][1],&g_285,&g_1910},{&g_76.f0,(void*)0,&g_285,&g_1910,&g_685},{&g_685,&g_76.f0,&g_666[2],&g_76.f0,&g_685}},{{&g_244,&g_241,&g_685,&g_285,&g_97[3].f0},{(void*)0,&g_160,&g_285,&g_244,&g_76.f0},{&g_97[3].f0,&g_685,&g_666[2],&g_241,&g_97[3].f0},{&g_685,&g_244,&g_666[2],&g_685,&g_685},{&g_97[3].f0,&g_666[2],&l_1649[0][1],&g_685,&g_685}},{{&g_241,&g_685,&l_1649[0][0],&l_1649[0][1],&g_1910},{&l_1649[0][1],&g_685,(void*)0,&g_97[3].f0,&g_685},{&g_685,&g_1910,&g_160,&l_1398,&g_1156},{&g_685,&g_76.f0,&g_685,(void*)0,&l_1649[0][1]},{&g_666[2],&g_285,&g_76.f0,&l_1649[0][0],&g_97[3].f0}}};
                int32_t l_1966 = 0L;
                int32_t l_1971[2];
                int32_t l_1978[2][4];
                int i, j, k;
                for (i = 0; i < 2; i++)
                    l_1971[i] = 1L;
                for (i = 0; i < 2; i++)
                {
                    for (j = 0; j < 4; j++)
                        l_1978[i][j] = 0x9260B658L;
                }
                (*g_154) = (*l_1437);
                (*g_874) = ((((l_1963[0] = l_1961) == l_1961) ^ (l_1966 = (l_1964 != (void*)0))) ^ (safe_lshift_func_uint16_t_u_s((safe_rshift_func_uint8_t_u_s((l_1971[1] > ((safe_rshift_func_int8_t_s_s((safe_lshift_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u((((*g_623) |= ((l_1978[1][0] ^= p_14) ^ 0x0662B3FEB578F13FLL)) != (*l_1396)), p_14)), p_14)), (*g_226))) ^ 255UL)), 5)), 0)));
            }
            for (g_632 = 1; (g_632 <= 6); g_632 = safe_add_func_int8_t_s_s(g_632, 1))
            { 
                int16_t l_2001[1][4];
                int32_t l_2002[5][5] = {{0L,6L,6L,0L,6L},{0L,0L,0xEFEE3494L,0L,0L},{6L,0L,6L,6L,0L},{0L,6L,6L,0L,6L},{0L,0L,0xEFEE3494L,0L,0L}};
                int i, j;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 4; j++)
                        l_2001[i][j] = 0x8E20L;
                }
                (*g_154) = l_1981;
                for (l_1362.f0 = 0; (l_1362.f0 <= 2); l_1362.f0 += 1)
                { 
                    int32_t *l_1982 = (void*)0;
                    (*g_874) = (*l_1396);
                    return l_1982;
                }
                if ((**g_726))
                    continue;
                for (l_1795 = 14; (l_1795 != 7); --l_1795)
                { 
                    int32_t l_1991 = 0x310D1553L;
                    uint8_t *l_2003 = (void*)0;
                    uint8_t *l_2004 = &g_902;
                    int32_t *l_2005[6];
                    int i;
                    for (i = 0; i < 6; i++)
                        l_2005[i] = &l_1908;
                    (*l_1396) = (safe_mul_func_uint16_t_u_u((safe_rshift_func_int8_t_s_s((safe_add_func_uint16_t_u_u(((((**g_1042) = (void*)0) != p_15) && (g_112[0] , l_1991)), 65527UL)), ((((*l_2004) ^= ((l_2002[0][4] = (safe_mod_func_int8_t_s_s(((((safe_mul_func_int8_t_s_s(((safe_sub_func_int8_t_s_s(l_1892, (((safe_lshift_func_uint8_t_u_s((!p_14), 3)) != 1UL) ^ p_14))) || l_1991), (*g_226))) && l_1894) <= l_2001[0][2]) < p_14), g_83))) > (*g_623))) , (void*)0) != (*g_399)))), g_709));
                    ++l_2006[1][0];
                    (*l_1396) = (p_14 > (-1L));
                    p_15 = ((**g_1042) = p_15);
                }
                for (g_844 = 0; (g_844 > 17); g_844 = safe_add_func_int32_t_s_s(g_844, 7))
                { 
                    int32_t *l_2011 = &l_1906;
                    return (*g_73);
                }
            }
            if (l_1362.f0)
                goto lbl_2012;
            for (g_53 = 15; (g_53 <= (-12)); g_53--)
            { 
                const struct S0 ***l_2017[5][1][6] = {{{(void*)0,(void*)0,(void*)0,&l_2015,&l_2015,(void*)0}},{{(void*)0,(void*)0,&l_2015,&l_2015,&l_2015,&l_2015}},{{(void*)0,(void*)0,(void*)0,(void*)0,&l_2015,&l_2015}},{{&l_2015,(void*)0,(void*)0,&l_2015,(void*)0,&l_2015}},{{&l_2015,&l_2015,&l_2015,&l_2015,&l_2015,(void*)0}}};
                int32_t l_2025[3][3][7] = {{{0x7B2F37F9L,0xEE5BA43CL,8L,0xF33151F5L,0xEE5BA43CL,0xF33151F5L,8L},{0x25BFB071L,0x25BFB071L,0x04BA513FL,(-3L),0xD3D469D9L,0x04BA513FL,0xD3D469D9L},{0x689B9B5EL,8L,8L,0x689B9B5EL,0xF33151F5L,0x7B2F37F9L,0x689B9B5EL}},{{0L,0xD3D469D9L,0xAD99A194L,0xAD99A194L,0xD3D469D9L,0L,(-1L)},{1L,0x689B9B5EL,(-1L),0xEE5BA43CL,0xEE5BA43CL,(-1L),0x689B9B5EL},{0xD3D469D9L,(-1L),0L,0xD3D469D9L,0xAD99A194L,0xAD99A194L,0xD3D469D9L}},{{0x7B2F37F9L,0x689B9B5EL,0x7B2F37F9L,0xF33151F5L,0x689B9B5EL,8L,8L},{(-3L),0xD3D469D9L,0x04BA513FL,0xD3D469D9L,(-3L),0x04BA513FL,0x25BFB071L},{0xEE5BA43CL,8L,0xF33151F5L,0xEE5BA43CL,0xF33151F5L,8L,0xEE5BA43CL}}};
                int i, j, k;
                l_2018 = l_2015;
                (*l_1396) = (safe_lshift_func_uint8_t_u_u((p_14 >= (safe_rshift_func_uint16_t_u_s((**g_692), l_2024))), 7));
                l_2025[2][0][1] |= ((*g_874) &= 6L);
            }
        }
        else
        { 
            uint32_t l_2039 = 18446744073709551607UL;
            int32_t l_2056 = 0xE02D4C0EL;
            int32_t l_2058 = 0xC9FD3DC6L;
            int32_t l_2059 = 0xF2D74607L;
            uint64_t l_2061 = 0x49079C052BB42945LL;
            uint16_t ****l_2089 = (void*)0;
            union U1 l_2093 = {1L};
            int32_t l_2106 = (-1L);
            int32_t l_2109 = 1L;
            int32_t l_2117 = (-6L);
            int64_t l_2118 = 0x16021FE128236BDBLL;
            int32_t l_2119 = (-1L);
            int32_t l_2122 = (-10L);
            int32_t l_2124 = 0x553BC3ACL;
            int32_t l_2125 = 0x47AF893FL;
            int32_t l_2126[6];
            int i;
            for (i = 0; i < 6; i++)
                l_2126[i] = 0x5749A217L;
            for (g_1345 = 0; (g_1345 >= 0); g_1345 -= 1)
            { 
                uint8_t *l_2029 = &l_1651;
                const int32_t l_2038 = 0L;
                struct S0 *l_2048 = &l_1362;
                int32_t l_2050 = 0x28EAA6A3L;
                int32_t l_2060 = 1L;
                uint32_t **l_2090 = &l_2028[1];
                int32_t l_2107 = (-6L);
                int32_t l_2110 = 5L;
                int32_t l_2111 = 1L;
                int32_t l_2113 = (-9L);
                int32_t l_2115 = 0xD8C65981L;
                int8_t l_2120[7][1] = {{(-1L)},{0x1FL},{(-1L)},{0x1FL},{(-1L)},{0x1FL},{(-1L)}};
                int32_t l_2121[1][1];
                int i, j;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 1; j++)
                        l_2121[i][j] = 0x850D3C91L;
                }
            }
            for (g_386 = 11; (g_386 >= (-17)); g_386 = safe_sub_func_uint32_t_u_u(g_386, 5))
            { 
                int16_t l_2145[7] = {4L,4L,4L,4L,4L,4L,4L};
                uint16_t **l_2147 = &g_693;
                int i;
                l_2117 = (safe_rshift_func_uint16_t_u_u((p_14 && ((*l_2049) = (((safe_sub_func_uint32_t_u_u((p_14 , g_76.f0), p_14)) , (safe_sub_func_int64_t_s_s(((((safe_rshift_func_uint8_t_u_s(l_2109, (safe_div_func_uint16_t_u_u((((*l_2088) = (((((!((safe_mul_func_int8_t_s_s((*g_226), ((((0xADB3L < 0x98B9L) , 1L) <= p_14) == 0x9955421BL))) > l_2145[2])) == (**g_692)) > 0x8EL) <= l_2146) , (*l_2088))) != l_2147), 1L)))) & (*g_921)) == l_2145[2]) <= p_14), 7L))) , 0xE5L))), l_2145[5]));
                for (g_246 = 0; (g_246 == 4); ++g_246)
                { 
                    if ((*g_921))
                        break;
                }
                for (g_902 = 0; (g_902 <= 2); g_902 += 1)
                { 
                    if (l_2058)
                        break;
                    return (**g_1042);
                }
            }
            for (l_2118 = 0; (l_2118 < (-2)); l_2118 = safe_sub_func_uint16_t_u_u(l_2118, 6))
            { 
                int32_t l_2160 = 0x5FC6ED05L;
                int32_t *****l_2166 = &g_1025;
                int32_t ****l_2168 = (void*)0;
                int32_t *****l_2167 = &l_2168;
                l_2170 = ((((safe_lshift_func_int8_t_s_u((p_14 ^ ((((((safe_lshift_func_int8_t_s_u((safe_add_func_int64_t_s_s((safe_lshift_func_uint8_t_u_u(((l_2160 || (--g_764)) != (safe_div_func_int8_t_s_s(((*l_2049) = ((1L <= (**g_692)) == (((l_2122 , l_2165) != ((*l_2167) = ((*l_2166) = l_2165))) || 18446744073709551615UL))), p_14))), 3)), 0xC2D9CD13B1D30315LL)), 3)) , p_14) > p_14) != 65528UL) < g_53) == g_238)), 7)) , (*g_1095)) == l_2169) , (void*)0);
            }
        }
    }
    else
    { 
        int32_t *l_2171[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        uint64_t l_2173 = 0xF544830FDD44AF92LL;
        int32_t **l_2184 = &l_1396;
        int64_t **l_2193 = &g_696[1];
        int i;
        l_2173++;
        for (g_76.f0 = 0; (g_76.f0 >= 26); ++g_76.f0)
        { 
            uint16_t l_2199 = 1UL;
            uint16_t *** const l_2212 = &g_692;
            int32_t l_2213 = 0L;
        }
        return p_15;
    }
    --l_2247;
    return g_2250;
}



static int32_t * func_23(uint32_t  p_24, int32_t * p_25, int32_t  p_26, uint64_t  p_27)
{ 
    uint64_t l_276 = 0x255D9042488E89D4LL;
    int32_t l_287 = 7L;
    int32_t l_291 = 0xF425CC56L;
    int32_t l_292 = 0x5E57FDA3L;
    int32_t l_294 = 0x6B8BF16BL;
    int32_t l_445 = 1L;
    uint16_t *l_458 = &g_326;
    int32_t l_459 = 0x75E040CAL;
    int32_t l_461 = 0x8332D3BAL;
    int32_t *l_534 = &l_287;
    union U1 *****l_542 = &g_451;
    struct S0 l_549 = {-1L};
    int32_t *l_606 = &g_386;
    uint64_t **l_673 = &g_401;
    uint32_t l_759 = 4294967290UL;
    int32_t l_760 = 1L;
    union U1 l_877[2] = {{0xCFA0L},{0xCFA0L}};
    int32_t *l_908 = &g_295;
    int32_t *l_914 = &g_386;
    int32_t *l_923[4][7][1] = {{{&l_461},{(void*)0},{&l_461},{(void*)0},{&l_461},{&g_786},{&g_710[0]}},{{&g_710[0]},{&l_461},{&g_710[0]},{&g_710[0]},{&g_786},{&l_461},{(void*)0}},{{&l_461},{(void*)0},{&l_461},{(void*)0},{&l_461},{&g_786},{&g_710[0]}},{{&g_710[0]},{&l_461},{&g_710[0]},{&g_710[0]},{&g_786},{&l_461},{(void*)0}}};
    int32_t **l_922 = &l_923[1][6][0];
    int32_t ***l_940[7][3][5] = {{{&l_922,&l_922,&g_932,&l_922,&l_922},{&l_922,(void*)0,(void*)0,&g_932,(void*)0},{&l_922,&l_922,&l_922,&l_922,&g_932}},{{&g_932,(void*)0,(void*)0,&l_922,&l_922},{&g_932,&l_922,&g_932,&g_932,&l_922},{&l_922,&l_922,(void*)0,&l_922,(void*)0}},{{&l_922,&l_922,(void*)0,&l_922,&g_932},{(void*)0,&g_932,(void*)0,(void*)0,&g_932},{&g_932,&g_932,&g_932,&g_932,&g_932}},{{(void*)0,&g_932,(void*)0,&g_932,(void*)0},{&g_932,&l_922,&g_932,&g_932,&l_922},{(void*)0,&l_922,&l_922,(void*)0,(void*)0}},{{&g_932,&l_922,(void*)0,&l_922,&l_922},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&l_922,&g_932,&g_932,&l_922,&g_932}},{{&l_922,&l_922,(void*)0,(void*)0,&g_932},{&g_932,&g_932,&g_932,&g_932,&g_932},{&g_932,&l_922,(void*)0,&g_932,(void*)0}},{{&l_922,&g_932,(void*)0,&g_932,&l_922},{(void*)0,&l_922,&l_922,(void*)0,&l_922},{&l_922,&g_932,&g_932,&l_922,&g_932}}};
    int32_t ****l_939 = &l_940[5][2][4];
    int32_t * const *l_1021[2][3] = {{&g_874,&g_874,&g_874},{&l_914,&l_914,&l_914}};
    int32_t * const **l_1020[7][1] = {{&l_1021[1][2]},{&l_1021[0][1]},{&l_1021[1][2]},{&l_1021[0][1]},{&l_1021[1][2]},{&l_1021[0][1]},{&l_1021[1][2]}};
    uint32_t l_1060 = 0xE504182EL;
    int64_t l_1062 = 0x896473E1694B197CLL;
    int64_t l_1072[6] = {1L,1L,1L,1L,1L,1L};
    uint64_t l_1185 = 18446744073709551612UL;
    int16_t l_1319[7][6] = {{0x013BL,0x6165L,1L,0x6165L,0x013BL,9L},{0x614EL,9L,0xF255L,0x013BL,(-4L),0L},{1L,0x51DCL,(-4L),9L,0L,0L},{1L,0xF255L,0xF255L,1L,(-1L),9L},{0L,(-1L),1L,0xD3A9L,0x6165L,(-4L)},{1L,1L,0x5D79L,0x51DCL,0x6165L,0x51DCL},{0x33F5L,(-1L),0x33F5L,0xF145L,(-1L),1L}};
    int i, j, k;
    for (g_47 = (-27); (g_47 != 50); g_47 = safe_add_func_uint64_t_u_u(g_47, 1))
    { 
        struct S0 l_275[3][5][5] = {{{{0xC4DAL},{0xE777L},{-6L},{-1L},{-6L}},{{0xC4DAL},{0xC4DAL},{-1L},{-1L},{0xDB8EL}},{{0xE777L},{0xC4DAL},{-6L},{5L},{0xDB8EL}},{{0xC4DAL},{0xE777L},{-6L},{-1L},{-6L}},{{0xC4DAL},{0xC4DAL},{-1L},{-1L},{0xDB8EL}}},{{{0xE777L},{0xC4DAL},{-6L},{5L},{0xDB8EL}},{{0xC4DAL},{0xE777L},{-6L},{-1L},{-6L}},{{0xC4DAL},{0xC4DAL},{-1L},{-1L},{0xDB8EL}},{{-1L},{-6L},{-3L},{0L},{3L}},{{-6L},{-1L},{-3L},{-1L},{-3L}}},{{{-6L},{-6L},{0x5135L},{-1L},{3L}},{{-1L},{-6L},{-3L},{0L},{3L}},{{-6L},{-1L},{-3L},{-1L},{-3L}},{{-6L},{-6L},{0x5135L},{-1L},{3L}},{{-1L},{-6L},{-3L},{0L},{3L}}}};
        int32_t l_280 = 1L;
        int32_t l_281[1];
        int32_t l_368 = 0x551B61BBL;
        int64_t l_405[4] = {0L,0L,0L,0L};
        uint16_t *l_415 = (void*)0;
        const uint64_t ****l_444 = (void*)0;
        int8_t *l_460 = &g_324;
        int32_t l_497[1][6][1];
        union U1 *****l_543 = &g_451;
        int64_t l_626 = 0x0CD29130FEA67ABELL;
        uint64_t l_667 = 18446744073709551611UL;
        int8_t l_676 = 0x27L;
        const int32_t **l_729 = &g_727;
        const int64_t *l_757 = &g_293;
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_281[i] = 0x0DEAB1E3L;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 6; j++)
            {
                for (k = 0; k < 1; k++)
                    l_497[i][j][k] = 1L;
            }
        }
        if ((p_24 , (-1L)))
        { 
            int32_t *l_52[6][3] = {{&g_53,&g_20,&g_53},{&g_53,&g_53,(void*)0},{&g_53,(void*)0,&g_53},{&g_53,&g_20,&g_53},{&g_53,&g_53,(void*)0},{&g_53,(void*)0,&g_53}};
            uint16_t *l_70 = (void*)0;
            struct S0 l_274 = {0x9D16L};
            uint8_t *l_316 = &g_72;
            int i, j;
            --g_55;
            if (g_54[0][3])
            { 
                int32_t *l_58 = &g_20;
                return l_58;
            }
            else
            { 
                uint8_t *l_71[6] = {&g_72,&g_72,&g_72,&g_72,&g_72,&g_72};
                int32_t l_282 = 0x467D7227L;
                int32_t l_283 = 0L;
                int i;
                if ((p_24 <= (g_53 | func_59(((safe_sub_func_int64_t_s_s(func_65(l_70, l_52[2][2], (g_72 ^= 250UL), g_73), 0xDAF8D98C6833686ALL)) || 0xCEL), g_54[0][0], g_76))))
                { 
                    (*g_154) = l_274;
                    l_275[2][3][2] = l_274;
                    ++l_276;
                    if ((*p_25))
                        continue;
                }
                else
                { 
                    int32_t l_279 = 0L;
                    int32_t l_286 = (-3L);
                    g_288[0][4]++;
                    if ((*p_25))
                        break;
                    (*g_73) = (*g_73);
                    g_296--;
                }
            }
            for (p_24 = 0; (p_24 == 52); p_24 = safe_add_func_int8_t_s_s(p_24, 6))
            { 
                struct S0 l_309 = {0x18F1L};
                int32_t l_310 = 1L;
                int32_t *l_320 = &g_20;
                int32_t l_321 = 0xACBC3A3FL;
                int32_t l_322 = 0xFA881E8DL;
                uint32_t l_365 = 4294967295UL;
                uint64_t ***l_402 = &g_400;
                int64_t l_413[7];
                int i;
                for (i = 0; i < 7; i++)
                    l_413[i] = 0xC97A0BA0C64F53CBLL;
                if ((safe_add_func_uint8_t_u_u((safe_mul_func_int8_t_s_s(((safe_div_func_uint64_t_u_u(p_26, 1UL)) && g_159[3]), g_160)), (safe_sub_func_uint64_t_u_u((l_309 , ((l_281[0] & 1L) && g_54[2][3])), 0x791FE6ADB902ED9ALL)))))
                { 
                    int16_t *l_317 = &g_285;
                    int32_t l_318 = (-10L);
                    struct S0 **l_319 = &g_154;
                    --g_311;
                    l_318 = (254UL | (((((l_276 | p_26) > g_246) < (l_310 == (safe_lshift_func_int16_t_s_u(((((*l_317) = ((&g_72 != l_316) > 0x2FL)) & 0xD1F3L) > l_275[2][3][2].f0), 0)))) >= p_27) != g_288[0][4]));
                    (*l_319) = &g_76;
                }
                else
                { 
                    return l_320;
                }
            }
        }
        else
        { 
            union U1 *l_416 = &g_97[4];
            union U1 **l_417 = &g_102;
            (*l_417) = l_416;
        }
        for (g_246 = 12; (g_246 <= 60); ++g_246)
        { 
            int64_t *l_425 = (void*)0;
            int64_t *l_426 = &l_405[3];
            uint8_t *l_436 = &g_128[2][3][3];
            int32_t l_476[7] = {0x602FBBF1L,0L,0x602FBBF1L,0x602FBBF1L,0L,0x602FBBF1L,0x602FBBF1L};
            struct S0 l_494[2] = {{7L},{7L}};
            uint16_t *l_495 = &g_326;
            union U1 * const * const l_502 = &g_102;
            union U1 * const * const *l_501[5][4][6] = {{{&l_502,&l_502,&l_502,&l_502,&l_502,&l_502},{&l_502,&l_502,&l_502,&l_502,&l_502,&l_502},{&l_502,&l_502,&l_502,&l_502,&l_502,&l_502},{&l_502,&l_502,&l_502,&l_502,&l_502,&l_502}},{{&l_502,&l_502,&l_502,&l_502,&l_502,&l_502},{&l_502,&l_502,&l_502,&l_502,&l_502,&l_502},{&l_502,&l_502,&l_502,&l_502,&l_502,&l_502},{&l_502,&l_502,&l_502,&l_502,&l_502,&l_502}},{{&l_502,&l_502,&l_502,&l_502,&l_502,&l_502},{&l_502,&l_502,&l_502,&l_502,&l_502,&l_502},{&l_502,&l_502,&l_502,&l_502,&l_502,&l_502},{&l_502,&l_502,&l_502,&l_502,&l_502,&l_502}},{{&l_502,&l_502,&l_502,&l_502,&l_502,&l_502},{&l_502,&l_502,&l_502,&l_502,&l_502,&l_502},{&l_502,&l_502,&l_502,&l_502,&l_502,&l_502},{&l_502,&l_502,&l_502,&l_502,&l_502,&l_502}},{{&l_502,&l_502,&l_502,&l_502,&l_502,&l_502},{&l_502,&l_502,&l_502,&l_502,&l_502,&l_502},{&l_502,&l_502,&l_502,&l_502,&l_502,&l_502},{&l_502,&l_502,&l_502,&l_502,&l_502,&l_502}}};
            union U1 * const * const **l_500 = &l_501[3][3][5];
            int16_t l_520 = 1L;
            int32_t *l_562 = (void*)0;
            uint16_t *l_565 = &g_326;
            int32_t *l_604 = &l_476[6];
            const int32_t l_612 = (-1L);
            int i, j, k;
        }
        (*l_606) = (safe_lshift_func_uint8_t_u_u((safe_sub_func_int64_t_s_s(0xF5BB275C4978B0F9LL, (((safe_rshift_func_uint16_t_u_u((((safe_rshift_func_uint8_t_u_s((safe_add_func_int64_t_s_s(((safe_lshift_func_uint8_t_u_s((safe_mod_func_int16_t_s_s(((safe_add_func_uint8_t_u_u(((*l_534) | (*l_606)), 0x90L)) , ((-1L) <= (l_281[0] = ((safe_lshift_func_int8_t_s_s(((0x8AL || (((l_405[3] >= 0xE7702A8DL) != l_280) , 0L)) , l_281[0]), 4)) , g_526[4][1])))), (*l_534))), (*l_534))) > p_26), 18446744073709551615UL)), 5)) != 0x29E0L) < 0x21L), (*l_534))) , (***l_543)) == (void*)0))), g_284));
        if (((safe_add_func_uint32_t_u_u((safe_lshift_func_int8_t_s_s((+(+(*l_534))), (*g_226))), ((*l_606) ^= (0x78DBL | (*l_534))))) , l_275[2][3][2].f0))
        { 
            int8_t l_686 = (-7L);
            int32_t l_708[4][4] = {{0x4407A79DL,(-8L),0x4407A79DL,(-8L)},{0x4407A79DL,(-8L),0x4407A79DL,(-8L)},{0x4407A79DL,(-8L),0x4407A79DL,(-8L)},{0x4407A79DL,(-8L),0x4407A79DL,(-8L)}};
            uint8_t l_715 = 0x9CL;
            struct S0 **l_741 = &g_154;
            int i, j;
            for (g_295 = (-12); (g_295 != 27); ++g_295)
            { 
                uint16_t **l_691[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
                int32_t l_711 = 0x57118F05L;
                int i;
            }
            for (g_685 = 0; (g_685 >= (-20)); g_685--)
            { 
                uint8_t *l_723 = &g_163;
                const int32_t ***l_728 = (void*)0;
                struct S0 * const *l_742 = (void*)0;
                int32_t *l_751 = (void*)0;
                int32_t **l_752 = &l_606;
                int32_t l_753[1];
                uint64_t *l_754[4] = {&g_712[1],&g_712[1],&g_712[1],&g_712[1]};
                int i;
                for (i = 0; i < 1; i++)
                    l_753[i] = 0xBFE49486L;
            }
            (*l_606) = ((*l_542) != (*l_543));
            (*g_154) = l_549;
        }
        else
        { 
            int32_t l_758[4] = {0L,0L,0L,0L};
            int i;
            (*l_534) = ((g_97[3].f3 != 65529UL) , (*l_534));
            (*l_606) ^= (((p_26 > g_112[0]) >= (l_758[0] &= ((safe_rshift_func_int8_t_s_u(((void*)0 != &g_696[0]), (((*l_534) = (65534UL && ((**g_692) = (l_757 != (void*)0)))) && (*g_623)))) > (**l_729)))) != (*g_226));
        }
    }
    (*l_606) = (*g_727);
    if ((l_760 = l_759))
    { 
        int32_t *l_761 = &l_287;
        int32_t l_762 = 0L;
        int32_t *l_763[6] = {&l_762,&l_762,&g_386,&l_762,&l_762,&g_386};
        int8_t *l_773 = &g_709;
        int i;
        g_764--;
        if (l_287)
            goto lbl_767;
lbl_767:
        (*g_726) = &p_26;
        for (g_764 = 0; (g_764 <= 14); ++g_764)
        { 
            int32_t *l_770 = &g_295;
            (*g_73) = l_770;
            p_26 = (*p_25);
            if ((safe_add_func_uint64_t_u_u(((void*)0 == l_773), (-1L))))
            { 
                for (g_238 = (-23); (g_238 <= (-12)); ++g_238)
                { 
                    return (*g_73);
                }
                return (*g_73);
            }
            else
            { 
                return (*g_73);
            }
        }
    }
    else
    { 
        uint32_t *l_778 = &g_116;
        int32_t l_779 = 7L;
        uint16_t ** const l_782 = &g_693;
        int32_t *l_783[6] = {&l_291,&l_291,&l_291,&l_291,&l_291,&l_291};
        int8_t l_787[6][1][5];
        uint32_t l_790 = 0x4F231953L;
        uint16_t ***l_799 = (void*)0;
        uint16_t ***l_800 = &g_692;
        uint32_t l_816 = 0UL;
        int i, j, k;
        for (i = 0; i < 6; i++)
        {
            for (j = 0; j < 1; j++)
            {
                for (k = 0; k < 5; k++)
                    l_787[i][j][k] = (-1L);
            }
        }
        (*g_726) = (*g_726);
        if (((safe_mod_func_int16_t_s_s((((6L == ((*l_778) = 0x573BDD2BL)) <= l_779) != (safe_add_func_int32_t_s_s(((((0x4A918BD923C2ED7BLL || (&l_458 != l_782)) < (0x0C5D6087L || (*p_25))) >= l_779) ^ p_27), 4294967295UL))), p_26)) >= 0x1899AAB7L))
        { 
            l_783[4] = &p_26;
        }
        else
        { 
            int16_t l_784[7][1] = {{8L},{0x2A1DL},{8L},{0x2A1DL},{8L},{0x2A1DL},{8L}};
            int32_t l_785 = (-10L);
            int32_t l_789 = (-8L);
            int i, j;
            ++l_790;
        }
        for (g_764 = 0; (g_764 <= 5); g_764 += 1)
        { 
            int i;
            return (*g_73);
        }
        g_788[0][0][0] ^= (p_24 , ((*l_606) = (safe_add_func_uint64_t_u_u((((*g_401) < (p_27 = ((safe_rshift_func_uint8_t_u_u((((*l_800) = &g_693) != ((safe_mul_func_int8_t_s_s((((**l_782) = ((((safe_sub_func_int8_t_s_s(((*g_226) = (safe_add_func_int32_t_s_s((*p_25), (*p_25)))), ((((~(*l_534)) | (safe_sub_func_uint16_t_u_u((((safe_div_func_int32_t_s_s(((((safe_mod_func_int32_t_s_s((safe_div_func_int16_t_s_s(0x6326L, (*l_606))), (*g_727))) < 0x2428L) || (*l_606)) ^ 0L), (**g_726))) != l_816) >= g_112[0]), (*l_606)))) , (-5L)) <= (*l_606)))) <= (-1L)) >= 4L) >= p_26)) > (*l_606)), g_128[2][3][3])) , &g_693)), 6)) > (*l_606)))) == 0x2AFD6A920C1C384FLL), p_24))));
    }
    if (((*****l_542) , (*l_606)))
    { 
        uint8_t *l_829 = (void*)0;
        uint8_t *l_830 = (void*)0;
        uint8_t *l_831 = (void*)0;
        uint8_t *l_832 = &g_531;
        int16_t *l_833 = &g_685;
        int32_t l_834[3][7][7];
        int i, j, k;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 7; j++)
            {
                for (k = 0; k < 7; k++)
                    l_834[i][j][k] = 0x960604CCL;
            }
        }
        l_834[0][6][5] |= ((65535UL >= (((*g_401) = 18446744073709551615UL) | (0x77C0L <= (((safe_mul_func_int8_t_s_s(((p_26 > (*l_606)) & (((safe_mod_func_int32_t_s_s(((((*p_25) != (((safe_div_func_int16_t_s_s(((*l_833) = (((*l_832) = (safe_rshift_func_int16_t_s_u(g_295, 7))) | (*g_226))), g_293)) >= (*l_606)) <= 0x12CFL)) < (-1L)) || (*g_693)), g_786)) || 4L) >= (*g_623))), p_27)) < 0x1BD8L) , g_526[4][1])))) && 0x1D6EBAC7L);
    }
    else
    { 
        uint64_t l_835 = 18446744073709551615UL;
        uint32_t l_857 = 0x88789C9BL;
        int32_t l_866[3][5] = {{2L,0x0F1828AAL,0x0F1828AAL,2L,0x0F1828AAL},{2L,2L,0xD7708CD6L,2L,2L},{0x0F1828AAL,2L,0x0F1828AAL,0x0F1828AAL,2L}};
        int32_t *l_872 = &g_20;
        int32_t *l_873 = &l_287;
        int i, j;
        (*l_534) ^= (((((*g_727) || (l_835 || (l_835 >= (safe_div_func_uint32_t_u_u((((safe_mod_func_uint64_t_u_u(((safe_add_func_int8_t_s_s((((*g_401) == ((((safe_mod_func_uint16_t_u_u((((*p_25) , (*g_399)) != l_673), (*g_693))) <= 0x97L) && g_844) ^ 0x6CL)) ^ 1UL), (-5L))) > (*p_25)), l_835)) | (**g_692)) == 0x9203L), 0x6242A4DFL))))) | g_844) < 0UL) <= (*p_25));
        for (l_445 = (-4); (l_445 > (-24)); l_445--)
        { 
            return (*g_73);
        }
        for (g_632 = (-20); (g_632 > 49); g_632 = safe_add_func_uint64_t_u_u(g_632, 6))
        { 
            uint32_t *l_851 = &l_759;
            int32_t *l_855 = &g_97[3].f2;
            int32_t l_856[6] = {0x2EE520A8L,0x2EE520A8L,0x2EE520A8L,0x2EE520A8L,0x2EE520A8L,0x2EE520A8L};
            uint32_t l_867 = 0x17E0DDD1L;
            int i;
        }
    }
    if ((*l_534))
    { 
        struct S0 **l_878 = &g_154;
        uint8_t *l_881 = &g_128[1][2][3];
        union U1 l_899 = {0xF696L};
        union U1 *l_905 = &g_97[4];
        uint16_t ***l_906 = (void*)0;
        int32_t ** const *l_920[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        int32_t ** const **l_919[7][7] = {{&l_920[4],&l_920[4],&l_920[4],(void*)0,&l_920[4],&l_920[4],&l_920[4]},{&l_920[4],&l_920[4],&l_920[4],&l_920[4],&l_920[4],&l_920[4],&l_920[4]},{&l_920[4],(void*)0,(void*)0,(void*)0,&l_920[4],&l_920[4],&l_920[4]},{&l_920[4],&l_920[4],&l_920[4],&l_920[4],&l_920[4],&l_920[4],&l_920[4]},{&l_920[4],(void*)0,&l_920[4],&l_920[4],&l_920[4],&l_920[4],&l_920[4]},{&l_920[4],&l_920[4],&l_920[1],&l_920[4],&l_920[4],&l_920[1],&l_920[4]},{&l_920[4],&l_920[4],&l_920[4],(void*)0,&l_920[4],&l_920[4],&l_920[4]}};
        uint16_t *l_1009[6][6] = {{&g_47,(void*)0,&g_296,(void*)0,&g_326,&g_97[3].f3},{&g_296,&g_47,&g_326,(void*)0,&g_97[3].f3,&g_97[3].f3},{&g_326,&g_296,&g_296,&g_326,(void*)0,(void*)0},{&g_97[3].f3,&g_47,(void*)0,(void*)0,&g_326,&g_326},{(void*)0,&g_296,&g_97[3].f3,&g_47,&g_326,&g_47},{&g_97[3].f3,&g_47,&g_97[3].f3,&g_296,(void*)0,&g_296}};
        int8_t l_1032 = 1L;
        uint32_t l_1061 = 0xDDD6E348L;
        union U1 ***l_1076 = &g_453;
        uint64_t ** const *l_1105 = (void*)0;
        int16_t l_1115[2][3][4] = {{{(-2L),4L,0xF474L,0xF474L},{(-1L),(-1L),0x1BA2L,1L},{(-1L),0x61D7L,0xF474L,(-1L)}},{{(-2L),1L,(-2L),0xF474L},{4L,1L,0x1BA2L,(-1L)},{1L,0x61D7L,0x61D7L,1L}}};
        int32_t *****l_1190 = &g_1041[0];
        int32_t **l_1304 = &l_923[2][2][0];
        int i, j, k;
        if (((safe_div_func_uint16_t_u_u((l_877[1] , ((((*l_878) = &l_549) != (void*)0) ^ p_24)), (((safe_mul_func_int8_t_s_s(((void*)0 != l_881), ((****g_451) , 253UL))) == (*p_25)) ^ 0x09L))) < 255UL))
        { 
            const uint64_t *l_900 = &g_712[2];
            int8_t l_901 = 0L;
            for (g_243 = 1; (g_243 >= 0); g_243 -= 1)
            { 
                int16_t *l_894 = (void*)0;
                int16_t *l_895 = &g_285;
                int32_t l_898[5][6] = {{1L,(-1L),(-9L),(-9L),(-1L),1L},{0xEB843D52L,0xEB843D52L,0x2A39A7A3L,(-9L),0x2A39A7A3L,0xEB843D52L},{0x2A39A7A3L,(-1L),1L,0x24B26DA5L,0x24B26DA5L,1L},{0x2A39A7A3L,0x2A39A7A3L,0x24B26DA5L,(-9L),1L,(-9L)},{(-1L),0x2A39A7A3L,(-1L),1L,0x24B26DA5L,0x24B26DA5L}};
                int i, j;
            }
            return l_914;
        }
        else
        { 
            int32_t ** const *l_916 = (void*)0;
            int32_t ** const **l_915 = &l_916;
            int32_t ** const ***l_917 = (void*)0;
            int32_t ** const ***l_918 = &l_915;
            int32_t l_981 = (-8L);
            int32_t l_1002[7][1][3] = {{{(-2L),0xFAEB9883L,(-2L)}},{{(-2L),0xFAEB9883L,(-2L)}},{{(-2L),0xFAEB9883L,(-2L)}},{{(-2L),0xFAEB9883L,(-2L)}},{{(-2L),0xFAEB9883L,(-2L)}},{{(-2L),0xFAEB9883L,(-2L)}},{{(-2L),0xFAEB9883L,(-2L)}}};
            uint16_t l_1010[1][1];
            union U1 l_1050 = {0L};
            int8_t l_1053 = (-2L);
            uint16_t l_1054[7][4] = {{65535UL,65535UL,65535UL,65535UL},{65535UL,65535UL,0x9DA8L,0xD5C3L},{65535UL,0x9DA8L,65535UL,0xC59AL},{65535UL,0xD5C3L,0xC59AL,0xC59AL},{0x9DA8L,0x9DA8L,65532UL,0xD5C3L},{0xD5C3L,65535UL,65532UL,65535UL},{0x9DA8L,65535UL,0xC59AL,65532UL}};
            uint64_t l_1055 = 0x78D14899931B3700LL;
            int32_t **** const *l_1093 = &g_1025;
            uint32_t *l_1132 = (void*)0;
            uint32_t *l_1133[7] = {&g_116,&g_116,&g_116,&g_116,&g_116,&g_116,&g_116};
            struct S0 *l_1147 = &g_76;
            int32_t *l_1150 = &g_788[0][1][1];
            int32_t *****l_1189 = &g_1041[0];
            const uint16_t *l_1210 = &l_1050.f3;
            const uint16_t **l_1209 = &l_1210;
            const uint16_t ***l_1208 = &l_1209;
            int32_t l_1232 = 0x0841AACFL;
            int32_t l_1233 = 8L;
            int32_t l_1234 = 0x9A8EC327L;
            int32_t l_1236 = (-1L);
            int32_t l_1237 = 0x4FAB371FL;
            int32_t l_1239[6] = {(-2L),(-2L),(-2L),(-2L),(-2L),(-2L)};
            int64_t **l_1252[2];
            int32_t ***l_1253 = &g_73;
            uint32_t l_1261 = 1UL;
            uint16_t l_1293 = 0x881CL;
            const uint32_t l_1294 = 4294967289UL;
            int i, j, k;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 1; j++)
                    l_1010[i][j] = 0UL;
            }
            for (i = 0; i < 2; i++)
                l_1252[i] = &g_695;
            l_919[6][1] = (p_26 , ((*l_918) = l_915));
            for (l_760 = 6; (l_760 >= 0); l_760 -= 1)
            { 
                int32_t ***l_924 = (void*)0;
                int32_t **l_925[4][5];
                int32_t l_943 = 0x53C848B0L;
                int32_t l_978 = 0L;
                int64_t l_982 = 2L;
                uint32_t l_984 = 0x284E976AL;
                struct S0 ** const l_1015[5] = {&g_154,&g_154,&g_154,&g_154,&g_154};
                const uint64_t *l_1034[5];
                const uint64_t **l_1033 = &l_1034[3];
                int32_t *l_1058 = &l_978;
                const int32_t *l_1059[2][3] = {{&g_788[0][5][0],&g_788[0][5][0],&g_788[0][5][0]},{&g_788[0][6][1],&g_788[0][6][1],&g_788[0][6][1]}};
                int i, j;
                for (i = 0; i < 4; i++)
                {
                    for (j = 0; j < 5; j++)
                        l_925[i][j] = &l_923[2][5][0];
                }
                for (i = 0; i < 5; i++)
                    l_1034[i] = &g_1035;
                p_25 = g_921;
                l_925[0][2] = l_922;
                (*l_914) ^= (*p_25);
            }
        }
        if (g_246)
            goto lbl_1305;
lbl_1305:
        (*g_874) = (**g_726);
        (*l_908) = 3L;
    }
    else
    { 
        int16_t l_1308 = 1L;
        struct S0 **l_1310 = &g_154;
        struct S0 ***l_1309 = &l_1310;
        int32_t *l_1318 = &g_295;
        int32_t l_1320 = 2L;
        int32_t l_1321 = 0x3485334FL;
        int32_t l_1324 = 0x537A8A2FL;
        int32_t l_1325 = (-1L);
        int32_t l_1326 = 0L;
        int32_t l_1328[5];
        uint64_t ** const *l_1336 = &g_400;
        int i;
        for (i = 0; i < 5; i++)
            l_1328[i] = 0x603810EFL;
        if (((*g_874) = ((*l_534) |= (((safe_rshift_func_int16_t_s_s(0xCD43L, 11)) > l_1308) <= p_27))))
        { 
            struct S0 ****l_1311 = &g_854;
            union U1 l_1316 = {-5L};
            int32_t *l_1317[2][4];
            int i, j;
            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 4; j++)
                    l_1317[i][j] = &l_287;
            }
            (*g_921) ^= (((*l_1311) = l_1309) == (void*)0);
            if ((safe_mul_func_uint8_t_u_u(p_27, (safe_div_func_int32_t_s_s((l_1316 , l_1308), (*p_25))))))
            { 
                (*g_73) = l_1317[1][1];
            }
            else
            { 
                (*g_73) = &p_26;
            }
            return l_1318;
        }
        else
        { 
            int8_t l_1322 = 1L;
            int32_t l_1323 = 0L;
            int32_t l_1327 = 0x3D88B73CL;
            int32_t l_1329 = 0x16033954L;
            int32_t l_1330 = 1L;
            int32_t l_1331 = 0x452E35DEL;
            int32_t l_1332 = 0x7A3C6002L;
            --g_1333[3][0];
            g_1345 = (l_1336 != ((((void*)0 != (*g_451)) == (safe_div_func_uint8_t_u_u(0xEBL, (safe_rshift_func_int8_t_s_s((((p_24 >= (safe_mul_func_int16_t_s_s((&g_116 == &g_55), 0UL))) , (*g_623)) >= 0xE45B1B23D2B3D729LL), 1))))) , l_1336));
        }
    }
    return (**g_1042);
}



static uint64_t  func_35(int32_t  p_36)
{ 
    const int32_t *l_37[2];
    const int32_t **l_38 = &l_37[1];
    int i;
    for (i = 0; i < 2; i++)
        l_37[i] = &g_20;
    (*l_38) = l_37[1];
    return (**l_38);
}



static int32_t  func_59(const uint32_t  p_60, uint16_t  p_61, struct S0  p_62)
{ 
    int16_t l_81 = 0L;
    int8_t *l_82[3][6] = {{&g_83,&g_83,&g_83,&g_83,&g_83,&g_83},{&g_83,&g_83,&g_83,&g_83,&g_83,&g_83},{&g_83,&g_83,&g_83,&g_83,&g_83,&g_83}};
    int32_t l_84 = (-1L);
    int32_t l_92 = (-1L);
    uint16_t l_93[3];
    union U1 *l_104 = &g_97[5];
    int64_t l_126 = 0L;
    int32_t *l_193[4][7] = {{&l_92,&g_20,&l_92,&g_20,&l_92,&l_92,&g_20},{&g_20,(void*)0,(void*)0,&g_20,(void*)0,(void*)0,&g_20},{&l_92,&g_20,(void*)0,(void*)0,&g_20,(void*)0,(void*)0},{&g_20,&g_20,&l_92,&l_92,&g_20,&l_92,&g_20}};
    int32_t **l_192 = &l_193[2][2];
    uint8_t l_198 = 254UL;
    uint8_t *l_203[3];
    int64_t *l_204 = &g_54[2][2];
    int32_t *l_205 = &l_92;
    uint64_t l_210 = 0xA2447EBBD39C2E69LL;
    const int16_t l_229 = 0x6573L;
    int i, j;
    for (i = 0; i < 3; i++)
        l_93[i] = 0x55D2L;
    for (i = 0; i < 3; i++)
        l_203[i] = (void*)0;
    if (((safe_div_func_int16_t_s_s(0x36C2L, (safe_lshift_func_int8_t_s_u(l_81, (l_81 | (((l_84 = l_81) == (g_54[0][4] && (249UL || (safe_lshift_func_uint16_t_u_s((safe_mod_func_uint64_t_u_u((((*g_73) = (void*)0) != (void*)0), g_54[2][1])), g_54[1][4]))))) | 0xD6DF81F9L)))))) , l_81))
    { 
        int32_t *l_89 = &l_84;
        int32_t *l_90 = &l_84;
        int32_t *l_91[2][7] = {{&l_84,&g_53,&l_84,&g_53,&l_84,&g_53,&l_84},{&l_84,&l_84,&l_84,&l_84,&l_84,&l_84,&l_84}};
        union U1 *l_96 = &g_97[3];
        union U1 **l_98 = (void*)0;
        union U1 **l_99 = &l_96;
        int i, j;
        l_84 = (p_60 , 0x4B7C80BFL);
        ++l_93[2];
        (*l_99) = l_96;
        (*g_73) = (void*)0;
        for (l_84 = (-6); (l_84 != 15); l_84 = safe_add_func_int16_t_s_s(l_84, 7))
        { 
            union U1 *l_103 = &g_97[3];
            int32_t **l_109 = &l_91[1][3];
            int16_t *l_110 = &g_97[3].f0;
            uint64_t *l_111 = &g_112[0];
            int32_t l_113 = 0xAF445564L;
            int32_t l_114 = 6L;
            int32_t l_115 = 0x8B99CB9CL;
            (*g_73) = ((p_61 <= (((void*)0 != &l_93[2]) != ((((g_102 = &g_97[2]) != (l_104 = l_103)) >= ((*l_111) = ((l_92 = (safe_add_func_int16_t_s_s((safe_rshift_func_int16_t_s_u(((*l_110) = (&l_91[1][3] != l_109)), l_81)), p_61))) <= (*l_89)))) <= 0L))) , (void*)0);
            --g_116;
            if (l_93[1])
                continue;
        }
    }
    else
    { 
        return p_61;
    }
    for (g_72 = 0; (g_72 >= 9); g_72++)
    { 
        uint64_t *l_122 = &g_112[0];
        uint64_t ** const l_121 = &l_122;
        uint64_t **l_124 = &l_122;
        uint64_t ***l_123 = &l_124;
        int16_t l_125 = 0x285EL;
        union U1 **l_184 = &g_102;
        union U1 ***l_183 = &l_184;
        int32_t *l_185 = &l_84;
        (*l_123) = l_121;
        if (l_125)
        { 
            int32_t *l_127 = &l_84;
            int32_t l_161 = (-1L);
            int32_t l_162[2][1];
            int i, j;
            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 1; j++)
                    l_162[i][j] = (-1L);
            }
            g_128[2][3][3]++;
            for (l_125 = 0; (l_125 < 27); l_125++)
            { 
                uint64_t ***l_135 = &l_124;
                uint64_t ****l_136 = &l_135;
                int32_t l_146[2];
                int32_t *l_157 = &l_146[1];
                int32_t *l_158[6] = {&g_20,&g_20,&g_20,&g_20,&g_20,&g_20};
                int i;
                for (i = 0; i < 2; i++)
                    l_146[i] = 0xA40FDB04L;
                (*l_127) = (safe_mul_func_uint8_t_u_u((((((*l_136) = l_135) != (void*)0) < ((safe_div_func_int32_t_s_s(p_62.f0, (l_146[1] = (safe_div_func_int64_t_s_s((safe_sub_func_int16_t_s_s((safe_lshift_func_int16_t_s_s((&p_61 == (void*)0), g_83)), (((((~p_61) <= 0xA2358462L) , l_146[1]) > g_112[0]) != l_146[1]))), l_146[0]))))) , l_126)) , g_128[1][0][0]), g_97[3].f3));
                for (l_126 = 0; (l_126 >= 12); l_126 = safe_add_func_int8_t_s_s(l_126, 5))
                { 
                    uint32_t l_149 = 4294967289UL;
                    struct S0 *l_153[2][4] = {{(void*)0,&g_76,(void*)0,&g_76},{(void*)0,&g_76,(void*)0,&g_76}};
                    struct S0 **l_152[5][4] = {{&l_153[0][1],&l_153[0][3],&l_153[0][1],&l_153[0][1]},{&l_153[0][3],&l_153[0][3],&l_153[0][2],&l_153[0][3]},{&l_153[0][3],&l_153[0][1],&l_153[0][1],&l_153[0][3]},{&l_153[0][1],&l_153[0][3],&l_153[0][1],&l_153[0][1]},{&l_153[0][3],&l_153[0][3],&l_153[0][2],&l_153[0][3]}};
                    int i, j;
                    l_149++;
                    if (l_149)
                        break;
                    if (p_61)
                        continue;
                    g_154 = &g_76;
                }
                for (l_126 = (-16); (l_126 <= (-24)); l_126--)
                { 
                    return l_146[1];
                }
                ++g_163;
            }
        }
        else
        { 
            const int16_t *l_166 = &l_81;
            const struct S0 *l_170 = &g_76;
            const struct S0 ** const l_169 = &l_170;
            union U1 *l_171 = &g_97[3];
            int32_t *l_172 = &l_92;
            int32_t l_173 = (-1L);
            l_173 ^= ((*l_172) = (((((void*)0 != l_166) > ((l_169 != &g_154) != (l_171 == l_171))) , &g_112[0]) != (*l_121)));
        }
        (*l_185) ^= (((&l_104 == ((*l_183) = (((&g_154 != &g_154) , (safe_add_func_uint16_t_u_u(((safe_rshift_func_uint8_t_u_u(g_159[3], 1)) != g_83), (((safe_rshift_func_int16_t_s_u((safe_lshift_func_int8_t_s_s(p_60, 2)), ((((l_125 , 0xD0EBFA9BL) ^ l_125) & g_182) , g_97[3].f3))) == 0x74L) , l_125)))) , &g_102))) | g_72) > l_92);
    }
    (*l_205) &= (safe_lshift_func_uint16_t_u_u((((*l_204) = (safe_div_func_uint16_t_u_u(((1UL || ((l_84 = (safe_lshift_func_int8_t_s_s(((g_20 & p_60) & ((*g_73) == ((*l_192) = &l_84))), 3))) && (((safe_add_func_int16_t_s_s((safe_mod_func_uint8_t_u_u((l_198 , (g_128[2][3][3] = (safe_mul_func_int8_t_s_s(((g_97[3].f0 = ((safe_rshift_func_int16_t_s_s(p_61, p_60)) >= g_182)) ^ g_159[4]), p_61)))), p_61)), p_62.f0)) < g_182) ^ 9L))) <= 0UL), g_112[0]))) || g_20), p_62.f0));
    for (g_76.f0 = 0; (g_76.f0 != 7); g_76.f0 = safe_add_func_uint16_t_u_u(g_76.f0, 1))
    { 
        int8_t * const l_216 = (void*)0;
        int32_t l_217[5] = {(-10L),(-10L),(-10L),(-10L),(-10L)};
        int8_t *l_224 = &g_159[3];
        int i;
        for (l_84 = 20; (l_84 > (-13)); --l_84)
        { 
            uint32_t l_211 = 0x03E92686L;
            int8_t **l_225[3][3] = {{&l_82[1][1],&l_82[1][1],&l_82[1][1]},{&l_82[1][1],&l_82[0][3],&l_82[1][1]},{&l_82[1][1],&l_82[1][1],&l_82[1][1]}};
            uint64_t *l_227 = &l_210;
            int32_t l_228 = 1L;
            int32_t l_245 = 0xE760C5D1L;
            int32_t *l_251 = &l_217[1];
            int i, j;
            l_211 ^= l_210;
            (*l_205) &= (((g_163 = ((((((((((safe_div_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u(253UL, (((&g_159[5] == l_216) , l_217[1]) < (safe_lshift_func_int16_t_s_u((safe_mod_func_int32_t_s_s((l_228 ^= (safe_add_func_uint16_t_u_u(g_47, (((*l_227) = ((g_226 = (p_60 , ((&g_182 != &g_72) , l_224))) == l_203[1])) != 0L)))), p_61)), 2))))), 65530UL)) , p_61) | 18446744073709551615UL) && 0x31L) != p_61) != g_97[3].f3) | 0x51AD0A0FL) , 0xF0EAL) > 6UL) || p_62.f0)) , 0x7DE1560BL) >= g_112[0]);
            if (l_217[0])
            { 
                int32_t l_230 = 1L;
                int32_t l_239 = 1L;
                int32_t l_240 = 1L;
                int32_t l_242[7][5] = {{0x8EAD1417L,0x13D90FEAL,0xF52C73AEL,8L,0x81B1BC71L},{0L,0xFC68CC67L,0xFC68CC67L,0L,0x1733CD63L},{1L,0L,0xF52C73AEL,0x81B1BC71L,0x13D90FEAL},{1L,0xF52C73AEL,0x1733CD63L,0xF52C73AEL,1L},{0L,8L,0x8EAD1417L,0x81B1BC71L,0xFC68CC67L},{0x8EAD1417L,8L,0L,0L,8L},{0x1733CD63L,0xF52C73AEL,1L,8L,0xFC68CC67L}};
                int i, j;
                l_230 = (p_60 , l_229);
                for (l_81 = 0; l_81 < 3; l_81 += 1)
                {
                    for (g_116 = 0; g_116 < 3; g_116 += 1)
                    {
                        l_225[l_81][g_116] = &l_82[1][1];
                    }
                }
                (*l_205) |= (safe_rshift_func_int16_t_s_u((0x5F2194A6FF7F1617LL | ((~(((0x76L | (safe_add_func_int64_t_s_s((((*l_227) = (g_112[0] || p_62.f0)) > (safe_rshift_func_int16_t_s_u(0x94B5L, 8))), 1L))) , (*g_102)) , 0x6E04B37AL)) ^ l_230)), 4));
                ++g_246;
                return l_245;
            }
            else
            { 
                int16_t l_253 = 9L;
                for (l_245 = 13; (l_245 > 5); --l_245)
                { 
                    if (p_60)
                        break;
                    l_251 = (*g_73);
                }
                g_252 = p_60;
                l_253 = (&l_126 != (void*)0);
            }
            for (g_72 = 24; (g_72 >= 12); --g_72)
            { 
                const int16_t l_273 = 7L;
                for (g_241 = 0; (g_241 <= 2); g_241 += 1)
                { 
                    int32_t *l_256 = &g_97[3].f2;
                    int32_t *l_257 = &g_97[3].f2;
                    int32_t *l_258 = &g_238;
                    int32_t l_263[7];
                    int32_t l_272 = 0x8F8EAD33L;
                    int i, j;
                    for (i = 0; i < 7; i++)
                        l_263[i] = 0x14CE292EL;
                    (*l_205) &= ((((*l_258) ^= 0xB458D056L) , (safe_rshift_func_uint8_t_u_u((g_128[4][3][1] = (safe_mod_func_int8_t_s_s(l_263[3], (safe_add_func_uint64_t_u_u(1UL, ((((p_62.f0 && ((l_217[0] ^ ((l_228 = (safe_mod_func_uint8_t_u_u((((safe_mul_func_uint16_t_u_u((safe_mod_func_int8_t_s_s((*g_226), (((l_272 = (g_163 , g_163)) & 2UL) ^ p_62.f0))), 0x6994L)) >= 0xA5D5L) | 4L), l_273))) >= p_62.f0)) || g_54[2][3])) <= 65535UL) | p_60) < 0L)))))), 4))) , p_61);
                }
                (*l_205) = 1L;
            }
        }
    }
    return p_62.f0;
}



static int64_t  func_65(uint16_t * p_66, int32_t * p_67, uint8_t  p_68, int32_t ** p_69)
{ 
    int32_t *l_75 = &g_53;
    (*g_73) = (void*)0;
    (*p_69) = l_75;
    return g_54[2][3];
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_20, "g_20", print_hash_value);
    transparent_crc(g_47, "g_47", print_hash_value);
    transparent_crc(g_53, "g_53", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_54[i][j], "g_54[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_55, "g_55", print_hash_value);
    transparent_crc(g_72, "g_72", print_hash_value);
    transparent_crc(g_76.f0, "g_76.f0", print_hash_value);
    transparent_crc(g_83, "g_83", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_97[i].f0, "g_97[i].f0", print_hash_value);
        transparent_crc(g_97[i].f3, "g_97[i].f3", print_hash_value);

    }
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_112[i], "g_112[i]", print_hash_value);

    }
    transparent_crc(g_116, "g_116", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_128[i][j][k], "g_128[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_159[i], "g_159[i]", print_hash_value);

    }
    transparent_crc(g_160, "g_160", print_hash_value);
    transparent_crc(g_163, "g_163", print_hash_value);
    transparent_crc(g_182, "g_182", print_hash_value);
    transparent_crc(g_238, "g_238", print_hash_value);
    transparent_crc(g_241, "g_241", print_hash_value);
    transparent_crc(g_243, "g_243", print_hash_value);
    transparent_crc(g_244, "g_244", print_hash_value);
    transparent_crc(g_246, "g_246", print_hash_value);
    transparent_crc(g_252, "g_252", print_hash_value);
    transparent_crc(g_284, "g_284", print_hash_value);
    transparent_crc(g_285, "g_285", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_288[i][j], "g_288[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_293, "g_293", print_hash_value);
    transparent_crc(g_295, "g_295", print_hash_value);
    transparent_crc(g_296, "g_296", print_hash_value);
    transparent_crc(g_311, "g_311", print_hash_value);
    transparent_crc(g_324, "g_324", print_hash_value);
    transparent_crc(g_325, "g_325", print_hash_value);
    transparent_crc(g_326, "g_326", print_hash_value);
    transparent_crc(g_366, "g_366", print_hash_value);
    transparent_crc(g_386, "g_386", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 7; k++)
            {
                transparent_crc(g_387[i][j][k], "g_387[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_412, "g_412", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_526[i][j], "g_526[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_531, "g_531", print_hash_value);
    transparent_crc(g_632, "g_632", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_666[i], "g_666[i]", print_hash_value);

    }
    transparent_crc(g_684, "g_684", print_hash_value);
    transparent_crc(g_685, "g_685", print_hash_value);
    transparent_crc(g_709, "g_709", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_710[i], "g_710[i]", print_hash_value);

    }
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_712[i], "g_712[i]", print_hash_value);

    }
    transparent_crc(g_764, "g_764", print_hash_value);
    transparent_crc(g_786, "g_786", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_788[i][j][k], "g_788[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_844, "g_844", print_hash_value);
    transparent_crc(g_902, "g_902", print_hash_value);
    transparent_crc(g_1035, "g_1035", print_hash_value);
    transparent_crc(g_1134, "g_1134", print_hash_value);
    transparent_crc(g_1156, "g_1156", print_hash_value);
    transparent_crc(g_1162, "g_1162", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_1214[i], "g_1214[i]", print_hash_value);

    }
    transparent_crc(g_1267, "g_1267", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_1333[i][j], "g_1333[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_1345, "g_1345", print_hash_value);
    transparent_crc(g_1505, "g_1505", print_hash_value);
    transparent_crc(g_1527, "g_1527", print_hash_value);
    transparent_crc(g_1669, "g_1669", print_hash_value);
    transparent_crc(g_1706, "g_1706", print_hash_value);
    transparent_crc(g_1910, "g_1910", print_hash_value);
    transparent_crc(g_2116, "g_2116", print_hash_value);
    transparent_crc(g_2172, "g_2172", print_hash_value);
    transparent_crc(g_2261, "g_2261", print_hash_value);
    transparent_crc(g_2338, "g_2338", print_hash_value);
    transparent_crc(g_2538, "g_2538", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_2572[i][j][k], "g_2572[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_2749, "g_2749", print_hash_value);
    transparent_crc(g_2811, "g_2811", print_hash_value);
    transparent_crc(g_2878, "g_2878", print_hash_value);
    transparent_crc(g_2933, "g_2933", print_hash_value);
    transparent_crc(g_2956, "g_2956", print_hash_value);
    transparent_crc(g_2965, "g_2965", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_3059[i], "g_3059[i]", print_hash_value);

    }
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
