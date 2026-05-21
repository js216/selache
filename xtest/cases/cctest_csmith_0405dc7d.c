// SPDX-License-Identifier: MIT
// cctest_csmith_0405dc7d.c --- cctest case csmith_0405dc7d (csmith seed 67492989)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xd1f001c8 */

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

// Options:   -s 67492989 -o /tmp/csmith_gen_n0yc6w57/csmith.c --concise --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   int32_t  f0;
   const int8_t  f1;
   int8_t  f2;
   int32_t  f3;
};
#pragma pack(pop)

union U1 {
   uint16_t  f0;
};

union U2 {
   struct S0  f0;
   int8_t * const  f1;
   struct S0  f2;
};

union U3 {
   struct S0  f0;
   struct S0  f1;
};


static int32_t g_3 = 0x1C0F8067L;
static int8_t g_6[3][3][1] = {{{0x3EL},{0x1EL},{0x3EL}},{{0x1EL},{0x3EL},{0x1EL}},{{0x3EL},{0x1EL},{0x3EL}}};
static uint64_t g_7 = 0x59008CF5A8B060D2LL;
static uint16_t g_50 = 0xB300L;
static union U2 g_53 = {{0L,0x69L,1L,1L}};
static int32_t *g_57 = (void*)0;
static int32_t **g_56 = &g_57;
static uint32_t g_66 = 0xF5EAD4A2L;
static struct S0 *g_74 = (void*)0;
static struct S0 g_76[6] = {{0L,0xB6L,-2L,1L},{0L,0xB6L,-2L,1L},{0L,0xB6L,-2L,1L},{0L,0xB6L,-2L,1L},{0L,0xB6L,-2L,1L},{0L,0xB6L,-2L,1L}};
static union U3 g_91 = {{8L,1L,0x0DL,0x9BE8BA66L}};
static int16_t g_104 = (-2L);
static int16_t g_106[3][7][6] = {{{0x32E7L,1L,0x32E7L,0x3DC2L,0xF545L,0x3DC2L},{(-1L),1L,(-1L),0x3DC2L,1L,0x3DC2L},{0x32E7L,1L,0x32E7L,0x3DC2L,0xF545L,0x3DC2L},{(-1L),1L,(-1L),0x3DC2L,1L,0x3DC2L},{0x32E7L,1L,0x32E7L,0x3DC2L,0xF545L,0x3DC2L},{(-1L),0x3DC2L,0xA8D5L,1L,(-1L),1L},{(-1L),0x3DC2L,(-1L),1L,0x32E7L,1L}},{{0xA8D5L,0x3DC2L,0xA8D5L,1L,(-1L),1L},{(-1L),0x3DC2L,(-1L),1L,0x32E7L,1L},{0xA8D5L,0x3DC2L,0xA8D5L,1L,(-1L),1L},{(-1L),0x3DC2L,(-1L),1L,0x32E7L,1L},{0xA8D5L,0x3DC2L,0xA8D5L,1L,(-1L),1L},{(-1L),0x3DC2L,(-1L),1L,0x32E7L,1L},{0xA8D5L,0x3DC2L,0xA8D5L,1L,(-1L),1L}},{{(-1L),0x3DC2L,(-1L),1L,0x32E7L,1L},{0xA8D5L,0x3DC2L,0xA8D5L,1L,(-1L),1L},{(-1L),0x3DC2L,(-1L),1L,0x32E7L,1L},{0xA8D5L,0x3DC2L,0xA8D5L,1L,(-1L),1L},{(-1L),0x3DC2L,(-1L),1L,0x32E7L,1L},{0xA8D5L,0x3DC2L,0xA8D5L,1L,(-1L),1L},{(-1L),0x3DC2L,(-1L),1L,0x32E7L,1L}}};
static const int16_t *g_105 = &g_106[2][2][1];
static uint64_t g_108[5] = {0x7AD53B930988C8CFLL,0x7AD53B930988C8CFLL,0x7AD53B930988C8CFLL,0x7AD53B930988C8CFLL,0x7AD53B930988C8CFLL};
static uint16_t *g_146 = &g_50;
static uint16_t **g_145 = &g_146;
static uint8_t g_169 = 247UL;
static int64_t g_171 = 0xB009034FE3EFB5F1LL;
static int32_t **g_214[4][5][7] = {{{&g_57,&g_57,(void*)0,&g_57,&g_57,&g_57,&g_57},{&g_57,&g_57,&g_57,(void*)0,&g_57,&g_57,(void*)0},{&g_57,&g_57,&g_57,&g_57,&g_57,&g_57,&g_57},{&g_57,&g_57,&g_57,(void*)0,&g_57,&g_57,&g_57},{&g_57,&g_57,&g_57,&g_57,&g_57,&g_57,&g_57}},{{&g_57,&g_57,&g_57,&g_57,&g_57,&g_57,(void*)0},{&g_57,&g_57,&g_57,&g_57,&g_57,&g_57,&g_57},{&g_57,&g_57,&g_57,&g_57,&g_57,&g_57,&g_57},{&g_57,&g_57,(void*)0,&g_57,(void*)0,&g_57,&g_57},{&g_57,(void*)0,&g_57,&g_57,&g_57,&g_57,&g_57}},{{&g_57,&g_57,&g_57,&g_57,&g_57,&g_57,(void*)0},{(void*)0,&g_57,&g_57,&g_57,&g_57,&g_57,&g_57},{&g_57,&g_57,(void*)0,&g_57,(void*)0,&g_57,&g_57},{&g_57,&g_57,&g_57,&g_57,&g_57,&g_57,&g_57},{&g_57,&g_57,&g_57,&g_57,&g_57,&g_57,&g_57}},{{&g_57,(void*)0,&g_57,(void*)0,&g_57,&g_57,&g_57},{&g_57,&g_57,(void*)0,&g_57,&g_57,&g_57,(void*)0},{(void*)0,&g_57,&g_57,(void*)0,&g_57,&g_57,(void*)0},{&g_57,(void*)0,(void*)0,&g_57,&g_57,&g_57,(void*)0},{&g_57,&g_57,&g_57,&g_57,&g_57,&g_57,(void*)0}}};
static int32_t * const *g_217[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
static int32_t * const **g_216 = &g_217[4];
static uint32_t g_222[5][2][5] = {{{5UL,5UL,0x5F54F327L,0x9C278213L,0UL},{4294967295UL,4294967290UL,0x5F54F327L,4294967295UL,4294967295UL}},{{4294967295UL,0x5F54F327L,0UL,0x5F54F327L,4294967295UL},{0x9C278213L,4294967290UL,0UL,4294967295UL,5UL}},{{0x9C278213L,5UL,4294967295UL,9UL,9UL},{4294967295UL,0xE53523AFL,4294967295UL,4294967290UL,5UL}},{{4294967295UL,9UL,5UL,4294967290UL,4294967295UL},{5UL,4294967295UL,9UL,9UL,4294967295UL}},{{4294967295UL,7UL,5UL,4294967295UL,0UL},{0xE53523AFL,7UL,4294967295UL,0x5F54F327L,0UL}}};
static uint32_t g_248[3][4][6] = {{{0xF45283C7L,9UL,4294967295UL,3UL,0xDAC85E21L,0x479F018CL},{0x74CCDA9BL,0x479F018CL,0xBD15F0D2L,9UL,0xBD15F0D2L,0x479F018CL},{0xBD15F0D2L,4294967293UL,4294967295UL,9UL,0xB8EACD4FL,3UL},{0xBD15F0D2L,0UL,0xB8EACD4FL,9UL,0xAD85E001L,9UL}},{{0x74CCDA9BL,0UL,0x74CCDA9BL,3UL,0xB8EACD4FL,9UL},{0xF45283C7L,4294967293UL,0x74CCDA9BL,0x479F018CL,0xBD15F0D2L,9UL},{0xDAC85E21L,0x479F018CL,0xB8EACD4FL,0x479F018CL,0xDAC85E21L,3UL},{0xF45283C7L,9UL,4294967295UL,3UL,0xDAC85E21L,0x479F018CL}},{{0x74CCDA9BL,0x479F018CL,0xBD15F0D2L,9UL,0xBD15F0D2L,0x479F018CL},{0xBD15F0D2L,4294967293UL,4294967295UL,9UL,0xB8EACD4FL,3UL},{0xBD15F0D2L,0UL,0xB8EACD4FL,9UL,0xAD85E001L,9UL},{0x74CCDA9BL,0UL,0x74CCDA9BL,3UL,0xB8EACD4FL,9UL}}};
static uint16_t g_251 = 0x6FBEL;
static union U1 g_267 = {0UL};
static union U2 g_281 = {{0xFE0DA037L,0xBBL,1L,1L}};
static union U2 *g_280 = &g_281;
static union U3 *g_283[6] = {&g_91,&g_91,&g_91,&g_91,&g_91,&g_91};
static union U3 **g_282 = &g_283[3];
static int16_t g_400 = 0x1FB6L;
static uint32_t g_542 = 0x10600CB6L;
static int8_t *g_628 = &g_6[2][1][0];
static int8_t ** const g_627 = &g_628;
static uint16_t ***g_675 = &g_145;
static uint16_t ****g_674 = &g_675;
static uint16_t *****g_673[4] = {&g_674,&g_674,&g_674,&g_674};
static int32_t ** const *g_732 = &g_56;
static int32_t ** const **g_731 = &g_732;
static int32_t ** const ***g_730 = &g_731;
static struct S0 g_738[6] = {{1L,1L,0L,1L},{0x43D3341AL,7L,1L,-6L},{1L,1L,0L,1L},{1L,1L,0L,1L},{1L,1L,0L,1L},{0xD4901699L,-7L,-5L,-1L}};
static int64_t g_762 = 0L;
static const uint16_t *g_773 = &g_251;
static const uint16_t **g_772 = &g_773;
static int32_t *g_791[1][4] = {{&g_281.f2.f0,&g_281.f2.f0,&g_281.f2.f0,&g_281.f2.f0}};
static int16_t *g_862 = (void*)0;
static int16_t **g_861 = &g_862;
static int16_t ***g_860 = &g_861;
static union U1 *g_950[7][3] = {{&g_267,&g_267,&g_267},{&g_267,&g_267,&g_267},{&g_267,&g_267,&g_267},{&g_267,&g_267,&g_267},{&g_267,&g_267,&g_267},{&g_267,&g_267,&g_267},{&g_267,&g_267,&g_267}};
static union U1 **g_949 = &g_950[1][0];
static int32_t ***g_1001 = &g_214[2][3][6];
static int32_t ****g_1000 = &g_1001;
static uint8_t *g_1174 = &g_169;
static uint8_t * const *g_1173 = &g_1174;
static uint8_t * const **g_1172 = &g_1173;
static int64_t *g_1248 = (void*)0;
static uint32_t *g_1262 = &g_542;
static uint32_t **g_1261 = &g_1262;
static uint32_t *** const g_1260 = &g_1261;
static int32_t g_1268 = 0L;
static int32_t g_1411 = 0xB9853913L;
static uint8_t **g_1456 = &g_1174;
static int64_t **g_1477 = &g_1248;
static union U3 ***g_1479 = (void*)0;
static union U3 ****g_1478 = &g_1479;
static uint16_t *****g_1481 = (void*)0;
static uint32_t g_1595 = 1UL;
static int32_t *g_1609 = &g_3;
static uint64_t g_1674 = 0xF7EFEEA42AAA9AB9LL;
static uint64_t g_1753 = 0xD4E73D1797BD66FBLL;
static const union U3 g_1766 = {{-6L,0x73L,0x4BL,-1L}};
static const union U3 *g_1765 = &g_1766;
static struct S0 **g_1801 = &g_74;
static struct S0 ***g_1800[7] = {&g_1801,&g_1801,(void*)0,&g_1801,&g_1801,(void*)0,&g_1801};
static int32_t g_1857 = (-1L);
static int8_t g_1914[7][6] = {{0L,0xB7L,0xB7L,0L,0xB7L,0xB7L},{0L,0xB7L,0xB7L,0L,0xB7L,0xB7L},{0L,0xB7L,0xB7L,0L,0xB7L,0xB7L},{0L,0xB7L,0xB7L,0L,0xB7L,0xB7L},{0L,0xB7L,0xB7L,0L,0xB7L,0xB7L},{0L,0xB7L,0xB7L,0L,0xB7L,0xB7L},{0L,0xB7L,0xB7L,0L,0xB7L,0xB7L}};
static int32_t g_1954 = 0x5DAACE24L;
static int8_t ***g_2094 = (void*)0;
static const int32_t *g_2124[7][2][6] = {{{(void*)0,&g_3,&g_53.f0.f0,&g_91.f1.f0,&g_281.f0.f0,&g_1766.f0.f0},{&g_281.f0.f0,&g_281.f2.f0,&g_76[1].f0,&g_281.f0.f0,&g_1766.f0.f0,&g_91.f1.f0}},{{&g_281.f0.f0,&g_281.f2.f0,&g_91.f1.f0,&g_1766.f1.f0,&g_281.f0.f0,&g_1954},{(void*)0,&g_3,&g_738[3].f0,&g_281.f0.f0,&g_53.f0.f0,&g_281.f0.f0}},{{&g_1766.f0.f0,&g_53.f0.f0,&g_91.f1.f0,&g_91.f1.f0,&g_53.f0.f0,&g_1766.f0.f0},{(void*)0,&g_1954,(void*)0,&g_1766.f0.f0,&g_1766.f0.f0,(void*)0}},{{&g_1766.f0.f0,(void*)0,&g_281.f0.f0,&g_1766.f0.f0,&g_91.f1.f0,(void*)0},{&g_1766.f0.f0,&g_53.f0.f0,&g_1766.f0.f0,&g_1766.f0.f0,&g_1954,&g_3}},{{(void*)0,&g_1766.f0.f0,&g_1954,&g_91.f1.f0,&g_281.f0.f0,&g_91.f1.f0},{&g_1766.f0.f0,&g_281.f0.f0,&g_53.f0.f0,&g_281.f0.f0,&g_1766.f0.f0,&g_1766.f1.f0}},{{(void*)0,&g_281.f0.f0,&g_1766.f0.f0,&g_1766.f1.f0,(void*)0,&g_1766.f0.f0},{&g_281.f0.f0,&g_1766.f0.f0,&g_3,&g_281.f0.f0,(void*)0,&g_1766.f0.f0}},{{&g_281.f0.f0,&g_53.f0.f0,&g_1766.f0.f0,&g_91.f1.f0,&g_3,&g_1766.f1.f0},{(void*)0,&g_281.f0.f0,&g_53.f0.f0,(void*)0,&g_91.f1.f0,&g_91.f1.f0}}};
static int8_t g_2132 = 0L;
static int8_t *g_2157 = &g_76[1].f2;
static uint8_t *g_2158 = &g_169;
static uint8_t g_2175 = 0x2DL;
static union U2 g_2214[2][5] = {{{{1L,-4L,-1L,0xA782F191L}},{{0x1D065DB9L,0x22L,-1L,0x07F0BAC4L}},{{1L,-4L,-1L,0xA782F191L}},{{0x1D065DB9L,0x22L,-1L,0x07F0BAC4L}},{{1L,-4L,-1L,0xA782F191L}}},{{{0x3DD6E15BL,0x01L,0xEBL,0xBB639F80L}},{{0x3DD6E15BL,0x01L,0xEBL,0xBB639F80L}},{{0x3DD6E15BL,0x01L,0xEBL,0xBB639F80L}},{{0x3DD6E15BL,0x01L,0xEBL,0xBB639F80L}},{{0x3DD6E15BL,0x01L,0xEBL,0xBB639F80L}}}};
static uint32_t g_2259 = 0xEA093EA4L;
static int32_t *** const *g_2324 = &g_1001;
static int32_t *** const **g_2323 = &g_2324;
static int32_t *****g_2326 = &g_1000;
static int32_t g_2327 = 1L;
static int16_t g_2361 = 0xD4EFL;
static union U2 **g_2421 = &g_280;
static union U2 ***g_2420 = &g_2421;
static uint16_t *****g_2429 = &g_674;
static const int32_t g_2431 = 9L;



static uint16_t  func_1(void);
static int32_t  func_10(uint32_t  p_11, struct S0  p_12, uint32_t  p_13);
static uint32_t  func_14(int32_t * p_15, int32_t * p_16, int32_t * p_17, uint32_t  p_18);
static int32_t * func_19(int8_t * p_20, uint64_t  p_21, uint64_t  p_22);
static int8_t * func_23(int8_t  p_24, int8_t * p_25, int32_t  p_26);
static int8_t * func_27(int32_t * p_28, uint16_t  p_29);
static int32_t * func_30(int64_t  p_31, int32_t * p_32, int8_t * p_33, uint16_t  p_34, const int8_t * p_35);
static int8_t * func_37(int32_t * p_38, union U2  p_39, struct S0  p_40, union U2  p_41);




static uint16_t  func_1(void)
{ 
    int32_t *l_2 = &g_3;
    int32_t *l_4 = (void*)0;
    int32_t *l_5[5];
    int32_t **l_36 = &l_4;
    uint16_t *l_47 = (void*)0;
    uint16_t *l_48 = (void*)0;
    uint16_t *l_49[6][4][1] = {{{&g_50},{&g_50},{&g_50},{&g_50}},{{&g_50},{&g_50},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{&g_50},{&g_50}},{{&g_50},{&g_50},{&g_50},{&g_50}},{{&g_50},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{&g_50},{&g_50}}};
    int32_t l_51 = 0x7AD11E75L;
    union U2 l_52 = {{0L,0xF1L,0x1EL,0x14356E3FL}};
    uint32_t l_523 = 0xC1C27BE0L;
    int16_t l_549 = 0L;
    int16_t ***l_1382 = &g_861;
    int64_t *l_1392 = &g_762;
    int32_t l_1413 = 0L;
    const int32_t *l_1433 = &l_52.f2.f0;
    union U3 l_1439 = {{7L,-2L,0x8CL,-10L}};
    int64_t l_1505 = (-5L);
    uint32_t l_1526 = 18446744073709551615UL;
    int8_t l_1573 = (-9L);
    uint16_t *****l_1583 = &g_674;
    int8_t *l_1612[7][6][4] = {{{&g_6[1][2][0],&g_281.f0.f2,&g_53.f2.f2,&g_91.f0.f2},{&g_281.f0.f2,(void*)0,&g_91.f1.f2,&g_281.f0.f2},{&g_738[3].f2,&g_6[1][2][0],&g_91.f0.f2,&g_281.f0.f2},{(void*)0,(void*)0,(void*)0,&g_91.f0.f2},{&g_6[1][1][0],&g_281.f0.f2,&g_6[1][2][0],&g_6[1][1][0]},{&g_738[3].f2,&g_91.f0.f2,&g_53.f2.f2,&g_281.f0.f2}},{{&g_91.f0.f2,(void*)0,&g_53.f2.f2,&g_53.f2.f2},{&g_738[3].f2,&g_738[3].f2,&g_6[1][2][0],&g_281.f0.f2},{&g_6[1][1][0],&l_1573,(void*)0,&g_281.f0.f2},{(void*)0,&g_281.f0.f2,&g_91.f0.f2,(void*)0},{&g_738[3].f2,&g_281.f0.f2,&g_91.f1.f2,&g_281.f0.f2},{&g_281.f0.f2,&l_1573,&g_53.f2.f2,&g_281.f0.f2}},{{&g_6[1][2][0],&g_738[3].f2,&g_91.f0.f2,&g_53.f2.f2},{&g_6[1][1][0],(void*)0,&g_6[1][2][0],&g_281.f0.f2},{&g_6[1][1][0],&g_91.f0.f2,&g_91.f0.f2,&g_6[1][1][0]},{&g_6[1][2][0],&g_281.f0.f2,&g_53.f2.f2,&g_91.f0.f2},{&g_281.f0.f2,(void*)0,&g_91.f1.f2,&g_281.f0.f2},{&g_738[3].f2,&g_6[1][2][0],&g_91.f0.f2,&g_281.f0.f2}},{{(void*)0,(void*)0,(void*)0,&g_91.f0.f2},{&g_6[1][1][0],&g_281.f0.f2,&g_6[1][2][0],&g_6[1][1][0]},{&g_738[3].f2,&g_91.f0.f2,&g_53.f2.f2,&g_281.f0.f2},{&g_91.f0.f2,(void*)0,&g_53.f2.f2,&g_53.f2.f2},{&g_738[3].f2,&g_738[3].f2,&g_6[1][2][0],&g_281.f0.f2},{&g_6[1][1][0],&l_1573,(void*)0,&g_281.f0.f2}},{{(void*)0,&g_281.f0.f2,&g_91.f0.f2,(void*)0},{&g_738[3].f2,&g_281.f0.f2,&g_91.f1.f2,&g_281.f0.f2},{&g_281.f0.f2,&l_1573,&g_53.f2.f2,&g_281.f0.f2},{&g_6[1][2][0],&g_738[3].f2,&g_91.f0.f2,&g_53.f2.f2},{&g_6[1][1][0],(void*)0,&g_6[1][2][0],&g_281.f0.f2},{&g_6[1][1][0],&g_91.f0.f2,&g_91.f0.f2,&g_6[1][1][0]}},{{&g_6[1][2][0],&g_281.f0.f2,&g_53.f2.f2,&g_91.f0.f2},{&g_281.f0.f2,(void*)0,&g_91.f1.f2,&g_281.f0.f2},{&g_738[3].f2,&g_6[1][2][0],&g_91.f0.f2,&g_281.f0.f2},{(void*)0,(void*)0,(void*)0,&g_91.f0.f2},{&g_6[1][1][0],&g_281.f0.f2,&g_6[1][2][0],&g_6[1][1][0]},{&g_738[3].f2,&g_91.f0.f2,&g_53.f2.f2,&g_281.f0.f2}},{{&g_91.f0.f2,(void*)0,&g_53.f2.f2,&g_53.f2.f2},{&g_738[3].f2,&g_738[3].f2,&g_6[1][2][0],&g_281.f0.f2},{&g_6[1][1][0],&l_1573,(void*)0,&g_281.f0.f2},{(void*)0,&g_281.f0.f2,&g_91.f0.f2,(void*)0},{&g_738[3].f2,&g_281.f0.f2,&g_91.f1.f2,&g_281.f0.f2},{&g_281.f0.f2,&l_1573,&g_53.f2.f2,&g_281.f0.f2}}};
    int32_t l_1667 = 1L;
    int32_t l_1714 = 1L;
    union U1 l_1732 = {0xF50BL};
    uint16_t l_1752 = 1UL;
    int32_t l_1767 = 1L;
    uint32_t l_1769 = 0x8DE9408BL;
    uint16_t *****l_1818[5][5][5] = {{{&g_674,&g_674,&g_674,&g_674,&g_674},{&g_674,&g_674,&g_674,&g_674,&g_674},{&g_674,&g_674,&g_674,&g_674,&g_674},{&g_674,&g_674,&g_674,&g_674,&g_674},{&g_674,&g_674,&g_674,&g_674,(void*)0}},{{&g_674,&g_674,&g_674,&g_674,(void*)0},{&g_674,&g_674,&g_674,&g_674,&g_674},{&g_674,&g_674,(void*)0,&g_674,(void*)0},{&g_674,&g_674,&g_674,&g_674,&g_674},{&g_674,&g_674,(void*)0,&g_674,&g_674}},{{&g_674,&g_674,&g_674,(void*)0,(void*)0},{&g_674,&g_674,&g_674,(void*)0,&g_674},{&g_674,&g_674,&g_674,&g_674,(void*)0},{&g_674,&g_674,&g_674,&g_674,(void*)0},{&g_674,&g_674,&g_674,&g_674,(void*)0}},{{&g_674,&g_674,&g_674,&g_674,&g_674},{&g_674,&g_674,(void*)0,&g_674,(void*)0},{&g_674,&g_674,&g_674,&g_674,&g_674},{&g_674,&g_674,(void*)0,&g_674,&g_674},{&g_674,&g_674,&g_674,(void*)0,(void*)0}},{{&g_674,&g_674,&g_674,(void*)0,&g_674},{&g_674,&g_674,&g_674,&g_674,(void*)0},{&g_674,&g_674,&g_674,&g_674,(void*)0},{&g_674,&g_674,&g_674,&g_674,(void*)0},{&g_674,&g_674,&g_674,&g_674,&g_674}}};
    int64_t l_1839 = 9L;
    const uint32_t l_1841 = 0UL;
    uint16_t l_1855 = 1UL;
    union U1 *l_1867 = &g_267;
    int64_t l_1891 = 0L;
    uint64_t l_1897 = 0x17526A6DF2BF77BELL;
    int16_t l_1907 = 0xE4C2L;
    uint8_t **l_1923 = &g_1174;
    int32_t l_1924 = 0xD9D00EB1L;
    int32_t l_1974[4] = {0x782E542DL,0x782E542DL,0x782E542DL,0x782E542DL};
    int32_t l_2041[7];
    uint32_t l_2066 = 4294967295UL;
    const uint32_t l_2073 = 4294967295UL;
    int16_t ** const *l_2079 = (void*)0;
    int64_t l_2114 = 0xB1FA08056DBD44B8LL;
    int16_t l_2133 = (-1L);
    const int64_t l_2143 = 0x585582F258A23D3DLL;
    int64_t l_2151 = 0x0283CA1859AE7ECALL;
    uint32_t l_2160 = 0x3146B3D8L;
    const uint16_t ****l_2171 = (void*)0;
    uint64_t l_2192 = 0UL;
    union U2 *l_2213 = &g_2214[0][4];
    const union U2 *l_2236 = (void*)0;
    const union U2 * const *l_2235 = &l_2236;
    uint8_t l_2256 = 1UL;
    int64_t l_2313 = 0xFB3CCEB7EDC9179ALL;
    uint64_t l_2315 = 18446744073709551615UL;
    int32_t *****l_2325 = (void*)0;
    int8_t *l_2353 = &g_281.f0.f2;
    int64_t ***l_2375 = &g_1477;
    union U2 ***l_2422 = &g_2421;
    int8_t l_2430 = 7L;
    uint64_t l_2434 = 0x1314E473470AD2DALL;
    uint16_t ** const *l_2451[7][7][4] = {{{&g_145,&g_145,&g_145,&g_145},{&g_145,&g_145,&g_145,&g_145},{&g_145,&g_145,&g_145,&g_145},{&g_145,&g_145,&g_145,&g_145},{&g_145,&g_145,&g_145,&g_145},{&g_145,&g_145,&g_145,&g_145},{&g_145,&g_145,&g_145,&g_145}},{{&g_145,&g_145,&g_145,&g_145},{&g_145,&g_145,&g_145,&g_145},{&g_145,&g_145,&g_145,&g_145},{&g_145,&g_145,&g_145,&g_145},{&g_145,&g_145,&g_145,&g_145},{&g_145,&g_145,&g_145,&g_145},{&g_145,&g_145,&g_145,&g_145}},{{&g_145,&g_145,&g_145,&g_145},{&g_145,&g_145,&g_145,&g_145},{&g_145,&g_145,&g_145,&g_145},{&g_145,&g_145,&g_145,&g_145},{&g_145,&g_145,&g_145,&g_145},{&g_145,&g_145,&g_145,&g_145},{&g_145,&g_145,&g_145,&g_145}},{{&g_145,&g_145,&g_145,&g_145},{&g_145,&g_145,&g_145,&g_145},{&g_145,&g_145,&g_145,&g_145},{&g_145,&g_145,&g_145,&g_145},{&g_145,&g_145,&g_145,&g_145},{&g_145,&g_145,&g_145,&g_145},{&g_145,&g_145,&g_145,&g_145}},{{&g_145,&g_145,&g_145,&g_145},{&g_145,&g_145,&g_145,&g_145},{&g_145,&g_145,&g_145,&g_145},{&g_145,&g_145,&g_145,&g_145},{&g_145,&g_145,&g_145,&g_145},{&g_145,&g_145,&g_145,&g_145},{&g_145,&g_145,&g_145,&g_145}},{{&g_145,&g_145,&g_145,&g_145},{&g_145,&g_145,&g_145,&g_145},{&g_145,&g_145,&g_145,&g_145},{&g_145,&g_145,&g_145,&g_145},{&g_145,&g_145,&g_145,&g_145},{&g_145,&g_145,&g_145,&g_145},{&g_145,&g_145,&g_145,&g_145}},{{&g_145,&g_145,&g_145,&g_145},{&g_145,&g_145,&g_145,&g_145},{&g_145,&g_145,&g_145,&g_145},{&g_145,&g_145,&g_145,&g_145},{&g_145,&g_145,&g_145,&g_145},{&g_145,&g_145,&g_145,&g_145},{&g_145,&g_145,&g_145,&g_145}}};
    uint64_t l_2468 = 7UL;
    uint32_t l_2470 = 18446744073709551606UL;
    int i, j, k;
    for (i = 0; i < 5; i++)
        l_5[i] = &g_3;
    for (i = 0; i < 7; i++)
        l_2041[i] = (-8L);
    ++g_7;
    return (**g_772);
}



static int32_t  func_10(uint32_t  p_11, struct S0  p_12, uint32_t  p_13)
{ 
    union U2 l_1299[2][3] = {{{{1L,0x41L,-6L,0L}},{{1L,0x41L,-6L,0L}},{{1L,0x41L,-6L,0L}}},{{{0x6549D052L,0xFAL,0x4DL,0xE236CFB8L}},{{0x6549D052L,0xFAL,0x4DL,0xE236CFB8L}},{{0x6549D052L,0xFAL,0x4DL,0xE236CFB8L}}}};
    const union U1 *l_1302 = &g_267;
    const union U1 **l_1301 = &l_1302;
    const union U1 ***l_1300[7] = {(void*)0,(void*)0,&l_1301,(void*)0,(void*)0,&l_1301,(void*)0};
    int32_t l_1316 = 0x9FDCE69FL;
    int32_t l_1373[5];
    int i, j;
    for (i = 0; i < 5; i++)
        l_1373[i] = 4L;
    for (p_13 = 0; (p_13 <= 0); p_13 += 1)
    { 
        int32_t l_1312 = 1L;
        uint8_t **l_1314 = (void*)0;
        uint8_t ***l_1313 = &l_1314;
        int32_t l_1315 = 0x6D927EA8L;
        const uint16_t ***l_1346 = (void*)0;
        const uint16_t ****l_1345[4][2][2] = {{{&l_1346,&l_1346},{&l_1346,&l_1346}},{{&l_1346,&l_1346},{&l_1346,&l_1346}},{{&l_1346,&l_1346},{&l_1346,&l_1346}},{{&l_1346,&l_1346},{&l_1346,&l_1346}}};
        const uint16_t *****l_1344 = &l_1345[3][0][0];
        int32_t l_1374[6][1];
        int i, j, k;
        for (i = 0; i < 6; i++)
        {
            for (j = 0; j < 1; j++)
                l_1374[i][j] = 0xDB198BDDL;
        }
        l_1316 ^= (safe_sub_func_uint16_t_u_u((l_1299[1][2] , (l_1300[6] != ((safe_mul_func_int16_t_s_s(p_12.f0, (((((safe_unary_minus_func_uint64_t_u((safe_sub_func_int8_t_s_s(0xE1L, 1UL)))) != (l_1315 &= ((((((safe_rshift_func_int8_t_s_u((((safe_lshift_func_int8_t_s_s((((&g_283[p_13] != &g_283[(p_13 + 2)]) < l_1312) , (-9L)), 6)) & l_1299[1][2].f0.f0) , p_12.f2), l_1299[1][2].f0.f3)) , l_1313) != (void*)0) < p_11) && 6UL) || l_1299[1][2].f0.f2))) , l_1315) > p_13) != l_1299[1][2].f2.f1))) , (void*)0))), p_12.f1));
        if (p_12.f0)
            continue;
        for (g_66 = 1; (g_66 <= 4); g_66 += 1)
        { 
            union U2 l_1317 = {{0xEE1A21B6L,0x94L,-7L,0L}};
            union U1 l_1337 = {6UL};
            int64_t *l_1350 = (void*)0;
            int32_t l_1375 = (-1L);
            int32_t l_1376 = (-9L);
            uint64_t l_1377 = 1UL;
            if (((l_1317 , ((safe_add_func_uint16_t_u_u(((***g_675) &= (safe_rshift_func_int16_t_s_u(0x605BL, (safe_unary_minus_func_uint8_t_u(((safe_div_func_uint16_t_u_u(((g_400 < ((safe_mod_func_int8_t_s_s((safe_div_func_uint8_t_u_u(((**g_1261) , 246UL), ((p_12 , (safe_mod_func_uint64_t_u_u(0x46ADE41B19115C89LL, l_1317.f0.f3))) || p_11))), 0xB0L)) > 0xEA5AEFA3F404F65CLL)) > p_12.f0), p_12.f0)) , (***g_1172))))))), 0x80AFL)) && g_53.f0.f3)) & 0xA7B2L))
            { 
                uint16_t l_1347[5][3][1] = {{{65532UL},{0xC0DBL},{65532UL}},{{0xC0DBL},{65532UL},{0xC0DBL}},{{65532UL},{0xC0DBL},{65532UL}},{{0xC0DBL},{65532UL},{0xC0DBL}},{{65532UL},{0xC0DBL},{65532UL}}};
                uint64_t *l_1348 = &g_108[2];
                int32_t l_1349[2];
                int i, j, k;
                for (i = 0; i < 2; i++)
                    l_1349[i] = 0L;
                if (((safe_div_func_int16_t_s_s(l_1315, ((safe_rshift_func_uint8_t_u_u(((*g_1174)++), (l_1349[0] = (((**g_949) = (p_12.f3 , l_1337)) , (((safe_sub_func_int64_t_s_s((p_12.f1 , p_11), ((*l_1348) = ((((((p_12.f0 = (safe_lshift_func_int8_t_s_s((safe_div_func_uint64_t_u_u(((l_1344 == &g_674) | p_12.f1), p_11)), l_1347[3][1][0]))) | p_12.f1) <= 1L) == p_12.f1) != p_12.f3) ^ 0x66D8L)))) | g_53.f2.f0) ^ (****g_674)))))) , p_12.f3))) == p_12.f1))
                { 
                    return p_13;
                }
                else
                { 
                    (*g_56) = &l_1349[1];
                    if (p_11)
                        break;
                    return p_11;
                }
            }
            else
            { 
                union U2 l_1353 = {{2L,0x19L,0x6BL,0x90827BA9L}};
                for (g_400 = 0; (g_400 <= 4); g_400 += 1)
                { 
                    int32_t l_1354 = 0x2B08E3F9L;
                    int16_t *l_1363 = &g_106[2][2][1];
                    int i, j, k;
                    l_1317.f2.f0 = (g_6[p_13][p_13][p_13] , (p_12.f0 ^= ((((&g_762 == (g_6[p_13][p_13][p_13] , l_1350)) , (safe_rshift_func_int16_t_s_u(((&g_282 == (void*)0) == ((l_1354 ^= ((l_1353 , g_6[p_13][(p_13 + 2)][p_13]) ^ g_6[(p_13 + 2)][(p_13 + 2)][p_13])) & 0UL)), g_222[g_400][p_13][g_400]))) | p_13) ^ 0xF129L)));
                    l_1312 ^= (safe_mul_func_uint8_t_u_u((p_13 <= (safe_mul_func_int16_t_s_s(((*l_1363) = (safe_div_func_uint64_t_u_u(((safe_div_func_uint16_t_u_u(0x437DL, p_13)) | l_1353.f0.f1), 18446744073709551615UL))), ((safe_rshift_func_int16_t_s_u((safe_rshift_func_int16_t_s_u(((((safe_rshift_func_uint8_t_u_u((((*g_280) , l_1317.f0.f0) == p_12.f2), g_6[(p_13 + 2)][(p_13 + 2)][p_13])) , p_13) >= p_12.f3) || 0x7B481A9DAB92FB6BLL), 12)), 0)) , l_1317.f2.f0)))), 0xA5L));
                }
            }
            for (g_542 = 1; (g_542 <= 4); g_542 += 1)
            { 
                int32_t l_1370 = 0xB13BA14DL;
                int32_t *l_1371 = (void*)0;
                int32_t *l_1372[4] = {&g_281.f0.f0,&g_281.f0.f0,&g_281.f0.f0,&g_281.f0.f0};
                int i;
                --l_1377;
                for (g_91.f1.f2 = 0; (g_91.f1.f2 <= 0); g_91.f1.f2 += 1)
                { 
                    int i, j, k;
                    l_1374[5][0] = (0x66L != g_6[g_91.f1.f2][p_13][p_13]);
                }
            }
        }
    }
    p_12.f0 ^= p_12.f1;
    return p_12.f0;
}



static uint32_t  func_14(int32_t * p_15, int32_t * p_16, int32_t * p_17, uint32_t  p_18)
{ 
    uint16_t l_1162 = 0x29EBL;
    union U3 l_1165 = {{-4L,1L,0x72L,0x362BC9F9L}};
    uint8_t *l_1168 = &g_169;
    uint8_t **l_1167 = &l_1168;
    uint8_t ***l_1166 = &l_1167;
    int32_t l_1183 = 0x8718BBD8L;
    int32_t l_1184 = 2L;
    int32_t l_1185 = 0x6A557D93L;
    uint32_t *l_1213[5];
    union U3 ***l_1223 = &g_282;
    union U2 **l_1239 = &g_280;
    int32_t * const ***l_1256 = &g_216;
    int32_t * const ****l_1255 = &l_1256;
    int64_t **l_1276[7][7][5] = {{{&g_1248,&g_1248,&g_1248,&g_1248,&g_1248},{&g_1248,&g_1248,&g_1248,&g_1248,&g_1248},{&g_1248,&g_1248,&g_1248,&g_1248,&g_1248},{&g_1248,&g_1248,&g_1248,&g_1248,&g_1248},{(void*)0,&g_1248,&g_1248,&g_1248,&g_1248},{&g_1248,&g_1248,&g_1248,&g_1248,&g_1248},{(void*)0,(void*)0,&g_1248,&g_1248,(void*)0}},{{(void*)0,&g_1248,&g_1248,&g_1248,&g_1248},{(void*)0,&g_1248,&g_1248,(void*)0,&g_1248},{&g_1248,&g_1248,&g_1248,&g_1248,&g_1248},{&g_1248,&g_1248,&g_1248,&g_1248,&g_1248},{&g_1248,&g_1248,&g_1248,&g_1248,(void*)0},{&g_1248,&g_1248,&g_1248,&g_1248,(void*)0},{&g_1248,&g_1248,&g_1248,&g_1248,&g_1248}},{{&g_1248,&g_1248,&g_1248,&g_1248,&g_1248},{&g_1248,&g_1248,&g_1248,&g_1248,&g_1248},{&g_1248,(void*)0,&g_1248,&g_1248,&g_1248},{&g_1248,&g_1248,&g_1248,&g_1248,(void*)0},{(void*)0,&g_1248,&g_1248,&g_1248,(void*)0},{(void*)0,&g_1248,(void*)0,&g_1248,&g_1248},{&g_1248,&g_1248,&g_1248,&g_1248,&g_1248}},{{(void*)0,(void*)0,&g_1248,&g_1248,&g_1248},{&g_1248,(void*)0,&g_1248,&g_1248,&g_1248},{(void*)0,&g_1248,&g_1248,&g_1248,&g_1248},{&g_1248,&g_1248,&g_1248,(void*)0,(void*)0},{(void*)0,&g_1248,(void*)0,&g_1248,(void*)0},{(void*)0,&g_1248,&g_1248,&g_1248,&g_1248},{&g_1248,(void*)0,&g_1248,&g_1248,&g_1248}},{{&g_1248,&g_1248,&g_1248,&g_1248,&g_1248},{&g_1248,&g_1248,(void*)0,&g_1248,(void*)0},{&g_1248,(void*)0,&g_1248,(void*)0,&g_1248},{&g_1248,&g_1248,&g_1248,&g_1248,&g_1248},{&g_1248,&g_1248,&g_1248,&g_1248,&g_1248},{&g_1248,&g_1248,&g_1248,&g_1248,&g_1248},{&g_1248,&g_1248,&g_1248,&g_1248,&g_1248}},{{&g_1248,&g_1248,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&g_1248,(void*)0,&g_1248},{(void*)0,&g_1248,&g_1248,&g_1248,&g_1248},{(void*)0,&g_1248,&g_1248,&g_1248,&g_1248},{&g_1248,&g_1248,&g_1248,(void*)0,(void*)0},{&g_1248,(void*)0,&g_1248,&g_1248,(void*)0},{&g_1248,&g_1248,&g_1248,&g_1248,&g_1248}},{{&g_1248,&g_1248,&g_1248,(void*)0,&g_1248},{(void*)0,&g_1248,&g_1248,&g_1248,&g_1248},{&g_1248,&g_1248,&g_1248,&g_1248,&g_1248},{&g_1248,&g_1248,&g_1248,&g_1248,&g_1248},{&g_1248,&g_1248,&g_1248,&g_1248,&g_1248},{(void*)0,(void*)0,&g_1248,&g_1248,&g_1248},{&g_1248,&g_1248,&g_1248,&g_1248,&g_1248}}};
    int32_t *l_1282[7] = {&l_1183,&l_1183,&l_1183,&l_1183,&l_1183,&l_1183,&l_1183};
    union U1 **l_1292[5] = {&g_950[1][0],&g_950[1][0],&g_950[1][0],&g_950[1][0],&g_950[1][0]};
    int i, j, k;
    for (i = 0; i < 5; i++)
        l_1213[i] = &g_542;
    for (g_251 = 0; (g_251 == 2); g_251 = safe_add_func_uint8_t_u_u(g_251, 3))
    { 
        int64_t l_1153 = (-1L);
        int32_t l_1154 = 0L;
        uint8_t ****l_1169 = &l_1166;
        union U2 l_1170 = {{0x2BC2B869L,-10L,0xC0L,0x11E04C77L}};
        uint16_t **l_1171 = &g_146;
        for (g_91.f0.f3 = 5; (g_91.f0.f3 >= (-14)); g_91.f0.f3--)
        { 
            for (g_50 = (-11); (g_50 != 41); ++g_50)
            { 
                int32_t * const l_1151 = &g_281.f0.f0;
                int32_t **l_1152 = &g_791[0][2];
                int32_t *l_1155 = &g_3;
                int32_t *l_1156 = &g_53.f2.f0;
                int32_t *l_1157 = &g_738[3].f0;
                int32_t *l_1158 = &g_76[1].f0;
                int32_t *l_1159 = &g_3;
                int32_t *l_1160 = (void*)0;
                int32_t *l_1161[4];
                int i;
                for (i = 0; i < 4; i++)
                    l_1161[i] = &g_76[1].f0;
                for (g_169 = 21; (g_169 > 1); --g_169)
                { 
                    (****g_731) |= 5L;
                }
                (*l_1152) = l_1151;
                --l_1162;
            }
        }
        (**g_56) = (((l_1165 , ((((((*l_1169) = l_1166) != (void*)0) , l_1170) , ((((void*)0 == l_1171) ^ (l_1170 , 0xA5AC6418L)) | g_76[1].f1)) , g_1172)) != (void*)0) != l_1170.f2.f3);
        return g_738[3].f0;
    }
    for (g_91.f1.f3 = 0; (g_91.f1.f3 < 19); g_91.f1.f3 = safe_add_func_int16_t_s_s(g_91.f1.f3, 1))
    { 
        uint64_t l_1177 = 1UL;
        int32_t l_1181 = (-4L);
        int32_t l_1182[7][4][6] = {{{0x5DC0D615L,0x187DC611L,(-2L),0x097046B9L,0xE1CC5AFCL,0L},{0x5DC0D615L,(-1L),1L,0x097046B9L,0x470C94DFL,0x097046B9L},{0x5DC0D615L,0xFE3DFA66L,0x5DC0D615L,0x097046B9L,0x83828B29L,(-8L)},{0x5DC0D615L,0x187DC611L,(-2L),0x097046B9L,0xE1CC5AFCL,0L}},{{0x5DC0D615L,(-1L),1L,0x097046B9L,0x470C94DFL,0x097046B9L},{0x5DC0D615L,0xFE3DFA66L,0x5DC0D615L,0x097046B9L,0x83828B29L,(-8L)},{0x5DC0D615L,0x187DC611L,(-2L),0x097046B9L,0xE1CC5AFCL,0L},{0x5DC0D615L,(-1L),1L,0x097046B9L,0x470C94DFL,0x097046B9L}},{{0x5DC0D615L,0xFE3DFA66L,0x5DC0D615L,0x097046B9L,0x83828B29L,(-8L)},{0x5DC0D615L,0x187DC611L,(-2L),0x097046B9L,0xE1CC5AFCL,0L},{0x5DC0D615L,(-1L),1L,0x097046B9L,0x470C94DFL,0x097046B9L},{0x5DC0D615L,0xFE3DFA66L,0x5DC0D615L,0x097046B9L,0x83828B29L,(-8L)}},{{0x5DC0D615L,0x187DC611L,(-2L),0x097046B9L,0xE1CC5AFCL,0L},{0x5DC0D615L,(-1L),1L,0x097046B9L,0x470C94DFL,0x097046B9L},{0x5DC0D615L,0xFE3DFA66L,0x5DC0D615L,0x097046B9L,0x83828B29L,(-8L)},{0x5DC0D615L,0x187DC611L,(-2L),0x097046B9L,0xE1CC5AFCL,0L}},{{0x5DC0D615L,(-1L),1L,0x097046B9L,0x470C94DFL,0x097046B9L},{0x5DC0D615L,0xFE3DFA66L,0x5DC0D615L,0x097046B9L,0x83828B29L,(-8L)},{0x5DC0D615L,0x187DC611L,(-2L),0x097046B9L,0xE1CC5AFCL,0L},{0x5DC0D615L,(-1L),1L,0x097046B9L,0x470C94DFL,0x097046B9L}},{{0x5DC0D615L,0xFE3DFA66L,0x5DC0D615L,0x097046B9L,0x83828B29L,(-8L)},{0x5DC0D615L,0x187DC611L,(-2L),0x097046B9L,0xE1CC5AFCL,0L},{0x5DC0D615L,(-1L),1L,0x097046B9L,0x470C94DFL,0x097046B9L},{0x5DC0D615L,0xFE3DFA66L,0x5DC0D615L,0x097046B9L,0x83828B29L,(-8L)}},{{0x5DC0D615L,0x187DC611L,(-2L),0x097046B9L,0xE1CC5AFCL,0L},{0x5DC0D615L,(-1L),1L,0xBCB815A2L,0x5DC0D615L,0xBCB815A2L},{0x793A6689L,(-8L),0x793A6689L,0xBCB815A2L,1L,(-1L)},{0x793A6689L,0x097046B9L,1L,0xBCB815A2L,(-2L),0x21A39047L}}};
        union U1 l_1193 = {0xCF15L};
        uint32_t *l_1214 = &g_542;
        struct S0 *l_1232 = &g_281.f0;
        int32_t *****l_1257[5][4] = {{(void*)0,(void*)0,&g_1000,&g_1000},{&g_1000,&g_1000,(void*)0,&g_1000},{&g_1000,&g_1000,(void*)0,&g_1000},{(void*)0,&g_1000,&g_1000,&g_1000},{(void*)0,(void*)0,(void*)0,&g_1000}};
        uint32_t **l_1259[7][1][3] = {{{&l_1213[1],&l_1213[0],&l_1214}},{{&l_1213[0],&l_1213[1],&l_1213[1]}},{{&l_1214,&l_1213[1],(void*)0}},{{&l_1213[1],&l_1213[0],&l_1214}},{{&l_1214,&l_1214,&l_1214}},{{&l_1213[0],&l_1213[1],(void*)0}},{{&l_1213[1],&l_1214,&l_1213[1]}}};
        uint32_t ***l_1258 = &l_1259[2][0][2];
        uint64_t l_1275 = 0UL;
        union U3 l_1277[2] = {{{1L,0x16L,0x35L,1L}},{{1L,0x16L,0x35L,1L}}};
        int64_t ** const l_1278[6] = {&g_1248,&g_1248,&g_1248,&g_1248,&g_1248,&g_1248};
        int32_t l_1283 = 0x0A72F180L;
        uint64_t l_1284 = 5UL;
        union U1 **l_1289[4];
        int i, j, k;
        for (i = 0; i < 4; i++)
            l_1289[i] = &g_950[1][0];
        --l_1177;
        for (g_7 = 0; (g_7 <= 2); g_7 += 1)
        { 
            int32_t *l_1180[2];
            uint16_t l_1186[5] = {65528UL,65528UL,65528UL,65528UL,65528UL};
            uint32_t *l_1196 = &g_222[2][1][1];
            uint32_t *l_1212 = &g_542;
            uint32_t **l_1211[6] = {&l_1212,&l_1212,&l_1212,&l_1212,&l_1212,&l_1212};
            int16_t *l_1215 = (void*)0;
            uint64_t *l_1216 = &g_108[2];
            uint32_t l_1229 = 0x6E93A024L;
            int32_t * const ***l_1254 = &g_216;
            int32_t * const ****l_1253 = &l_1254;
            int i;
            for (i = 0; i < 2; i++)
                l_1180[i] = &g_53.f0.f0;
            if (l_1177)
                break;
            l_1186[1]++;
            if ((((*l_1216) = (safe_mod_func_uint16_t_u_u((safe_mul_func_int16_t_s_s((l_1185 ^= ((((((p_18 == (*g_1174)) || (((((*g_280) , ((**g_949) = l_1193)) , (safe_mul_func_int16_t_s_s(((**g_282) , (((((--(*l_1196)) >= (safe_mod_func_uint64_t_u_u((safe_lshift_func_uint8_t_u_s((((safe_lshift_func_int8_t_s_u((l_1181 = ((**g_627) = (safe_sub_func_int8_t_s_s(((l_1213[1] = ((g_53.f0.f0 , (safe_sub_func_uint32_t_u_u((safe_div_func_int8_t_s_s(0x55L, l_1182[4][2][3])), g_104))) , l_1180[1])) != l_1214), l_1165.f0.f0)))), 1)) | l_1165.f1.f2) ^ (-1L)), 4)), l_1182[4][2][3]))) || 5UL) , l_1181) != l_1182[4][2][3])), l_1165.f1.f3))) < (**g_772)) != l_1165.f0.f3)) <= (**g_1173)) & p_18) <= (**g_56)) , l_1165.f0.f0)), l_1165.f0.f2)), 0xDBAAL))) < l_1182[4][2][3]))
            { 
                uint64_t l_1228 = 6UL;
                (*p_15) &= (((**g_282) , (safe_sub_func_uint8_t_u_u(((safe_rshift_func_int8_t_s_s((*g_628), 3)) > (0xAB33L != ((((((safe_mul_func_uint8_t_u_u((((void*)0 != l_1223) < ((((1L >= (safe_div_func_uint16_t_u_u(((***g_675) ^= (safe_mod_func_int32_t_s_s(l_1228, l_1165.f0.f1))), p_18))) | p_18) > 65528UL) != l_1228)), (*g_628))) < l_1182[4][2][3]) , 0UL) & g_400) | 9UL) ^ p_18))), (***g_1172)))) ^ 0xC0243504L);
                for (g_50 = 0; (g_50 <= 5); g_50 += 1)
                { 
                    l_1182[4][2][3] = (-1L);
                    ++l_1229;
                    return g_281.f2.f1;
                }
                return p_18;
            }
            else
            { 
                struct S0 **l_1233 = &g_74;
                int32_t l_1234[7][5] = {{0x58C49607L,1L,1L,0x58C49607L,5L},{(-1L),1L,1L,(-1L),(-1L)},{(-1L),1L,0x7E461C42L,(-1L),5L},{0x58C49607L,1L,1L,0x58C49607L,5L},{(-1L),1L,1L,(-1L),(-1L)},{(-1L),1L,0x7E461C42L,(-1L),5L},{0x58C49607L,1L,1L,0x58C49607L,5L}};
                uint8_t l_1235[7];
                int i, j;
                for (i = 0; i < 7; i++)
                    l_1235[i] = 0x72L;
                (*l_1233) = l_1232;
                (*p_15) = (*p_16);
                for (l_1165.f0.f3 = 2; (l_1165.f0.f3 >= 0); l_1165.f0.f3 -= 1)
                { 
                    int32_t l_1238[2];
                    int i;
                    for (i = 0; i < 2; i++)
                        l_1238[i] = (-3L);
                    l_1235[2]--;
                    if (l_1238[1])
                        continue;
                    return p_18;
                }
                (**g_732) = &l_1184;
                for (l_1165.f1.f3 = 0; (l_1165.f1.f3 <= 2); l_1165.f1.f3 += 1)
                { 
                    union U2 ***l_1240 = &l_1239;
                    (*p_17) = (((*l_1240) = l_1239) == (void*)0);
                    return p_18;
                }
            }
            for (l_1165.f1.f2 = 2; (l_1165.f1.f2 >= 0); l_1165.f1.f2 -= 1)
            { 
                int16_t l_1265 = 7L;
                int32_t l_1279 = 0x1B7DAFF7L;
                for (g_104 = 0; (g_104 <= 2); g_104 += 1)
                { 
                    uint8_t l_1241 = 0x45L;
                    int64_t *l_1246 = &g_171;
                    int64_t **l_1247[1][1];
                    int i, j;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 1; j++)
                            l_1247[i][j] = &l_1246;
                    }
                    l_1241++;
                    (*p_15) = (safe_sub_func_int8_t_s_s((*g_628), ((l_1241 != ((g_1248 = l_1246) != (void*)0)) & (safe_sub_func_int8_t_s_s((((4294967295UL > (((safe_sub_func_int16_t_s_s(((l_1255 = l_1253) != l_1257[0][1]), p_18)) , 1L) | p_18)) | (*p_17)) || p_18), p_18)))));
                }
                l_1265 &= (((*p_16) , ((l_1258 == g_1260) > (-1L))) < (safe_add_func_uint8_t_u_u((0x6D5742C3L != (***g_732)), p_18)));
                if (((safe_sub_func_int16_t_s_s((g_1268 <= (safe_lshift_func_int16_t_s_u(p_18, (((safe_mod_func_uint8_t_u_u(p_18, ((*l_1168) ^= (((g_91.f1.f2 || (l_1275 >= (l_1279 = (l_1276[5][4][4] == ((l_1277[1] , 6UL) , l_1278[0]))))) >= p_18) >= 0xA0L)))) < g_106[1][1][4]) || 0x93D8L)))), p_18)) | (*p_17)))
                { 
                    int16_t ****l_1280 = (void*)0;
                    int16_t ****l_1281[6];
                    int i;
                    for (i = 0; i < 6; i++)
                        l_1281[i] = &g_860;
                    g_860 = &g_861;
                }
                else
                { 
                    l_1282[0] = p_16;
                }
            }
        }
        l_1284++;
        for (g_400 = (-29); (g_400 <= 8); g_400 = safe_add_func_uint32_t_u_u(g_400, 9))
        { 
            union U1 ***l_1290 = (void*)0;
            union U1 ***l_1291[1];
            int i;
            for (i = 0; i < 1; i++)
                l_1291[i] = &l_1289[1];
            l_1292[4] = l_1289[1];
            if ((*p_15))
                continue;
            for (g_3 = 0; (g_3 == (-18)); g_3 = safe_sub_func_int64_t_s_s(g_3, 6))
            { 
                if ((*p_16))
                    break;
                for (g_104 = (-29); (g_104 == (-2)); g_104++)
                { 
                    if ((*p_16))
                        break;
                }
            }
            (*p_16) |= 0x7DC81D02L;
        }
    }
    return p_18;
}



