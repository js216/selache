// SPDX-License-Identifier: MIT
// cctest_csmith_3a69bffe.c --- cctest case csmith_3a69bffe (csmith seed 980008958)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xecf71ecb */
/* @exp_ticks 0x5516 */

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

// Options:   -s 980008958 -o /tmp/csmith_gen_2f4ep6tq/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   uint32_t  f0;
   int64_t  f1;
};
#pragma pack(pop)

#pragma pack(push)
#pragma pack(1)
struct S1 {
   uint64_t  f0;
   int32_t  f1;
   const int32_t  f2;
   int8_t  f3;
   uint32_t  f4;
   int16_t  f5;
};
#pragma pack(pop)

#pragma pack(push)
#pragma pack(1)
struct S2 {
   int8_t  f0;
   uint16_t  f1;
   uint32_t  f2;
   uint16_t  f3;
};
#pragma pack(pop)

struct S3 {
   const int8_t  f0;
   struct S0  f1;
   const int32_t  f2;
};

union U4 {
   int16_t  f0;
   int32_t  f1;
   uint32_t  f2;
};


static struct S1 g_12 = {0x3063D62A04F77722LL,0L,-1L,0x73L,0xE4C7BA3FL,0L};
static uint32_t g_39[1] = {0UL};
static int32_t g_75 = 0x4EC24AADL;
static int16_t g_77 = 0xDD7DL;
static int8_t g_78 = 0xC6L;
static uint64_t g_79 = 0xA8D2DEF253AD3D76LL;
static struct S2 g_83 = {2L,0x6F53L,6UL,0xAD1FL};
static const struct S0 g_99[3][5][3] = {{{{0UL,1L},{0UL,1L},{0x0EDC5ECFL,0xBD7A0FECAD7D98C0LL}},{{0x3AE4ACFCL,-3L},{0xE96DC68BL,0x58D0DBADF6968256LL},{0x0EDC5ECFL,0xBD7A0FECAD7D98C0LL}},{{0xE96DC68BL,0x58D0DBADF6968256LL},{0x3AE4ACFCL,-3L},{0x0EDC5ECFL,0xBD7A0FECAD7D98C0LL}},{{0UL,1L},{0UL,1L},{0x0EDC5ECFL,0xBD7A0FECAD7D98C0LL}},{{0x3AE4ACFCL,-3L},{0xE96DC68BL,0x58D0DBADF6968256LL},{0x0EDC5ECFL,0xBD7A0FECAD7D98C0LL}}},{{{0xE96DC68BL,0x58D0DBADF6968256LL},{0x3AE4ACFCL,-3L},{0x0EDC5ECFL,0xBD7A0FECAD7D98C0LL}},{{0UL,1L},{0UL,1L},{0x0EDC5ECFL,0xBD7A0FECAD7D98C0LL}},{{0x3AE4ACFCL,-3L},{0xE96DC68BL,0x58D0DBADF6968256LL},{0x0EDC5ECFL,0xBD7A0FECAD7D98C0LL}},{{0xE96DC68BL,0x58D0DBADF6968256LL},{0x3AE4ACFCL,-3L},{0x0EDC5ECFL,0xBD7A0FECAD7D98C0LL}},{{0UL,1L},{0UL,1L},{0x0EDC5ECFL,0xBD7A0FECAD7D98C0LL}}},{{{0x3AE4ACFCL,-3L},{0xE96DC68BL,0x58D0DBADF6968256LL},{0x0EDC5ECFL,0xBD7A0FECAD7D98C0LL}},{{0xE96DC68BL,0x58D0DBADF6968256LL},{0x3AE4ACFCL,-3L},{0x0EDC5ECFL,0xBD7A0FECAD7D98C0LL}},{{0UL,1L},{0UL,1L},{0x0EDC5ECFL,0xBD7A0FECAD7D98C0LL}},{{0x3AE4ACFCL,-3L},{0xE96DC68BL,0x58D0DBADF6968256LL},{0x0EDC5ECFL,0xBD7A0FECAD7D98C0LL}},{{0xE96DC68BL,0x58D0DBADF6968256LL},{0x3AE4ACFCL,-3L},{0x0EDC5ECFL,0xBD7A0FECAD7D98C0LL}}}};
static uint32_t g_116 = 18446744073709551612UL;
static struct S1 g_128 = {1UL,0x419847BFL,0x707698F8L,7L,18446744073709551615UL,3L};
static union U4 g_139[5] = {{0x0381L},{0x0381L},{0x0381L},{0x0381L},{0x0381L}};
static uint32_t g_170 = 0x5897DADBL;
static int64_t g_187 = 0x8F8F8D087CFFAC30LL;
static int32_t g_212 = 0x7FCCDD10L;
static int32_t g_213 = 0L;
static uint32_t g_214 = 1UL;
static int8_t g_278 = 0x49L;
static int8_t g_287 = 0x91L;
static int32_t g_309 = 0xA017D168L;
static uint8_t g_348 = 0xBDL;
static uint64_t g_374 = 0xA64C0B98C0314AC4LL;