static int32_t * func_19(int8_t * p_20, uint64_t  p_21, uint64_t  p_22)
{ 
    uint16_t ***l_554 = &g_145;
    uint16_t ****l_553 = &l_554;
    union U3 *l_559[1][6][4] = {{{&g_91,(void*)0,(void*)0,&g_91},{(void*)0,&g_91,(void*)0,(void*)0},{&g_91,&g_91,&g_91,&g_91},{&g_91,(void*)0,(void*)0,&g_91},{(void*)0,&g_91,(void*)0,(void*)0},{&g_91,&g_91,&g_91,&g_91}}};
    union U1 *l_560 = (void*)0;
    int32_t l_581 = (-3L);
    int32_t l_621[2];
    uint16_t *****l_672 = &l_553;
    int32_t l_678 = 5L;
    union U2 l_693 = {{0L,1L,0x98L,-3L}};
    union U1 l_714 = {0xAB91L};
    int32_t ***l_760 = (void*)0;
    int32_t ****l_759 = &l_760;
    int32_t l_786 = 0x14192576L;
    int32_t l_800 = 0L;
    int32_t *l_801 = &g_91.f0.f0;
    int32_t *l_802 = &g_281.f2.f0;
    int32_t *l_803 = (void*)0;
    int32_t *l_804 = (void*)0;
    int32_t *l_805 = &l_581;
    int32_t *l_806 = &l_621[0];
    int32_t *l_807 = &l_693.f2.f0;
    int32_t *l_808 = &g_281.f2.f0;
    int32_t *l_809 = &g_3;
    int32_t *l_810[6][6][2] = {{{&l_621[0],&l_693.f2.f0},{&l_621[0],&g_76[1].f0},{&l_621[1],&l_621[1]},{&g_76[1].f0,&l_621[0]},{&l_693.f2.f0,&l_621[0]},{&g_76[1].f0,&l_621[1]}},{{&l_621[1],&g_76[1].f0},{&l_621[0],&l_693.f2.f0},{&l_621[0],&g_76[1].f0},{&l_621[1],&l_621[1]},{&g_76[1].f0,&l_621[0]},{&l_693.f2.f0,&l_621[0]}},{{&g_76[1].f0,&l_621[1]},{&l_621[1],&g_76[1].f0},{&l_621[0],&l_693.f2.f0},{&l_621[0],&g_76[1].f0},{&l_621[1],&l_621[1]},{&g_76[1].f0,&l_621[0]}},{{&l_693.f2.f0,&l_621[0]},{&g_76[1].f0,&l_621[1]},{&l_621[1],&g_76[1].f0},{&l_621[0],&l_693.f2.f0},{&l_621[0],&g_76[1].f0},{&l_621[1],&l_621[1]}},{{&g_76[1].f0,&l_621[0]},{&l_693.f2.f0,&l_621[0]},{&g_76[1].f0,&l_621[1]},{&l_621[1],&g_76[1].f0},{&g_76[1].f0,&l_693.f2.f0},{&g_76[1].f0,&l_693.f2.f0}},{{(void*)0,(void*)0},{&l_693.f2.f0,&g_76[1].f0},{&l_693.f2.f0,&g_76[1].f0},{&l_693.f2.f0,(void*)0},{(void*)0,&l_693.f2.f0},{&g_76[1].f0,&l_693.f2.f0}}};
    uint32_t l_811 = 4294967288UL;
    int16_t ***l_864[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int64_t *l_896 = &g_762;
    uint8_t l_910 = 1UL;
    int64_t l_933 = 0x5314FD33F0BBCFBELL;
    int32_t l_990 = (-1L);
    int8_t l_1078 = 3L;
    struct S0 *l_1102 = &g_53.f0;
    int16_t l_1141[2][1][3] = {{{0x495EL,0x495EL,0x495EL}},{{1L,1L,1L}}};
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_621[i] = 1L;
    for (g_171 = 24; (g_171 < (-6)); g_171 = safe_sub_func_uint32_t_u_u(g_171, 1))
    { 
        uint64_t l_565 = 0x320AEC6F41DDD280LL;
        union U1 l_576 = {1UL};
        uint16_t *****l_577 = &l_553;
        int32_t l_611 = 0x0D99C866L;
        int32_t l_620 = 0xBC9E759BL;
        int32_t l_623 = 0x4EEC08A5L;
        int64_t *l_632 = &g_171;
        union U3 l_642 = {{0xC9CE864FL,-10L,-2L,0x439960ADL}};
        int32_t l_652 = 1L;
        uint16_t l_654 = 0xACD2L;
        uint32_t l_658 = 18446744073709551607UL;
        int16_t l_684 = (-4L);
        uint16_t l_688 = 65535UL;
        int32_t ** const ***l_733 = (void*)0;
    }
    l_811++;
    for (g_171 = 26; (g_171 != 28); g_171 = safe_add_func_int32_t_s_s(g_171, 2))
    { 
        uint64_t l_820 = 18446744073709551615UL;
        uint16_t **** const * const l_840 = &l_553;
        int32_t l_855 = 0x5DEC3205L;
        int32_t l_856 = 3L;
        int16_t ***l_863 = (void*)0;
        int32_t l_870 = 0xFCF2C358L;
        int32_t l_871[4] = {0xB86C39AAL,0xB86C39AAL,0xB86C39AAL,0xB86C39AAL};
        uint32_t l_874 = 8UL;
        int16_t l_897 = 0x0944L;
        uint8_t *l_900[5][7][5] = {{{(void*)0,&g_169,&g_169,&g_169,&g_169},{&g_169,&g_169,&g_169,&g_169,&g_169},{(void*)0,&g_169,(void*)0,&g_169,&g_169},{&g_169,(void*)0,(void*)0,&g_169,&g_169},{&g_169,&g_169,&g_169,&g_169,&g_169},{(void*)0,&g_169,(void*)0,&g_169,&g_169},{&g_169,&g_169,(void*)0,&g_169,&g_169}},{{&g_169,&g_169,&g_169,(void*)0,&g_169},{&g_169,&g_169,&g_169,&g_169,&g_169},{&g_169,&g_169,&g_169,(void*)0,&g_169},{&g_169,(void*)0,&g_169,&g_169,&g_169},{&g_169,&g_169,&g_169,&g_169,(void*)0},{&g_169,&g_169,&g_169,&g_169,&g_169},{&g_169,&g_169,&g_169,&g_169,&g_169}},{{&g_169,&g_169,(void*)0,&g_169,(void*)0},{&g_169,(void*)0,(void*)0,&g_169,&g_169},{&g_169,&g_169,&g_169,&g_169,&g_169},{(void*)0,&g_169,(void*)0,&g_169,&g_169},{&g_169,&g_169,&g_169,&g_169,&g_169},{&g_169,&g_169,&g_169,&g_169,&g_169},{&g_169,&g_169,&g_169,(void*)0,&g_169}},{{&g_169,&g_169,&g_169,&g_169,&g_169},{&g_169,(void*)0,&g_169,&g_169,&g_169},{&g_169,&g_169,&g_169,&g_169,&g_169},{&g_169,&g_169,(void*)0,(void*)0,&g_169},{(void*)0,&g_169,(void*)0,&g_169,&g_169},{&g_169,&g_169,&g_169,&g_169,&g_169},{&g_169,(void*)0,&g_169,(void*)0,&g_169}},{{&g_169,&g_169,&g_169,&g_169,&g_169},{&g_169,&g_169,&g_169,(void*)0,&g_169},{&g_169,&g_169,&g_169,&g_169,&g_169},{&g_169,&g_169,(void*)0,&g_169,(void*)0},{&g_169,(void*)0,&g_169,(void*)0,&g_169},{&g_169,(void*)0,(void*)0,&g_169,&g_169},{(void*)0,&g_169,(void*)0,&g_169,&g_169}}};
        uint8_t **l_899 = &l_900[4][0][0];
        union U3 l_909 = {{0xF8B25696L,0L,2L,-6L}};
        uint64_t l_912 = 0xF78852C56A6018BFLL;
        uint64_t l_945 = 0x899D319733574532LL;
        union U1 ** const l_948 = (void*)0;
        union U2 *l_959 = &g_53;
        uint32_t *l_1027 = &l_874;
        uint32_t **l_1026 = &l_1027;
        int32_t l_1032 = 0L;
        int8_t l_1053 = 0x1FL;
        int64_t l_1079 = 1L;
        int i, j, k;
    }
    return (**g_732);
}



static int8_t * func_23(int8_t  p_24, int8_t * p_25, int32_t  p_26)
{ 
    int8_t *l_550 = &g_53.f2.f2;
    return l_550;
}



static int8_t * func_27(int32_t * p_28, uint16_t  p_29)
{ 
    int32_t *l_524 = &g_281.f0.f0;
    int32_t l_536 = 8L;
    int32_t *l_537 = &l_536;
    int32_t *l_538 = &g_76[1].f0;
    int32_t *l_539 = &g_53.f0.f0;
    int32_t *l_540[1][3];
    int32_t l_541 = 0x27E6D2E6L;
    uint32_t l_545 = 18446744073709551607UL;
    int8_t *l_548 = (void*)0;
    int i, j;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
            l_540[i][j] = &g_53.f0.f0;
    }
    p_28 = l_524;
    l_536 ^= ((((((*g_57) = 6L) & p_29) ^ (~(safe_lshift_func_int16_t_s_u((p_29 >= (safe_mod_func_int8_t_s_s(((((safe_rshift_func_int16_t_s_u((-1L), 11)) >= (p_29 != p_29)) < (!(!p_29))) , p_29), g_53.f0.f2))), 4)))) | 0L) ^ g_171);
    g_542--;
    l_545--;
    return l_548;
}



static int32_t * func_30(int64_t  p_31, int32_t * p_32, int8_t * p_33, uint16_t  p_34, const int8_t * p_35)
{ 
    uint32_t *l_307 = &g_248[2][3][1];
    int32_t l_308 = 0x0D7219D6L;
    union U3 * const *l_319 = &g_283[0];
    union U3 * const **l_318 = &l_319;
    int16_t l_322 = 0xCD70L;
    uint32_t l_385 = 1UL;
    union U1 l_391 = {9UL};
    uint16_t ***l_403 = &g_145;
    uint8_t l_415 = 0x1CL;
    int32_t l_426 = 0L;
    int32_t l_427 = 1L;
    int32_t l_429[6] = {2L,2L,2L,2L,2L,2L};
    uint8_t *l_468 = &g_169;
    uint32_t l_504 = 18446744073709551615UL;
    struct S0 l_505 = {-1L,2L,0x79L,0x05784236L};
    int32_t *l_508 = (void*)0;
    int16_t l_515 = 0xAF93L;
    int16_t l_516 = 0x585DL;
    int64_t l_518 = 0L;
    uint64_t l_519 = 5UL;
    int i;
lbl_340:
    (*g_56) = (p_31 , ((safe_mod_func_uint8_t_u_u(g_53.f0.f2, (safe_rshift_func_int8_t_s_u((p_32 == l_307), g_91.f0.f0)))) , p_32));
    if (l_308)
    { 
        int64_t l_309 = 0L;
        uint64_t l_321 = 18446744073709551615UL;
        uint8_t *l_363 = (void*)0;
        uint32_t l_364 = 7UL;
        union U1 *l_367 = &g_267;
        int32_t l_377 = 0L;
        int32_t l_410 = 0x2EE016ADL;
        int32_t l_414 = 0x4B5FE86FL;
        int32_t l_428 = 4L;
        int32_t l_500[2][6] = {{(-1L),0x95A7E54FL,(-8L),(-8L),0x95A7E54FL,(-1L)},{0x69142EFFL,(-1L),(-8L),(-1L),0x69142EFFL,0x69142EFFL}};
        int i, j;
        if (l_309)
        { 
            union U3 * const **l_320[2][7][5];
            int32_t l_327 = 0xECE6004FL;
            int32_t l_334 = 0x879B4C80L;
            uint16_t *l_376 = &g_251;
            uint64_t l_384[5] = {0x78986AA3A4A9C36CLL,0x78986AA3A4A9C36CLL,0x78986AA3A4A9C36CLL,0x78986AA3A4A9C36CLL,0x78986AA3A4A9C36CLL};
            uint32_t *l_386 = &l_364;
            uint16_t * const *l_390 = &l_376;
            uint16_t * const **l_389 = &l_390;
            uint16_t * const ***l_388 = &l_389;
            uint16_t * const ****l_387 = &l_388;
            int16_t *l_397 = &g_104;
            uint16_t ****l_404 = &l_403;
            int32_t l_411 = 0x53E3091CL;
            int32_t l_413[3][6][6] = {{{5L,4L,0x08DB7409L,0x952FBC7EL,0xD3134440L,0x9749A4BEL},{(-1L),0L,0xCAFF6977L,0x9749A4BEL,4L,0x4D8DF74BL},{0xFA0DFD86L,(-10L),0x9C44813DL,0xE3D3D781L,0xE3D3D781L,0x9C44813DL},{0x9749A4BEL,0x9749A4BEL,0L,6L,5L,(-10L)},{0xD3134440L,0x9C44813DL,0xDAA5597FL,0L,(-8L),0L},{0xD4D6BC3DL,0xD3134440L,0xDAA5597FL,(-7L),0x9749A4BEL,(-10L)}},{{0x952FBC7EL,(-7L),0L,0xDAA5597FL,0x4D8DF74BL,0x9C44813DL},{0xDAA5597FL,0x4D8DF74BL,0x9C44813DL,(-1L),0x9C44813DL,0x4D8DF74BL},{0xF7947211L,0L,0xCAFF6977L,(-1L),(-10L),0x9749A4BEL},{(-10L),0xD4D6BC3DL,0x08DB7409L,0L,0L,(-8L)},{0xE3D3D781L,0xD4D6BC3DL,(-1L),(-1L),(-10L),5L},{(-1L),0L,0xFA0DFD86L,(-10L),0x9C44813DL,0xE3D3D781L}},{{4L,0x4D8DF74BL,(-8L),(-8L),0x4D8DF74BL,4L},{4L,(-7L),(-1L),6L,0x9749A4BEL,0xD3134440L},{0L,0xD3134440L,(-10L),(-1L),(-8L),0xF7947211L},{0L,0x9C44813DL,(-1L),6L,5L,0L},{4L,0x9749A4BEL,0x952FBC7EL,(-8L),0xE3D3D781L,(-1L)},{4L,(-10L),0x4D8DF74BL,(-10L),4L,0xB58F35ABL}}};
            union U1 *l_418 = &l_391;
            int32_t l_476 = 0xB681CE33L;
            int i, j, k;
            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 7; j++)
                {
                    for (k = 0; k < 5; k++)
                        l_320[i][j][k] = &l_319;
                }
            }
            if ((((1L < (safe_mul_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_s(250UL, 7)), ((((*g_280) , (safe_sub_func_int16_t_s_s(((safe_div_func_uint8_t_u_u((l_318 == l_320[0][5][3]), (*p_33))) != ((void*)0 != &g_282)), p_34))) | 5L) > g_106[0][4][4])))) >= l_321) & l_322))
            { 
                int32_t l_337 = 0x3AE3B409L;
                int32_t *l_338 = &g_53.f0.f0;
                (*p_32) ^= (safe_sub_func_int32_t_s_s((0xC2L || (safe_mod_func_int32_t_s_s(0x7C46F605L, l_327))), (p_34 <= 9L)));
                for (g_169 = 0; (g_169 <= 3); g_169 += 1)
                { 
                    int32_t l_339 = 1L;
                    l_308 = (1UL < (((safe_add_func_uint32_t_u_u((safe_div_func_uint64_t_u_u(((**l_319) , g_91.f0.f3), l_327)), (safe_div_func_uint32_t_u_u(g_53.f0.f3, (l_334 ^= ((*p_32) = (*p_32))))))) , (--p_34)) & (((65535UL ^ 9L) || l_337) == g_91.f1.f2)));
                    (*p_32) = (((void*)0 == l_338) ^ l_339);
                    if (g_91.f1.f0)
                        goto lbl_340;
                }
            }
            else
            { 
                int32_t *l_345 = &g_281.f2.f0;
                for (g_91.f1.f0 = 0; (g_91.f1.f0 > (-15)); g_91.f1.f0 = safe_sub_func_uint32_t_u_u(g_91.f1.f0, 9))
                { 
                    (*p_32) = (*p_32);
                    if (g_53.f0.f3)
                        goto lbl_340;
                    if (l_327)
                        continue;
                }
                for (g_91.f1.f0 = 0; (g_91.f1.f0 > (-24)); g_91.f1.f0 = safe_sub_func_uint64_t_u_u(g_91.f1.f0, 1))
                { 
                    (*g_56) = l_345;
                    if (l_321)
                        continue;
                    return l_345;
                }
                for (l_321 = 20; (l_321 <= 56); ++l_321)
                { 
                    int32_t l_354 = 0x99FA525EL;
                    int32_t *l_365 = (void*)0;
                    int32_t *l_366 = &l_308;
                    union U1 **l_368 = &l_367;
                    (*l_345) = 0x06FD9A5CL;
                    (*l_366) |= (0xC11EL < (safe_rshift_func_int16_t_s_s(((((((p_34 == ((((safe_mod_func_uint64_t_u_u((((*l_345) = (safe_rshift_func_uint8_t_u_u(l_354, 6))) || ((safe_add_func_int32_t_s_s(l_334, (p_31 | (safe_div_func_int64_t_s_s((safe_mul_func_uint8_t_u_u((safe_rshift_func_int16_t_s_u(((l_363 != &g_169) , l_309), p_31)), l_364)), g_169))))) >= g_76[1].f2)), 6L)) && p_31) , (-10L)) != p_31)) | (*p_32)) || (*p_32)) ^ l_327) , (*p_33)) & 0xD1L), p_34)));
                    (*g_56) = ((**g_282) , p_32);
                    (*l_368) = l_367;
                    (*l_366) &= (*p_32);
                }
                (*g_56) = p_32;
                if ((g_91.f1.f2 != (p_34 & (p_35 == p_33))))
                { 
                    uint32_t l_369 = 0x8F22128AL;
                    ++l_369;
                    (*g_57) = ((*g_146) ^ p_34);
                    (*p_32) = l_369;
                }
                else
                { 
                    return p_32;
                }
            }