static uint32_t  func_1(void);
static const struct S2  func_2(struct S1  p_3, int32_t  p_4, struct S1  p_5);
static struct S1  func_6(union U4  p_7, uint16_t  p_8);
static struct S2  func_10(struct S1  p_11);




static uint32_t  func_1(void)
{ 
    union U4 l_9 = {1L};
    struct S2 l_136 = {1L,0UL,2UL,0x01C9L};
    int32_t l_142 = (-1L);
    int64_t l_190[1][3];
    uint8_t l_238 = 0xB9L;
    uint8_t l_265 = 0xBBL;
    int32_t l_277[2][3][5];
    uint16_t l_373 = 1UL;
    int i, j, k;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
            l_190[i][j] = 0x9EA4207287C90910LL;
    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 5; k++)
                l_277[i][j][k] = 0x9B55ACEFL;
        }
    }
    l_136 = func_2(func_6(l_9, (func_10(g_12) , (safe_mod_func_uint32_t_u_u((0x5ED9L & (-1L)), g_78)))), g_83.f2, g_128);
    if (((safe_rshift_func_int8_t_s_s((l_9.f1 = (g_83.f0 = (g_78 = (g_139[1] , (l_136.f2 > 4L))))), (l_142 = (safe_add_func_uint64_t_u_u((g_83.f1 < l_136.f1), g_128.f0))))) | l_136.f3))
    { 
        int16_t l_153 = 0xD7E1L;
        int32_t l_166 = 0x8DBFCDDEL;
        int32_t l_169 = (-10L);
        struct S1 l_203 = {0x0586A296AE8CEF9BLL,0x32C21BFEL,0x4DCC298DL,2L,0xF07D2D84L,-1L};
        int32_t l_229 = 0xC516764EL;
        union U4 l_240[1][2][5] = {{{{9L},{9L},{9L},{9L},{9L}},{{-1L},{-1L},{-1L},{-1L},{-1L}}}};
        uint32_t l_264 = 0xC04DE0A3L;
        int64_t l_272 = 8L;
        int i, j, k;
        if ((g_12.f0 || (g_12.f1 & (((safe_mod_func_uint16_t_u_u((safe_mul_func_int8_t_s_s((!(((((~g_12.f2) <= (safe_mul_func_uint16_t_u_u((safe_sub_func_uint32_t_u_u((g_139[1] , 0x5C73037AL), g_83.f2)), g_12.f2))) > g_12.f0) >= g_12.f2) <= g_75)), l_153)), l_136.f3)) ^ g_12.f4) == 4294967295UL))))
        { 
            uint32_t l_160 = 0UL;
            int32_t l_161 = 8L;
            int32_t l_164[2][3][4] = {{{0L,0x42CAFECBL,0x9908F0AEL,0x42CAFECBL},{0x42CAFECBL,(-1L),0x9908F0AEL,0x9908F0AEL},{0L,0L,0x42CAFECBL,0x9908F0AEL}},{{0x317F3169L,(-1L),0x317F3169L,0x42CAFECBL},{0x317F3169L,0x42CAFECBL,0x42CAFECBL,0x317F3169L},{0L,0x42CAFECBL,0x9908F0AEL,0x42CAFECBL}}};
            int32_t l_165 = 0x197A97A6L;
            int16_t l_167 = 0x7379L;
            int32_t l_189 = 0x998BE7CBL;
            int i, j, k;
            if ((safe_add_func_uint32_t_u_u((safe_div_func_uint32_t_u_u((safe_mul_func_uint8_t_u_u(l_160, l_161)), 4L)), ((((l_153 | l_136.f0) || 1UL) == g_12.f2) > g_99[1][1][2].f1))))
            { 
                l_166 = (safe_mod_func_uint32_t_u_u((l_164[1][2][1] = 1UL), l_165));
                g_12.f1 ^= (g_128.f1 &= (l_164[1][2][1] = (l_166 != (((l_161 < g_128.f2) , (l_142 = 4294967295UL)) | 4294967295UL))));
                g_128.f1 &= 1L;
            }
            else
            { 
                int32_t l_168 = 1L;
                uint64_t l_188[5][5][2] = {{{18446744073709551612UL,8UL},{0UL,8UL},{18446744073709551612UL,18446744073709551615UL},{18446744073709551615UL,8UL},{1UL,8UL}},{{18446744073709551615UL,18446744073709551615UL},{18446744073709551612UL,8UL},{0UL,8UL},{18446744073709551612UL,18446744073709551615UL},{18446744073709551615UL,8UL}},{{1UL,8UL},{18446744073709551615UL,18446744073709551615UL},{18446744073709551612UL,8UL},{0UL,8UL},{18446744073709551612UL,18446744073709551615UL}},{{18446744073709551615UL,8UL},{1UL,8UL},{18446744073709551615UL,18446744073709551615UL},{18446744073709551612UL,8UL},{0UL,8UL}},{{18446744073709551612UL,18446744073709551615UL},{18446744073709551615UL,8UL},{1UL,8UL},{18446744073709551615UL,18446744073709551615UL},{18446744073709551612UL,8UL}}};
                int i, j, k;
                ++g_170;
                g_128.f1 |= (l_168 = (g_139[1].f1 = (safe_div_func_uint64_t_u_u((+(((safe_div_func_int8_t_s_s((((safe_lshift_func_int16_t_s_s(((l_189 = (((l_164[1][0][2] = (~(safe_sub_func_int16_t_s_s((g_77 = (((func_10(((g_12.f1 ^ ((g_128.f0 ^= (safe_lshift_func_int16_t_s_u(((((0L | ((safe_mod_func_int8_t_s_s(0x54L, (g_187 = l_166))) < 0x271F3292L)) < l_166) | g_116) == 0x91A12F19L), g_79))) | l_188[2][2][1])) , g_12)) , 0x45721076L) <= 0xED249FA4L) > l_160)), g_170)))) || g_99[1][1][2].f1) != g_83.f1)) && l_190[0][2]), 0)) && g_78) || 4L), g_128.f4)) == l_136.f3) , 0x18C3DD0E6EDD9AE8LL)), 0x5D3234534E8C1A8FLL))));
            }
            return g_83.f0;
        }
        else
        { 
            uint32_t l_206 = 0UL;
            uint8_t l_228 = 0x1CL;
            union U4 l_235 = {1L};
            int8_t l_279 = 0x27L;
            int64_t l_308 = 0x47CE60284BEE72BBLL;
            for (g_83.f3 = 0; (g_83.f3 <= 7); g_83.f3++)
            { 
                uint64_t l_207 = 0x3CB27E7055068102LL;
                g_12.f1 ^= (l_142 = (((safe_rshift_func_int8_t_s_s(((safe_add_func_int8_t_s_s(l_169, (safe_div_func_uint32_t_u_u(g_12.f4, (safe_mod_func_uint16_t_u_u((l_9.f1 = (safe_mod_func_uint64_t_u_u(((l_203 , (((((safe_mod_func_uint8_t_u_u(l_206, g_187)) | (-3L)) <= 18446744073709551615UL) >= l_203.f0) && 0UL)) == 0L), l_207))), 0xCA00L)))))) == 0xAF24L), g_39[0])) < 1UL) & 247UL));
            }
            if ((((safe_sub_func_int32_t_s_s(((safe_lshift_func_uint8_t_u_s((--g_214), 5)) <= (safe_lshift_func_uint8_t_u_s(((((g_12.f0 = (safe_rshift_func_uint8_t_u_s(g_170, 5))) > (g_79 = (safe_add_func_int64_t_s_s((((safe_unary_minus_func_int8_t_s((g_128.f2 != ((g_139[1].f2 = (safe_sub_func_uint16_t_u_u((safe_sub_func_int32_t_s_s(l_206, ((l_166 = (l_228 > g_128.f5)) <= 0xB2371027L))), g_99[1][1][2].f0))) || l_229)))) <= l_153) > g_83.f2), g_83.f3)))) , 0xFAL) , g_83.f0), l_136.f3))), g_128.f1)) > l_228) < 65535UL))
            { 
                uint16_t l_239[2];
                int32_t l_252[1][4];
                int i, j;
                for (i = 0; i < 2; i++)
                    l_239[i] = 0x5037L;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 4; j++)
                        l_252[i][j] = 0L;
                }
                g_128.f1 |= ((0xCC0EL <= (safe_mul_func_uint16_t_u_u((safe_add_func_uint64_t_u_u((~0x27AE3811L), ((((((l_235 , (((((((-3L) > g_12.f2) && 0L) <= l_190[0][0]) > 0x90BFC1F7L) <= 0x18L) || l_238)) & l_203.f5) || l_239[1]) , 1L) , l_240[0][0][3]) , g_77))), 0xD99EL))) && l_136.f1);
                l_229 = (safe_add_func_int64_t_s_s(l_239[0], (safe_rshift_func_uint16_t_u_s((+((g_79 > (g_213 & (safe_add_func_int8_t_s_s((l_239[1] < 0xEA9A851CDA068A9CLL), (-4L))))) ^ 4294967292UL)), 15))));
                l_252[0][1] = ((0x7CD90A56L & (g_128.f2 & ((safe_sub_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u((g_83.f2 || ((g_128.f1 || 0x69L) != 8UL)), l_206)), g_78)) < g_128.f5))) >= 0xAA8DCA40L);
            }
            else
            { 
                uint32_t l_263 = 0x50ED1BE1L;
                int32_t l_273 = 1L;
                g_12.f1 = ((((safe_sub_func_int64_t_s_s(g_12.f1, (safe_rshift_func_uint8_t_u_s(((((safe_sub_func_uint64_t_u_u((((((((((safe_lshift_func_int8_t_s_s((((((safe_mod_func_uint8_t_u_u((g_128 , 254UL), 0x04L)) ^ l_9.f1) && 1L) != l_263) , g_12.f2), l_136.f2)) <= 0x5B2A2280188A7BE3LL) || 0x8598E06BF6E393A5LL) ^ g_139[1].f0) & 0xB2L) == g_213) == l_263) ^ g_39[0]) < l_228), l_264)) <= l_136.f3) <= l_265) == g_128.f5), l_229)))) , l_238) >= l_263) == l_228);
                l_169 ^= ((l_203.f5 || (((safe_lshift_func_uint8_t_u_s((l_272 |= ((safe_rshift_func_uint16_t_u_u((l_203.f1 = 0x71F9L), 11)) && (g_12.f4 && ((safe_sub_func_int16_t_s_s((-3L), 0UL)) <= l_190[0][2])))), l_263)) <= (-7L)) == l_273)) == l_265);
            }
            if (((g_79 < ((((safe_rshift_func_uint16_t_u_u((l_142 = 65533UL), 7)) > g_139[1].f0) >= ((safe_unary_minus_func_uint8_t_u((g_278 = l_277[1][0][2]))) && 0xCE06L)) != 0UL)) , l_235.f0))
            { 
                uint16_t l_286 = 0x5F04L;
                l_279 ^= (-4L);
                g_128.f1 = (safe_rshift_func_int16_t_s_u(((l_203.f2 < ((safe_div_func_uint32_t_u_u((g_79 | g_128.f3), (safe_mul_func_int8_t_s_s(g_79, 0xE8L)))) <= 0xDFE3L)) ^ l_286), g_287));
            }
            else
            { 
                int16_t l_307 = 0x5A52L;
                g_128.f1 = (safe_mod_func_int8_t_s_s(((safe_rshift_func_uint16_t_u_s((safe_rshift_func_uint8_t_u_s(((safe_mod_func_int16_t_s_s((safe_rshift_func_uint16_t_u_u(((g_187 = ((((g_12.f4 || g_39[0]) > l_203.f5) && ((((safe_lshift_func_int8_t_s_u((((((((safe_rshift_func_uint16_t_u_s((safe_sub_func_int32_t_s_s((g_139[1].f1 = (safe_unary_minus_func_int64_t_s((safe_mul_func_int8_t_s_s(g_128.f2, g_39[0]))))), 0x2BC7AE79L)), 7)) >= g_12.f0) | 0x975BL) <= l_169) <= l_307) == g_99[1][1][2].f1) ^ 8L), 4)) > l_264) & g_128.f5) >= 65535UL)) || l_272)) < 18446744073709551606UL), 14)), l_235.f0)) != l_308), g_309)), 1)) == g_128.f0), 9UL));
            }
        }
    }
    else
    { 
        uint16_t l_324 = 0xCCDEL;
        int32_t l_325 = 0x26545102L;
        const struct S3 l_334[5][5][3] = {{{{-1L,{4294967295UL,0x151C496369D72CE7LL},1L},{1L,{4294967288UL,2L},6L},{-8L,{0x942EDEBCL,0x6506CFC8072FBC8BLL},0xD86BD461L}},{{1L,{0x5CEF59ACL,0x40D512D91D2613B3LL},-9L},{1L,{4294967288UL,2L},6L},{1L,{0x5CEF59ACL,0x40D512D91D2613B3LL},-9L}},{{0x6CL,{4294967295UL,0x04639052B1F58D6FLL},0xAA3A57C6L},{0x5AL,{3UL,0x29B021E3EDD6AE4ELL},0x8C5958A5L},{-8L,{0x942EDEBCL,0x6506CFC8072FBC8BLL},0xD86BD461L}},{{0x6CL,{4294967295UL,0x04639052B1F58D6FLL},0xAA3A57C6L},{0x70L,{0x7DF3C1CDL,0x120B94C4172076B7LL},-2L},{-1L,{4294967295UL,0x151C496369D72CE7LL},1L}},{{1L,{0x5CEF59ACL,0x40D512D91D2613B3LL},-9L},{0x5AL,{3UL,0x29B021E3EDD6AE4ELL},0x8C5958A5L},{-1L,{4294967295UL,0x151C496369D72CE7LL},1L}}},{{{-1L,{4294967295UL,0x151C496369D72CE7LL},1L},{1L,{4294967288UL,2L},6L},{-8L,{0x942EDEBCL,0x6506CFC8072FBC8BLL},0xD86BD461L}},{{1L,{0x5CEF59ACL,0x40D512D91D2613B3LL},-9L},{1L,{4294967288UL,2L},6L},{1L,{0x5CEF59ACL,0x40D512D91D2613B3LL},-9L}},{{0x6CL,{4294967295UL,0x04639052B1F58D6FLL},0xAA3A57C6L},{0x5AL,{3UL,0x29B021E3EDD6AE4ELL},0x8C5958A5L},{-8L,{0x942EDEBCL,0x6506CFC8072FBC8BLL},0xD86BD461L}},{{0x6CL,{4294967295UL,0x04639052B1F58D6FLL},0xAA3A57C6L},{0x70L,{0x7DF3C1CDL,0x120B94C4172076B7LL},-2L},{-1L,{4294967295UL,0x151C496369D72CE7LL},1L}},{{1L,{0x5CEF59ACL,0x40D512D91D2613B3LL},-9L},{0x5AL,{3UL,0x29B021E3EDD6AE4ELL},0x8C5958A5L},{-1L,{4294967295UL,0x151C496369D72CE7LL},1L}}},{{{-1L,{4294967295UL,0x151C496369D72CE7LL},1L},{1L,{4294967288UL,2L},6L},{-8L,{0x942EDEBCL,0x6506CFC8072FBC8BLL},0xD86BD461L}},{{1L,{0x5CEF59ACL,0x40D512D91D2613B3LL},-9L},{1L,{4294967288UL,2L},6L},{1L,{0x5CEF59ACL,0x40D512D91D2613B3LL},-9L}},{{0x6CL,{4294967295UL,0x04639052B1F58D6FLL},0xAA3A57C6L},{0x5AL,{3UL,0x29B021E3EDD6AE4ELL},0x8C5958A5L},{-8L,{0x942EDEBCL,0x6506CFC8072FBC8BLL},0xD86BD461L}},{{0x6CL,{4294967295UL,0x04639052B1F58D6FLL},0xAA3A57C6L},{0x70L,{0x7DF3C1CDL,0x120B94C4172076B7LL},-2L},{-1L,{4294967295UL,0x151C496369D72CE7LL},1L}},{{1L,{0x5CEF59ACL,0x40D512D91D2613B3LL},-9L},{0x5AL,{3UL,0x29B021E3EDD6AE4ELL},0x8C5958A5L},{-1L,{4294967295UL,0x151C496369D72CE7LL},1L}}},{{{-1L,{4294967295UL,0x151C496369D72CE7LL},1L},{1L,{4294967288UL,2L},6L},{-8L,{0x942EDEBCL,0x6506CFC8072FBC8BLL},0xD86BD461L}},{{1L,{0x5CEF59ACL,0x40D512D91D2613B3LL},-9L},{1L,{4294967288UL,2L},6L},{1L,{0x5CEF59ACL,0x40D512D91D2613B3LL},-9L}},{{0x6CL,{4294967295UL,0x04639052B1F58D6FLL},0xAA3A57C6L},{0x5AL,{3UL,0x29B021E3EDD6AE4ELL},0x8C5958A5L},{-8L,{0x942EDEBCL,0x6506CFC8072FBC8BLL},0xD86BD461L}},{{0x6CL,{4294967295UL,0x04639052B1F58D6FLL},0xAA3A57C6L},{0x70L,{0x7DF3C1CDL,0x120B94C4172076B7LL},-2L},{-1L,{4294967295UL,0x151C496369D72CE7LL},1L}},{{1L,{0x5CEF59ACL,0x40D512D91D2613B3LL},-9L},{0x5AL,{3UL,0x29B021E3EDD6AE4ELL},0x8C5958A5L},{-1L,{4294967295UL,0x151C496369D72CE7LL},1L}}},{{{-1L,{4294967295UL,0x151C496369D72CE7LL},1L},{1L,{4294967288UL,2L},6L},{-8L,{0x942EDEBCL,0x6506CFC8072FBC8BLL},0xD86BD461L}},{{1L,{0x5CEF59ACL,0x40D512D91D2613B3LL},-9L},{1L,{4294967288UL,2L},6L},{1L,{0x5CEF59ACL,0x40D512D91D2613B3LL},-9L}},{{0x6CL,{4294967295UL,0x04639052B1F58D6FLL},0xAA3A57C6L},{0x5AL,{3UL,0x29B021E3EDD6AE4ELL},0x8C5958A5L},{-8L,{0x942EDEBCL,0x6506CFC8072FBC8BLL},0xD86BD461L}},{{0x6CL,{4294967295UL,0x04639052B1F58D6FLL},0xAA3A57C6L},{0x70L,{0x7DF3C1CDL,0x120B94C4172076B7LL},-2L},{-1L,{4294967295UL,0x151C496369D72CE7LL},1L}},{{1L,{0x5CEF59ACL,0x40D512D91D2613B3LL},-9L},{0x5AL,{3UL,0x29B021E3EDD6AE4ELL},0x8C5958A5L},{-1L,{4294967295UL,0x151C496369D72CE7LL},1L}}}};
        struct S1 l_350 = {0x830CF6C2580E9100LL,1L,-1L,0xCDL,9UL,4L};
        int i, j, k;
        for (g_79 = 0; (g_79 == 19); g_79++)
        { 
            const int32_t l_318 = 0xC3BA4103L;
            int32_t l_349 = 8L;
            for (g_77 = 0; (g_77 < (-27)); g_77 = safe_sub_func_uint64_t_u_u(g_77, 5))
            { 
                int32_t l_319[2];
                int i;
                for (i = 0; i < 2; i++)
                    l_319[i] = 0L;
                l_325 |= ((safe_rshift_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u(l_318, g_278)), l_319[1])) | (g_139[1].f1 = (safe_rshift_func_uint16_t_u_s((safe_add_func_int16_t_s_s(l_324, l_318)), l_238))));
                l_9.f1 = ((g_12.f1 | 0xE1FEL) | (safe_mul_func_int16_t_s_s((((safe_rshift_func_uint16_t_u_u((safe_div_func_int8_t_s_s(g_79, (g_287 |= l_324))), l_318)) < g_75) <= 6UL), l_265)));
            }
            g_139[1].f1 = (safe_sub_func_int16_t_s_s(((l_318 < (l_334[4][3][2] , l_136.f0)) & (safe_lshift_func_uint16_t_u_s(((2UL & l_318) & g_170), g_12.f3))), g_128.f4));
            for (g_187 = 0; (g_187 <= 0); g_187 += 1)
            { 
                uint64_t l_337 = 0x89C62AA492540752LL;
                int32_t l_346 = 0L;
                int32_t l_347 = 0L;
                ++l_337;
                l_325 |= (((g_83.f1 = (safe_lshift_func_uint16_t_u_u(((g_309 < l_334[4][3][2].f1.f0) | g_12.f2), 10))) | (safe_mul_func_int8_t_s_s((g_287 = ((safe_rshift_func_uint8_t_u_s((l_347 |= ((((l_346 = ((l_318 & 8UL) < g_12.f4)) , g_78) && l_318) && g_99[1][1][2].f0)), g_348)) <= (-1L))), 1L))) == l_324);
                l_349 = 0x5099852CL;
            }
        }
        for (g_128.f3 = 0; (g_128.f3 <= 0); g_128.f3 += 1)
        { 
            struct S0 l_351[5][1] = {{{4294967293UL,8L}},{{4294967293UL,8L}},{{4294967293UL,8L}},{{4294967293UL,8L}},{{4294967293UL,8L}}};
            int i, j;
            l_351[2][0] = (g_128 , (l_350 , l_351[2][0]));
            for (l_325 = 0; (l_325 <= 0); l_325 += 1)
            { 
                int32_t l_366[5];
                struct S2 l_376[1] = {{0x91L,0x71E0L,0x880F6949L,1UL}};
                int i, j;
                for (i = 0; i < 5; i++)
                    l_366[i] = 0L;
                g_374 ^= (((((safe_rshift_func_uint8_t_u_s((((!((((safe_add_func_uint8_t_u_u((safe_rshift_func_int16_t_s_s((((l_142 &= (((((l_277[1][1][3] = (l_190[g_128.f3][(g_128.f3 + 1)] , (safe_mul_func_int8_t_s_s(((!((g_214 |= (safe_lshift_func_uint16_t_u_u(g_39[l_325], (251UL | ((g_128.f0 = (safe_div_func_uint16_t_u_u((g_83.f1++), ((l_366[3] ^= (safe_div_func_uint64_t_u_u((safe_add_func_uint32_t_u_u(0UL, 1UL)), g_116))) || 250UL)))) & g_213))))) , l_351[2][0].f0)) & g_309), 0x4AL)))) | 65531UL) ^ 0x57D9F7E15138805ALL) < l_351[2][0].f1) < l_351[2][0].f1)) == g_212) == g_12.f1), 13)), (-7L))) , (-5L)) == 0x5EA7L) == 0xC6E1F9E39800B016LL)) == g_128.f1) >= 0x20B4L), l_350.f5)) == l_373) & 18446744073709551607UL) >= l_373) & g_99[1][1][2].f1);
                l_376[0] = ((((g_78 & (g_83.f3 = (safe_unary_minus_func_int64_t_s(9L)))) > g_12.f0) | (g_213 & 0xF36DL)) , l_136);
            }
        }
    }
    return l_136.f1;
}