lbl_480:
            (*l_387) = (((*g_280) , ((safe_div_func_uint8_t_u_u(((safe_mul_func_uint8_t_u_u((p_31 | (l_377 = ((*l_376) &= ((**g_145) = 0x14E6L)))), (((*l_386) |= ((safe_div_func_int16_t_s_s((*g_105), (safe_sub_func_int32_t_s_s((safe_mul_func_int16_t_s_s(l_322, (l_308 = ((((0UL || l_384[0]) <= 248UL) , l_308) || 0x52DF01602A6D736ALL)))), l_384[0])))) && l_385)) , 0x26L))) || l_364), l_385)) > (-2L))) , (void*)0);
            if (((l_391 , ((safe_rshift_func_int16_t_s_s(((((&p_32 != ((safe_mul_func_uint8_t_u_u((((*l_397) = (!(((*p_33) = 0x3AL) > (*p_35)))) & (-6L)), (safe_rshift_func_int16_t_s_s(((((g_400 ^= (*g_105)) ^ ((safe_div_func_uint16_t_u_u(((((*l_404) = l_403) == (void*)0) <= p_34), (*g_146))) < 8UL)) >= 1UL) <= g_222[1][0][1]), (*g_105))))) , (*g_216))) , l_309) < (-1L)) >= l_334), 11)) ^ p_34)) != (*p_35)))
            { 
                int32_t *l_405 = &g_3;
                int32_t *l_406 = &g_3;
                int32_t *l_407 = &l_327;
                int32_t *l_408[5];
                int16_t l_409 = 0xD0B0L;
                int64_t l_412 = 0x01DB5BBA43CEBBD0LL;
                union U1 **l_419 = &l_418;
                int i;
                for (i = 0; i < 5; i++)
                    l_408[i] = &g_91.f1.f0;
                l_415++;
                (*l_419) = l_418;
                return p_32;
            }
            else
            { 
                int64_t l_423 = (-1L);
                int32_t l_424 = (-4L);
                int32_t l_425 = 0x3ABA04F8L;
                for (g_50 = 0; (g_50 <= 13); ++g_50)
                { 
                    int32_t *l_422[7][3] = {{&l_327,&l_327,&l_327},{&l_327,&l_334,&l_327},{&l_327,&l_327,&l_327},{&l_327,&l_334,&l_327},{&l_327,&l_327,&l_327},{&l_327,&l_334,&l_327},{&l_327,&l_327,&l_327}};
                    uint64_t l_430 = 18446744073709551614UL;
                    int i, j;
                    l_430++;
                }
                for (g_3 = 0; (g_3 > 16); ++g_3)
                { 
                    int32_t *l_436 = &g_281.f0.f0;
                    int32_t **l_435 = &l_436;
                    const int8_t ***l_437 = (void*)0;
                    const int8_t **l_439 = (void*)0;
                    const int8_t ***l_438 = &l_439;
                    int32_t *l_446 = &l_411;
                    (*l_435) = ((*g_56) = p_32);
                    (*l_438) = &p_35;
                    (*l_446) = (((((safe_add_func_uint64_t_u_u((((p_31 , ((l_413[1][3][5] != ((((*g_57) <= ((safe_rshift_func_uint16_t_u_s((p_31 != 1L), (safe_rshift_func_int16_t_s_u((p_34 | ((l_425 = (0x40E268C1L <= (*l_436))) ^ (*p_32))), (*g_146))))) > 0xE29BL)) && 4294967286UL) & 0x69636AAAL)) & (*p_32))) <= g_3) , 0UL), g_76[1].f2)) == 0xD5L) != p_34) && l_423) , l_385);
                }
                for (l_428 = 4; (l_428 >= 0); l_428 -= 1)
                { 
                    union U1 **l_463 = (void*)0;
                    uint8_t **l_466 = (void*)0;
                    uint8_t **l_467[2][5][7] = {{{&l_363,&l_363,(void*)0,&l_363,(void*)0,&l_363,&l_363},{&l_363,&l_363,&l_363,&l_363,(void*)0,&l_363,(void*)0},{&l_363,(void*)0,(void*)0,&l_363,&l_363,&l_363,(void*)0},{&l_363,&l_363,&l_363,&l_363,&l_363,&l_363,&l_363},{(void*)0,&l_363,&l_363,(void*)0,&l_363,&l_363,&l_363}},{{(void*)0,&l_363,&l_363,(void*)0,&l_363,&l_363,&l_363},{&l_363,&l_363,&l_363,&l_363,&l_363,&l_363,&l_363},{(void*)0,&l_363,&l_363,(void*)0,&l_363,&l_363,&l_363},{(void*)0,&l_363,&l_363,(void*)0,&l_363,&l_363,&l_363},{&l_363,&l_363,&l_363,&l_363,&l_363,&l_363,&l_363}}};
                    int32_t *l_471 = (void*)0;
                    int32_t *l_472 = &l_429[0];
                    int i, j, k;
                    (**g_56) &= (safe_rshift_func_uint16_t_u_u((safe_lshift_func_int8_t_s_u(((((((safe_sub_func_uint64_t_u_u(p_34, (safe_lshift_func_uint16_t_u_u((((((p_34 > 5UL) & 0x6150L) , (((*l_397) = (safe_lshift_func_int8_t_s_s(0x14L, 4))) , (safe_lshift_func_int16_t_s_u((p_34 ^ (safe_mul_func_int8_t_s_s(((((safe_mod_func_uint8_t_u_u(g_91.f0.f3, p_34)) , l_463) != (void*)0) | p_31), g_53.f2.f3))), 9)))) , 4294967286UL) || l_308), l_414)))) , l_429[1]) , p_34) , (void*)0) != (void*)0) >= 0x1A9CCD3878C1EB0ALL), 2)), 1));
                    (*l_472) |= (0x2873L > (((-4L) && (p_31 > (l_384[2] , ((l_468 = &g_169) == ((safe_sub_func_int16_t_s_s(((*g_57) , ((*g_146) , p_34)), l_411)) , &g_169))))) > l_321));
                }
                for (g_171 = 0; (g_171 == (-7)); g_171--)
                { 
                    int32_t *l_475[5][1][6] = {{{&l_424,&l_308,(void*)0,&l_428,&l_428,(void*)0}},{{&l_428,&l_428,(void*)0,&l_308,&l_424,(void*)0}},{{&l_308,&l_424,(void*)0,&l_424,&l_308,(void*)0}},{{&l_424,&l_308,(void*)0,&l_428,&l_428,(void*)0}},{{&l_428,&l_428,(void*)0,&l_308,&l_424,(void*)0}}};
                    uint32_t l_477 = 0xCD81F5BAL;
                    int i, j, k;
                    l_477++;
                    if (p_34)
                        goto lbl_480;
                }
            }
        }
        else
        { 
            int32_t *l_481 = &g_76[1].f0;
            int32_t *l_482 = &g_76[1].f0;
            int32_t *l_483 = &l_410;
            int32_t *l_484 = (void*)0;
            int32_t *l_485 = &l_410;
            int32_t *l_486 = &l_428;
            int32_t *l_487 = &g_3;
            int32_t l_488 = 0x8563A323L;
            int32_t *l_489 = &g_76[1].f0;
            int32_t l_490 = 3L;
            int32_t *l_491 = (void*)0;
            int32_t *l_492 = &g_281.f0.f0;
            int32_t *l_493 = &l_429[0];
            int32_t *l_494 = &l_308;
            int32_t *l_495 = &g_53.f2.f0;
            int32_t *l_496 = &l_490;
            int32_t *l_497 = &g_91.f1.f0;
            int32_t *l_498 = &l_414;
            int32_t *l_499[7] = {(void*)0,(void*)0,&g_53.f0.f0,(void*)0,(void*)0,&g_53.f0.f0,(void*)0};
            uint64_t l_501 = 0UL;
            int i;
            ++l_501;
            p_32 = ((l_504 ^ (p_31 > ((void*)0 == &g_169))) , &l_429[3]);
            if (((*p_32) = (((((-1L) == (-1L)) , (l_505 , g_267)) , (3UL ^ ((p_31 > (safe_rshift_func_int8_t_s_u(0xDEL, 5))) < 0UL))) , (*p_32))))
            { 
                return l_508;
            }
            else
            { 
                return (*g_56);
            }
        }
    }
    else
    { 
        uint8_t l_509 = 0xEFL;
        int32_t l_512[6];
        int32_t *l_513 = &g_76[1].f0;
        int32_t *l_514[3];
        int8_t l_517[2][5];
        int i, j;
        for (i = 0; i < 6; i++)
            l_512[i] = 0xA4C571C7L;
        for (i = 0; i < 3; i++)
            l_514[i] = &g_91.f1.f0;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 5; j++)
                l_517[i][j] = 0x26L;
        }
        ++l_509;
        l_519++;
        (*p_32) ^= (safe_unary_minus_func_int8_t_s((&g_283[2] != &g_283[0])));
        return p_32;
    }
    return p_32;
}