static const struct S2  func_2(struct S1  p_3, int32_t  p_4, struct S1  p_5)
{ 
    uint64_t l_129 = 0x03F1312D135F3850LL;
    int32_t l_132 = (-2L);
    uint32_t l_133 = 1UL;
    int32_t l_134 = (-4L);
    uint32_t l_135[5][2][1] = {{{18446744073709551612UL},{0xA47188FCL}},{{0xA47188FCL},{18446744073709551612UL}},{{0x40BB9802L},{18446744073709551612UL}},{{0xA47188FCL},{0xA47188FCL}},{{18446744073709551612UL},{0x40BB9802L}}};
    int i, j, k;
    for (g_78 = 0; g_78 < 1; g_78 += 1)
    {
        g_39[g_78] = 0x9D41D148L;
    }
    l_135[0][0][0] ^= (l_129 , (((((safe_rshift_func_uint8_t_u_s(p_5.f4, (0xF8L || ((((l_132 = p_3.f0) & 0x6948L) > l_133) , 1L)))) <= g_83.f0) & 0xD4L) & 18446744073709551615UL) || l_134));
    return g_83;
}



static struct S1  func_6(union U4  p_7, uint16_t  p_8)
{ 
    uint32_t l_86[2];
    struct S2 l_92[1][3] = {{{0L,0xB794L,0UL,0xB7DDL},{0L,0xB794L,0UL,0xB7DDL},{0L,0xB794L,0UL,0xB7DDL}}};
    struct S1 l_96 = {0xDF14EA79E4102AFELL,0x0CC9F784L,8L,0x86L,1UL,0xA7DDL};
    struct S0 l_100[4] = {{0xA3375A07L,4L},{0xA3375A07L,4L},{0xA3375A07L,4L},{0xA3375A07L,4L}};
    int i, j;
    for (i = 0; i < 2; i++)
        l_86[i] = 0x12F8B81DL;
    for (g_77 = 0; (g_77 >= 0); g_77 -= 1)
    { 
        int32_t l_93 = 0L;
        int16_t l_98 = 0x3D14L;
        int i;
        g_12.f1 &= ((g_39[g_77] || ((l_86[1] , (safe_lshift_func_int8_t_s_s((!g_12.f4), ((safe_mod_func_uint32_t_u_u((g_39[g_77] ^= (0xE5L < (-1L))), 0xA3EDA01CL)) != l_86[1])))) < 0x4D57D2D5L)) & p_8);
        l_92[0][2] = func_10(g_12);
        if ((l_93 &= p_7.f0))
        { 
            int32_t l_97 = (-1L);
            for (g_83.f3 = 4; (g_83.f3 >= 57); g_83.f3 = safe_add_func_uint8_t_u_u(g_83.f3, 4))
            { 
                return l_96;
            }
            g_12.f1 |= l_97;
            if (l_98)
                break;
        }
        else
        { 
            int32_t l_108 = 0x12B9BE39L;
            int32_t l_112 = 0x19F56D68L;
            struct S0 l_127 = {0UL,-7L};
            for (l_98 = 0; (l_98 <= 0); l_98 += 1)
            { 
                g_12.f1 |= g_83.f2;
                l_100[1] = g_99[1][1][2];
            }
            if ((p_7.f1 = (g_83.f0 && (g_12.f1 = ((p_7 , (safe_div_func_int32_t_s_s(((((safe_sub_func_uint32_t_u_u((((246UL ^ (+(safe_sub_func_uint32_t_u_u((g_12 , p_7.f0), 0xC07334A2L)))) == g_79) , l_98), p_7.f0)) && g_12.f4) | l_96.f2) == 0UL), 0xBDA80610L))) , l_96.f1)))))
            { 
                int16_t l_111 = (-1L);
                l_108 |= g_83.f2;
                l_112 |= ((safe_rshift_func_uint8_t_u_s(0UL, 3)) | l_111);
            }
            else
            { 
                struct S0 l_113[2] = {{2UL,0x6842B3FC87B302CBLL},{2UL,0x6842B3FC87B302CBLL}};
                int i;
                l_113[0] = l_100[1];
                l_93 = (((safe_rshift_func_uint8_t_u_s((g_116 = (l_96 , p_7.f0)), (g_12.f3 || (safe_unary_minus_func_int8_t_s((safe_lshift_func_uint8_t_u_s(((safe_rshift_func_uint16_t_u_u((g_12.f5 != 0x69L), p_7.f2)) | 0L), 5))))))) , p_7.f1) >= g_99[1][1][2].f1);
            }
            for (g_83.f3 = 15; (g_83.f3 <= 10); g_83.f3 = safe_sub_func_uint64_t_u_u(g_83.f3, 7))
            { 
                struct S0 l_126[5] = {{4294967295UL,0x4B551873B4463F65LL},{4294967295UL,0x4B551873B4463F65LL},{4294967295UL,0x4B551873B4463F65LL},{4294967295UL,0x4B551873B4463F65LL},{4294967295UL,0x4B551873B4463F65LL}};
                int i;
                l_127 = l_126[0];
            }
        }
    }
    return g_12;
}



static struct S2  func_10(struct S1  p_11)
{ 
    int8_t l_21 = 0x12L;
    int32_t l_22 = 1L;
    int32_t l_23[2];
    int32_t l_71[4][2] = {{0L,0L},{0L,0L},{0L,0L},{0L,0L}};
    int8_t l_76 = (-2L);
    int i, j;
    for (i = 0; i < 2; i++)
        l_23[i] = 1L;
    l_23[0] &= (p_11.f2 > ((l_22 = (safe_sub_func_int64_t_s_s((safe_rshift_func_int8_t_s_u((safe_sub_func_int8_t_s_s((p_11.f3 = ((safe_sub_func_int8_t_s_s(g_12.f5, (0UL | 0x6D78L))) , l_21)), (-2L))), 6)), 1L))) & 18446744073709551615UL));
    if (((p_11.f2 , p_11) , g_12.f3))
    { 
        int8_t l_29 = 0x25L;
        int32_t l_30 = 0L;
        l_30 = (((((safe_rshift_func_int8_t_s_u(l_21, (safe_sub_func_int32_t_s_s((~(0UL == ((l_29 != ((((0x9E84L ^ l_29) <= p_11.f5) | p_11.f1) | g_12.f3)) && l_29))), p_11.f0)))) ^ (-1L)) <= 8L) , 0L) <= l_29);
    }
    else
    { 
        struct S3 l_35 = {1L,{0x6EF5427EL,0x571BE33BD0D8167ELL},0x007B4AD2L};
        int32_t l_40 = 1L;
        int64_t l_67 = (-1L);
        int32_t l_70 = 1L;
        int32_t l_72 = 0x974D8222L;
        int64_t l_73 = 0xF2AEC61BC9EF25ADLL;
        int32_t l_74[2][1][2] = {{{0x52D756AAL,0x52D756AAL}},{{0x52D756AAL,0x52D756AAL}}};
        int i, j, k;
        l_40 = (safe_rshift_func_uint8_t_u_s((((safe_mul_func_int16_t_s_s(((((-1L) && ((l_35 , (g_39[0] = (!(safe_mul_func_int8_t_s_s((p_11.f2 & 0x166A3C8FL), l_35.f2))))) != 1L)) >= (-5L)) != p_11.f0), p_11.f3)) ^ p_11.f0) , l_23[0]), g_12.f5));
        if (p_11.f2)
        { 
            uint32_t l_48 = 5UL;
            struct S3 l_66[3] = {{1L,{0xF3F2C75BL,0x6281B62C3DCCD505LL},0xE192EF5DL},{1L,{0xF3F2C75BL,0x6281B62C3DCCD505LL},0xE192EF5DL},{1L,{0xF3F2C75BL,0x6281B62C3DCCD505LL},0xE192EF5DL}};
            int i;
            g_12.f1 &= (+(g_12.f0 = (safe_rshift_func_uint8_t_u_s(((safe_mod_func_int8_t_s_s((p_11.f0 == (safe_rshift_func_uint16_t_u_s((l_35.f2 && l_48), ((0x3EB6B3EEF59DFF04LL != 18446744073709551614UL) < l_48)))), 0xE2L)) != g_12.f2), l_48))));
            l_67 = (l_23[0] || (((safe_div_func_uint8_t_u_u(((safe_lshift_func_int16_t_s_s(((safe_mod_func_int64_t_s_s((safe_sub_func_uint64_t_u_u((safe_mul_func_int16_t_s_s((+((safe_lshift_func_uint16_t_u_s(g_39[0], 0)) | (safe_div_func_uint16_t_u_u((p_11.f3 && ((safe_mul_func_int16_t_s_s(((l_66[1] , 0x1B0B2AC4L) <= g_39[0]), g_12.f4)) , g_12.f4)), l_66[1].f1.f0)))), p_11.f0)), g_12.f1)), 0x4720AF826611625FLL)) , p_11.f1), 12)) <= 4L), g_12.f1)) || p_11.f5) <= p_11.f1));
        }
        else
        { 
            int16_t l_68 = 0x3AC0L;
            int32_t l_69[4] = {1L,1L,1L,1L};
            struct S2 l_82 = {-1L,0xBA4AL,2UL,65535UL};
            int i;
            --g_79;
            return l_82;
        }
    }
    return g_83;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_12.f0, "g_12.f0", print_hash_value);
    transparent_crc(g_12.f1, "g_12.f1", print_hash_value);
    transparent_crc(g_12.f2, "g_12.f2", print_hash_value);
    transparent_crc(g_12.f3, "g_12.f3", print_hash_value);
    transparent_crc(g_12.f4, "g_12.f4", print_hash_value);
    transparent_crc(g_12.f5, "g_12.f5", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_39[i], "g_39[i]", print_hash_value);

    }
    transparent_crc(g_75, "g_75", print_hash_value);
    transparent_crc(g_77, "g_77", print_hash_value);
    transparent_crc(g_78, "g_78", print_hash_value);
    transparent_crc(g_79, "g_79", print_hash_value);
    transparent_crc(g_83.f0, "g_83.f0", print_hash_value);
    transparent_crc(g_83.f1, "g_83.f1", print_hash_value);
    transparent_crc(g_83.f2, "g_83.f2", print_hash_value);
    transparent_crc(g_83.f3, "g_83.f3", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_99[i][j][k].f0, "g_99[i][j][k].f0", print_hash_value);
                transparent_crc(g_99[i][j][k].f1, "g_99[i][j][k].f1", print_hash_value);

            }
        }
    }
    transparent_crc(g_116, "g_116", print_hash_value);
    transparent_crc(g_128.f0, "g_128.f0", print_hash_value);
    transparent_crc(g_128.f1, "g_128.f1", print_hash_value);
    transparent_crc(g_128.f2, "g_128.f2", print_hash_value);
    transparent_crc(g_128.f3, "g_128.f3", print_hash_value);
    transparent_crc(g_128.f4, "g_128.f4", print_hash_value);
    transparent_crc(g_128.f5, "g_128.f5", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_139[i].f0, "g_139[i].f0", print_hash_value);

    }
    transparent_crc(g_170, "g_170", print_hash_value);
    transparent_crc(g_187, "g_187", print_hash_value);
    transparent_crc(g_212, "g_212", print_hash_value);
    transparent_crc(g_213, "g_213", print_hash_value);
    transparent_crc(g_214, "g_214", print_hash_value);
    transparent_crc(g_278, "g_278", print_hash_value);
    transparent_crc(g_287, "g_287", print_hash_value);
    transparent_crc(g_309, "g_309", print_hash_value);
    transparent_crc(g_348, "g_348", print_hash_value);
    transparent_crc(g_374, "g_374", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