static int8_t * func_37(int32_t * p_38, union U2  p_39, struct S0  p_40, union U2  p_41)
{ 
    int32_t * const l_60 = (void*)0;
    int32_t * const *l_59[7];
    int32_t * const **l_58 = &l_59[0];
    int8_t *l_72 = &g_53.f0.f2;
    struct S0 *l_75 = &g_76[1];
    union U3 *l_90 = &g_91;
    int32_t l_133 = 0x1DE1D06BL;
    int16_t l_134 = 0xC260L;
    uint16_t *l_144 = &g_50;
    uint16_t l_201 = 1UL;
    uint64_t l_209[2];
    int32_t **l_213 = &g_57;
    uint32_t l_261 = 18446744073709551615UL;
    int i;
    for (i = 0; i < 7; i++)
        l_59[i] = &l_60;
    for (i = 0; i < 2; i++)
        l_209[i] = 0xD4BB3A84E4E45EC4LL;
    if ((safe_lshift_func_int8_t_s_u((((*g_56) = ((g_56 != ((*l_58) = &g_57)) , (*g_56))) == (void*)0), 7)))
    { 
        if ((safe_sub_func_uint64_t_u_u(0UL, g_53.f2.f1)))
        { 
lbl_302:
            (*g_56) = (void*)0;
        }
        else
        { 
            uint32_t l_63 = 0xAC8918CBL;
            int32_t ***l_70 = (void*)0;
            int32_t ****l_69 = &l_70;
            (*p_38) |= l_63;
            g_66 = (safe_rshift_func_int16_t_s_u(0x6ED4L, 3));
            for (p_40.f0 = (-15); (p_40.f0 == 27); p_40.f0 = safe_add_func_uint64_t_u_u(p_40.f0, 3))
            { 
                int32_t *****l_71 = &l_69;
                (*l_71) = l_69;
            }
        }
        return l_72;
    }
    else
    { 
        int32_t *l_73 = &g_53.f2.f0;
        int32_t ***l_85[7][5];
        int8_t *l_87 = &g_76[1].f2;
        const union U2 l_93[6][1] = {{{{0xFF566449L,0L,0xF6L,0x069ABC45L}}},{{{-8L,0x20L,0xF8L,0xC1F29C70L}}},{{{0xFF566449L,0L,0xF6L,0x069ABC45L}}},{{{-8L,0x20L,0xF8L,0xC1F29C70L}}},{{{0xFF566449L,0L,0xF6L,0x069ABC45L}}},{{{-8L,0x20L,0xF8L,0xC1F29C70L}}}};
        union U1 l_95[4][5][2] = {{{{1UL},{0xAB62L}},{{1UL},{0UL}},{{0x2682L},{1UL}},{{0UL},{0xAB62L}},{{7UL},{7UL}}},{{{0x2682L},{7UL}},{{7UL},{0xAB62L}},{{0UL},{1UL}},{{0x2682L},{0UL}},{{1UL},{0xAB62L}}},{{{1UL},{0UL}},{{0x2682L},{1UL}},{{0UL},{0xAB62L}},{{7UL},{7UL}},{{0x2682L},{7UL}}},{{{7UL},{0xAB62L}},{{0UL},{1UL}},{{0x2682L},{0UL}},{{1UL},{0xAB62L}},{{1UL},{0UL}}}};
        uint16_t *l_176 = &l_95[1][1][1].f0;
        union U3 l_239 = {{0x19B8F03CL,-1L,0xCBL,0x13674563L}};
        uint32_t l_258 = 0xCCACB046L;
        int i, j, k;
        for (i = 0; i < 7; i++)
        {
            for (j = 0; j < 5; j++)
                l_85[i][j] = &g_56;
        }
        (*g_56) = l_73;
        l_75 = g_74;
        for (g_66 = 19; (g_66 == 59); g_66 = safe_add_func_int16_t_s_s(g_66, 7))
        { 
            int16_t l_86 = (-3L);
            (*p_38) = (g_53.f2.f1 <= (safe_div_func_uint8_t_u_u((safe_mod_func_uint64_t_u_u(p_39.f0.f0, (safe_rshift_func_int8_t_s_u((l_85[4][4] == (void*)0), 4)))), 251UL)));
            (*p_38) &= (0x2F105EEFFBB8911FLL ^ (g_53.f0.f2 && (l_86 |= (**g_56))));
            return l_87;
        }
        for (p_40.f2 = 4; (p_40.f2 >= 0); p_40.f2 -= 1)
        { 
            return l_72;
        }
        for (p_40.f2 = 0; (p_40.f2 >= (-7)); p_40.f2 = safe_sub_func_uint32_t_u_u(p_40.f2, 3))
        { 
            union U3 **l_92 = &l_90;
            int32_t l_94 = 0x91B61232L;
            union U3 *l_135 = &g_91;
            union U1 l_162 = {0x2EC4L};
            int32_t *** const l_174 = &g_56;
            int32_t *l_215[4] = {&g_76[1].f0,&g_76[1].f0,&g_76[1].f0,&g_76[1].f0};
            uint16_t l_219 = 0x3CC8L;
            int64_t l_249[5] = {5L,5L,5L,5L,5L};
            int8_t l_295[1][5];
            int i, j;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 5; j++)
                    l_295[i][j] = (-8L);
            }
            (*l_92) = l_90;
        }
    }
    if (g_53.f2.f0)
        goto lbl_302;
    return l_72;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_3, "g_3", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_6[i][j][k], "g_6[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_7, "g_7", print_hash_value);
    transparent_crc(g_50, "g_50", print_hash_value);
    transparent_crc(g_53.f0.f0, "g_53.f0.f0", print_hash_value);
    transparent_crc(g_53.f0.f1, "g_53.f0.f1", print_hash_value);
    transparent_crc(g_53.f0.f2, "g_53.f0.f2", print_hash_value);
    transparent_crc(g_53.f0.f3, "g_53.f0.f3", print_hash_value);
    transparent_crc(g_53.f2.f0, "g_53.f2.f0", print_hash_value);
    transparent_crc(g_53.f2.f1, "g_53.f2.f1", print_hash_value);
    transparent_crc(g_53.f2.f2, "g_53.f2.f2", print_hash_value);
    transparent_crc(g_53.f2.f3, "g_53.f2.f3", print_hash_value);
    transparent_crc(g_66, "g_66", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_76[i].f0, "g_76[i].f0", print_hash_value);
        transparent_crc(g_76[i].f1, "g_76[i].f1", print_hash_value);
        transparent_crc(g_76[i].f2, "g_76[i].f2", print_hash_value);
        transparent_crc(g_76[i].f3, "g_76[i].f3", print_hash_value);

    }
    transparent_crc(g_91.f0.f0, "g_91.f0.f0", print_hash_value);
    transparent_crc(g_91.f0.f1, "g_91.f0.f1", print_hash_value);
    transparent_crc(g_91.f0.f2, "g_91.f0.f2", print_hash_value);
    transparent_crc(g_91.f0.f3, "g_91.f0.f3", print_hash_value);
    transparent_crc(g_91.f1.f0, "g_91.f1.f0", print_hash_value);
    transparent_crc(g_91.f1.f1, "g_91.f1.f1", print_hash_value);
    transparent_crc(g_91.f1.f2, "g_91.f1.f2", print_hash_value);
    transparent_crc(g_91.f1.f3, "g_91.f1.f3", print_hash_value);
    transparent_crc(g_104, "g_104", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(g_106[i][j][k], "g_106[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_108[i], "g_108[i]", print_hash_value);

    }
    transparent_crc(g_169, "g_169", print_hash_value);
    transparent_crc(g_171, "g_171", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_222[i][j][k], "g_222[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(g_248[i][j][k], "g_248[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_251, "g_251", print_hash_value);
    transparent_crc(g_267.f0, "g_267.f0", print_hash_value);
    transparent_crc(g_281.f0.f0, "g_281.f0.f0", print_hash_value);
    transparent_crc(g_281.f0.f1, "g_281.f0.f1", print_hash_value);
    transparent_crc(g_281.f0.f2, "g_281.f0.f2", print_hash_value);
    transparent_crc(g_281.f0.f3, "g_281.f0.f3", print_hash_value);
    transparent_crc(g_281.f2.f0, "g_281.f2.f0", print_hash_value);
    transparent_crc(g_281.f2.f1, "g_281.f2.f1", print_hash_value);
    transparent_crc(g_281.f2.f2, "g_281.f2.f2", print_hash_value);
    transparent_crc(g_281.f2.f3, "g_281.f2.f3", print_hash_value);
    transparent_crc(g_400, "g_400", print_hash_value);
    transparent_crc(g_542, "g_542", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_738[i].f0, "g_738[i].f0", print_hash_value);
        transparent_crc(g_738[i].f1, "g_738[i].f1", print_hash_value);
        transparent_crc(g_738[i].f2, "g_738[i].f2", print_hash_value);
        transparent_crc(g_738[i].f3, "g_738[i].f3", print_hash_value);

    }
    transparent_crc(g_762, "g_762", print_hash_value);
    transparent_crc(g_1268, "g_1268", print_hash_value);
    transparent_crc(g_1411, "g_1411", print_hash_value);
    transparent_crc(g_1595, "g_1595", print_hash_value);
    transparent_crc(g_1674, "g_1674", print_hash_value);
    transparent_crc(g_1753, "g_1753", print_hash_value);
    transparent_crc(g_1766.f0.f0, "g_1766.f0.f0", print_hash_value);
    transparent_crc(g_1766.f0.f1, "g_1766.f0.f1", print_hash_value);
    transparent_crc(g_1766.f0.f2, "g_1766.f0.f2", print_hash_value);
    transparent_crc(g_1766.f0.f3, "g_1766.f0.f3", print_hash_value);
    transparent_crc(g_1766.f1.f0, "g_1766.f1.f0", print_hash_value);
    transparent_crc(g_1766.f1.f1, "g_1766.f1.f1", print_hash_value);
    transparent_crc(g_1766.f1.f2, "g_1766.f1.f2", print_hash_value);
    transparent_crc(g_1766.f1.f3, "g_1766.f1.f3", print_hash_value);
    transparent_crc(g_1857, "g_1857", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(g_1914[i][j], "g_1914[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_1954, "g_1954", print_hash_value);
    transparent_crc(g_2132, "g_2132", print_hash_value);
    transparent_crc(g_2175, "g_2175", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_2214[i][j].f0.f0, "g_2214[i][j].f0.f0", print_hash_value);
            transparent_crc(g_2214[i][j].f0.f1, "g_2214[i][j].f0.f1", print_hash_value);
            transparent_crc(g_2214[i][j].f0.f2, "g_2214[i][j].f0.f2", print_hash_value);
            transparent_crc(g_2214[i][j].f0.f3, "g_2214[i][j].f0.f3", print_hash_value);
            transparent_crc(g_2214[i][j].f2.f0, "g_2214[i][j].f2.f0", print_hash_value);
            transparent_crc(g_2214[i][j].f2.f1, "g_2214[i][j].f2.f1", print_hash_value);
            transparent_crc(g_2214[i][j].f2.f2, "g_2214[i][j].f2.f2", print_hash_value);
            transparent_crc(g_2214[i][j].f2.f3, "g_2214[i][j].f2.f3", print_hash_value);

        }
    }
    transparent_crc(g_2259, "g_2259", print_hash_value);
    transparent_crc(g_2327, "g_2327", print_hash_value);
    transparent_crc(g_2361, "g_2361", print_hash_value);
    transparent_crc(g_2431, "g_2431", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
