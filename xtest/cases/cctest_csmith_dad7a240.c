// SPDX-License-Identifier: MIT
// cctest_csmith_dad7a240.c --- cctest case csmith_dad7a240 (csmith seed 3671564864)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x76b2c68d */
/* @exp_ticks 0x569e */

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

// Options:   -s 3671564864 -o /tmp/csmith_gen_dchd1or5/csmith.c --concise --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


struct S0 {
   uint32_t  f0;
};

#pragma pack(push)
#pragma pack(1)
struct S1 {
   uint32_t  f0;
   int32_t  f1;
   int16_t  f2;
   uint8_t  f3;
   int16_t  f4;
   uint64_t  f5;
   const int8_t  f6;
};
#pragma pack(pop)

union U2 {
   const struct S0  f0;
   struct S0  f1;
   const int8_t * f2;
};


static int32_t g_2 = 1L;
static int32_t g_8 = 0xD9E2A8D3L;
static int8_t g_46 = 0L;
static struct S1 g_47 = {0x8DE905F4L,0x0C653DDBL,0L,248UL,0xFBC0L,6UL,0x3FL};
static int64_t g_55 = 1L;
static uint16_t g_57[7] = {1UL,1UL,1UL,1UL,1UL,1UL,1UL};
static int32_t *g_68 = (void*)0;
static int32_t **g_67 = &g_68;
static int16_t g_74 = 0L;
static int64_t g_76 = 5L;
static uint16_t g_77 = 0x5D31L;
static struct S0 g_107 = {0x5E543FC1L};
static const int64_t *g_163 = &g_55;
static const int64_t **g_162 = &g_163;
static int16_t g_194 = (-10L);
static int16_t g_196[3] = {5L,5L,5L};
static uint32_t *g_231[5][7][2] = {{{&g_47.f0,&g_47.f0},{&g_47.f0,&g_47.f0},{&g_47.f0,&g_47.f0},{&g_47.f0,(void*)0},{&g_47.f0,&g_47.f0},{&g_47.f0,&g_47.f0},{&g_47.f0,&g_47.f0}},{{&g_47.f0,(void*)0},{&g_47.f0,&g_47.f0},{&g_47.f0,&g_47.f0},{&g_47.f0,&g_47.f0},{&g_47.f0,(void*)0},{&g_47.f0,&g_47.f0},{&g_47.f0,&g_47.f0}},{{&g_47.f0,&g_47.f0},{&g_47.f0,(void*)0},{&g_47.f0,&g_47.f0},{&g_47.f0,&g_47.f0},{&g_47.f0,&g_47.f0},{&g_47.f0,(void*)0},{&g_47.f0,&g_47.f0}},{{&g_47.f0,&g_47.f0},{&g_47.f0,&g_47.f0},{&g_47.f0,(void*)0},{&g_47.f0,&g_47.f0},{&g_47.f0,&g_47.f0},{&g_47.f0,&g_47.f0},{&g_47.f0,(void*)0}},{{&g_47.f0,&g_47.f0},{&g_47.f0,&g_47.f0},{&g_47.f0,&g_47.f0},{&g_47.f0,(void*)0},{&g_47.f0,&g_47.f0},{&g_47.f0,&g_47.f0},{&g_47.f0,&g_47.f0}}};
static uint32_t **g_230 = &g_231[0][1][0];
static uint64_t **g_234 = (void*)0;
static int8_t g_240 = 0x1FL;
static int32_t g_242 = 0xDDA62993L;
static uint64_t g_243 = 0xEA7C6D6B7A567F5FLL;
static int16_t g_246 = 0x8EC8L;
static uint32_t g_247 = 5UL;
static uint8_t *g_251 = &g_47.f3;
static uint8_t **g_250 = &g_251;
static uint16_t *g_274 = &g_57[1];
static uint16_t **g_273 = &g_274;
static union U2 g_284 = {{0x32C8324DL}};
static union U2 g_287[1] = {{{0x79E62369L}}};
static union U2 *g_286 = &g_287[0];
static uint16_t g_320 = 0xD684L;
static uint16_t * const g_319 = &g_320;
static uint16_t * const *g_318[7][7][2] = {{{&g_319,&g_319},{&g_319,(void*)0},{&g_319,&g_319},{&g_319,&g_319},{&g_319,(void*)0},{&g_319,&g_319},{&g_319,&g_319}},{{&g_319,(void*)0},{&g_319,&g_319},{&g_319,&g_319},{&g_319,(void*)0},{&g_319,&g_319},{&g_319,(void*)0},{&g_319,&g_319}},{{&g_319,&g_319},{&g_319,(void*)0},{&g_319,&g_319},{&g_319,&g_319},{&g_319,(void*)0},{&g_319,&g_319},{&g_319,&g_319}},{{&g_319,(void*)0},{&g_319,&g_319},{&g_319,(void*)0},{&g_319,&g_319},{&g_319,&g_319},{&g_319,(void*)0},{&g_319,&g_319}},{{&g_319,&g_319},{&g_319,(void*)0},{&g_319,&g_319},{&g_319,&g_319},{&g_319,(void*)0},{&g_319,&g_319},{&g_319,(void*)0}},{{&g_319,&g_319},{&g_319,&g_319},{&g_319,(void*)0},{&g_319,&g_319},{&g_319,&g_319},{&g_319,(void*)0},{&g_319,&g_319}},{{&g_319,&g_319},{&g_319,(void*)0},{&g_319,&g_319},{&g_319,(void*)0},{&g_319,&g_319},{&g_319,&g_319},{&g_319,(void*)0}}};
static struct S1 *g_363 = &g_47;
static struct S1 **g_362 = &g_363;
static int8_t g_393[1][3] = {{0x72L,0x72L,0x72L}};
static int16_t g_395 = 7L;
static uint32_t ***g_410[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
static uint16_t * const *g_415 = &g_274;
static const uint64_t g_431[6] = {0x7D8400D46969C680LL,0x7D8400D46969C680LL,0x7D8400D46969C680LL,0x7D8400D46969C680LL,0x7D8400D46969C680LL,0x7D8400D46969C680LL};
static const uint64_t g_433 = 18446744073709551609UL;
static uint32_t g_439 = 4294967295UL;
static int16_t *g_456 = &g_194;
static int16_t **g_455 = &g_456;
static int16_t ***g_454 = &g_455;
static struct S1 ***g_481[4][2] = {{&g_362,&g_362},{&g_362,&g_362},{&g_362,&g_362},{&g_362,&g_362}};
static int64_t g_483 = 0x89DED05D88306CF9LL;
static uint32_t ****g_576 = &g_410[1];
static uint32_t *****g_575 = &g_576;
static int32_t g_597 = 0x0E7C56A3L;
static uint32_t g_654 = 0xF81D0096L;
static const uint16_t g_671[7] = {0xC8EFL,0xC8EFL,0xC8EFL,0xC8EFL,0xC8EFL,0xC8EFL,0xC8EFL};
static const int16_t *g_704 = &g_246;
static const int16_t ** const g_703[7] = {&g_704,&g_704,&g_704,&g_704,&g_704,&g_704,&g_704};
static const int16_t ** const *g_702 = &g_703[4];
static const int16_t ** const **g_701 = &g_702;
static uint8_t ***g_725 = &g_250;
static uint8_t ****g_724 = &g_725;
static int32_t g_744 = 0x2260C5D6L;
static int8_t g_745 = 0L;
static int8_t g_747 = 0x74L;
static int32_t g_748 = 0x581B317EL;
static int8_t g_749 = 0xCBL;
static int8_t g_750 = (-2L);
static uint8_t g_751[1] = {255UL};
static int32_t g_757 = (-10L);
static uint16_t g_758 = 65528UL;
static int8_t g_797 = 0x84L;
static uint32_t g_815 = 0x29DE594BL;
static uint32_t g_824 = 5UL;
static int16_t g_834[3] = {0x5240L,0x5240L,0x5240L};
static int16_t g_835 = 0x495BL;
static int16_t g_836 = (-1L);
static int64_t g_871 = 0xDD7ED7062BB9355ALL;
static uint32_t g_872 = 0x5ABE9EF1L;
static uint32_t g_927 = 1UL;
static int16_t g_986 = (-1L);
static uint32_t g_991 = 0x39CBAF8CL;
static int8_t g_1023[1][3] = {{0x6FL,0x6FL,0x6FL}};
static uint32_t g_1024 = 0x077F4625L;
static uint32_t g_1051[2][7][2] = {{{0UL,4294967291UL},{0UL,0UL},{4294967291UL,0UL},{0UL,4294967291UL},{0UL,0UL},{4294967291UL,0UL},{0UL,0UL}},{{4294967291UL,4294967291UL},{0UL,4294967291UL},{4294967291UL,0UL},{4294967291UL,4294967291UL},{0UL,4294967291UL},{4294967291UL,0UL},{4294967291UL,4294967291UL}}};
static int32_t g_1075 = 0L;
static int32_t g_1076[6] = {3L,1L,3L,3L,1L,3L};
static int32_t * const *g_1077 = (void*)0;
static uint8_t g_1104 = 0xDAL;
static int8_t *g_1167 = &g_240;
static int8_t **g_1166[2][7] = {{&g_1167,&g_1167,&g_1167,&g_1167,&g_1167,&g_1167,&g_1167},{&g_1167,&g_1167,&g_1167,&g_1167,&g_1167,&g_1167,&g_1167}};
static union U2 g_1196 = {{18446744073709551615UL}};
static uint32_t g_1306 = 0x6161B5D0L;
static int64_t *g_1312[2][2] = {{&g_76,&g_76},{&g_76,&g_76}};
static int64_t **g_1311 = &g_1312[0][1];
static struct S0 g_1406 = {0x8D74B752L};
static int8_t g_1488[6] = {0x70L,0x70L,0x70L,0x70L,0x70L,0x70L};
static uint32_t g_1509 = 18446744073709551615UL;
static int8_t g_1618 = 0xFDL;
static const uint8_t g_1645[1] = {1UL};
static const uint8_t *g_1644 = &g_1645[0];
static int16_t g_1697 = 0x276DL;



static uint32_t  func_1(void);
static struct S1  func_15(uint32_t  p_16, int32_t ** p_17);
static int32_t  func_18(uint8_t  p_19, int32_t ** p_20);
static uint8_t  func_21(struct S0  p_22, uint16_t  p_23, uint8_t  p_24, int32_t ** p_25, uint64_t  p_26);
static struct S0  func_27(const uint8_t  p_28, int32_t ** p_29, int32_t ** p_30, const int8_t * p_31);
static uint8_t  func_35(uint16_t  p_36, int8_t * p_37, int8_t * p_38);
static int8_t * func_39(uint32_t  p_40, int8_t  p_41, uint8_t  p_42, int64_t  p_43, const uint16_t  p_44);
static int32_t  func_60(int32_t ** p_61, const int8_t * p_62, int32_t ** p_63, uint16_t  p_64, struct S1  p_65);




static uint32_t  func_1(void)
{ 
    int16_t l_12 = 1L;
    int8_t *l_45 = &g_46;
    int32_t l_1489[3];
    uint32_t l_1553 = 1UL;
    uint16_t l_1620 = 0UL;
    int32_t l_1628 = 0xF01F1266L;
    uint16_t **l_1653 = (void*)0;
    uint16_t l_1692 = 0x0FE4L;
    uint32_t l_1732 = 0UL;
    uint64_t l_1741 = 1UL;
    uint8_t l_1780 = 7UL;
    struct S0 l_1781 = {0x9092D587L};
    struct S1 *l_1787 = &g_47;
    int i;
    for (i = 0; i < 3; i++)
        l_1489[i] = 0xAC28DC02L;
    for (g_2 = 4; (g_2 < 20); g_2++)
    { 
        uint32_t l_5 = 2UL;
        int32_t **l_6 = (void*)0;
        int32_t *l_7[4][2][3];
        int i, j, k;
        for (i = 0; i < 4; i++)
        {
            for (j = 0; j < 2; j++)
            {
                for (k = 0; k < 3; k++)
                    l_7[i][j][k] = &g_8;
            }
        }
        if (l_5)
            break;
        l_7[1][0][2] = (void*)0;
        return g_8;
    }
    for (g_8 = (-10); (g_8 >= (-8)); g_8 = safe_add_func_int16_t_s_s(g_8, 2))
    { 
        int32_t *l_11[1];
        int i;
        for (i = 0; i < 1; i++)
            l_11[i] = &g_2;
        l_12 = g_2;
    }
    for (l_12 = 9; (l_12 >= (-25)); l_12 = safe_sub_func_uint64_t_u_u(l_12, 1))
    { 
        const int32_t l_34 = 0xF4A1D2DAL;
        int8_t *l_48 = &g_46;
        int32_t **l_529 = (void*)0;
        uint16_t l_1518 = 0xA51CL;
        int16_t l_1540 = 0L;
        uint32_t *****l_1565 = (void*)0;
        int32_t l_1596[7] = {0x659670CFL,0x659670CFL,0x659670CFL,0x659670CFL,0x659670CFL,0x659670CFL,0x659670CFL};
        int64_t l_1630 = 0L;
        int64_t l_1691[2];
        int32_t l_1706 = 0xA37C776AL;
        uint8_t l_1778 = 7UL;
        struct S0 *l_1785 = &l_1781;
        int i;
        for (i = 0; i < 2; i++)
            l_1691[i] = 0x8AA2D6FC85208CDBLL;
    }
    (*g_362) = l_1787;
    return l_1741;
}



static struct S1  func_15(uint32_t  p_16, int32_t ** p_17)
{ 
    int32_t *l_1516[6][1][7] = {{{&g_1076[3],&g_1076[3],&g_1076[3],&g_1076[3],&g_1076[3],&g_1076[3],&g_1076[3]}},{{&g_2,&g_2,&g_2,&g_2,&g_2,&g_2,&g_2}},{{&g_1076[3],&g_1076[3],&g_1076[3],&g_1076[3],&g_1076[3],&g_1076[3],&g_1076[3]}},{{&g_2,&g_2,&g_2,&g_2,&g_2,&g_2,&g_2}},{{&g_1076[3],&g_1076[3],&g_1076[3],&g_1076[3],&g_1076[3],&g_1076[3],&g_1076[3]}},{{&g_2,&g_2,&g_2,&g_2,&g_2,&g_2,&g_2}}};
    struct S1 l_1517 = {1UL,0xDC7D6F5BL,5L,0x88L,0x2833L,5UL,0xF2L};
    int i, j, k;
    g_2 |= (p_16 & 0L);
    return l_1517;
}



static int32_t  func_18(uint8_t  p_19, int32_t ** p_20)
{ 
    uint16_t l_1492[2][4];
    int32_t l_1498 = 0x6567D629L;
    int32_t l_1499 = 0x47805CCBL;
    int32_t l_1504[1];
    int i, j;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 4; j++)
            l_1492[i][j] = 6UL;
    }
    for (i = 0; i < 1; i++)
        l_1504[i] = 1L;
    for (g_240 = (-17); (g_240 >= (-8)); ++g_240)
    { 
        int32_t l_1500[5];
        int32_t l_1505[4][4] = {{0xE4E6C976L,(-1L),(-1L),9L},{1L,(-1L),(-1L),1L},{(-1L),1L,0xE4E6C976L,(-5L)},{(-1L),0xE4E6C976L,(-1L),(-1L)}};
        int32_t l_1506[2][6][7] = {{{(-1L),0xB0C881C2L,1L,0x48DC48C0L,0xF7A6BB42L,0xF7A6BB42L,0x48DC48C0L},{(-8L),0L,(-8L),(-2L),4L,0L,(-1L)},{0L,1L,(-3L),0x01A16DE9L,0x48DC48C0L,0xC5E5045AL,0x58E1565EL},{7L,(-8L),0L,8L,8L,0L,(-8L)},{0x58E1565EL,0L,0x04EB67D7L,0x9756C861L,1L,0xF7A6BB42L,(-1L)},{0L,7L,0xDD4609A1L,1L,(-1L),0xE7E1CA46L,(-8L)}},{{0x01A16DE9L,1L,0x9756C861L,0x9756C861L,1L,0x01A16DE9L,(-1L)},{0xDD4609A1L,(-8L),7L,8L,(-2L),0xADB4EA5DL,4L},{(-1L),0x48DC48C0L,0L,0x01A16DE9L,1L,1L,1L},{(-2L),(-8L),(-8L),(-2L),7L,8L,0xE7E1CA46L},{0xF7A6BB42L,1L,0xB0C881C2L,0x48DC48C0L,0x58E1565EL,0xA0325C58L,0x9756C861L},{0xADB4EA5DL,7L,0L,0L,0xADB4EA5DL,0L,0L}}};
        int32_t l_1507[4][4] = {{(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L)}};
        uint32_t l_1513 = 0UL;
        int i, j, k;
        for (i = 0; i < 5; i++)
            l_1500[i] = 0xAC9BA9BCL;
        l_1492[1][0] ^= 0xCF8A9F68L;
        for (g_8 = (-22); (g_8 < 27); g_8++)
        { 
            int32_t *l_1497 = &g_242;
            (*l_1497) = (safe_lshift_func_int8_t_s_s(0L, 0));
        }
        for (g_757 = 0; (g_757 <= 2); g_757 += 1)
        { 
            int32_t *l_1501 = (void*)0;
            int32_t *l_1502 = (void*)0;
            int32_t *l_1503[3];
            int64_t l_1508[6];
            int8_t l_1512 = 0x35L;
            int i;
            for (i = 0; i < 3; i++)
                l_1503[i] = &g_2;
            for (i = 0; i < 6; i++)
                l_1508[i] = 0x68E7C78B0730A8DFLL;
            ++g_1509;
            l_1513++;
        }
        (*g_67) = &g_1076[2];
        if ((**p_20))
            break;
    }
    return l_1499;
}



static uint8_t  func_21(struct S0  p_22, uint16_t  p_23, uint8_t  p_24, int32_t ** p_25, uint64_t  p_26)
{ 
    int32_t *l_875 = &g_2;
    uint64_t *l_892 = &g_47.f5;
    const int8_t *l_897 = &g_797;
    int16_t ****l_898 = (void*)0;
    struct S0 *l_899 = &g_287[0].f1;
    uint8_t *l_906[1][2];
    int32_t l_988 = (-9L);
    int32_t l_990[6];
    uint32_t l_1007 = 0xB7D0874BL;
    uint8_t *****l_1008[2];
    uint8_t ***l_1011 = (void*)0;
    uint8_t **** const l_1010 = &l_1011;
    uint8_t **** const *l_1009 = &l_1010;
    struct S1 *l_1040[1];
    uint32_t ***l_1107 = &g_230;
    struct S1 l_1108 = {0x4A926B9EL,0xF8DD4C89L,0x3A32L,0xCDL,-1L,0x2E1CB4B5EA9BC83DLL,0x7FL};
    uint16_t l_1118 = 65532UL;
    uint8_t **l_1125 = &g_251;
    int64_t l_1130 = 0xB65D7B2D08C2BBB9LL;
    int8_t l_1131 = 6L;
    union U2 l_1185 = {{0x2C8B94D8L}};
    int32_t l_1187[6];
    int16_t l_1208 = 0x0C61L;
    uint8_t l_1302[7][7][2] = {{{0x38L,9UL},{0xCFL,9UL},{0x38L,249UL},{0x09L,1UL},{6UL,0UL},{0x1CL,0xDFL},{0xCFL,0x48L}},{{0x1FL,1UL},{1UL,1UL},{0xA1L,255UL},{0UL,0x16L},{0xCFL,0x95L},{8UL,0xCFL},{0x55L,1UL}},{{0x55L,0xCFL},{8UL,0x95L},{0xCFL,0x16L},{0UL,255UL},{0xA1L,1UL},{1UL,1UL},{0x1FL,0x48L}},{{0xCFL,0xDFL},{0x1CL,0UL},{6UL,1UL},{0x09L,249UL},{0x38L,9UL},{0xCFL,9UL},{0x38L,249UL}},{{0x09L,1UL},{6UL,0UL},{0x1CL,0xDFL},{0xCFL,0x48L},{0x1FL,1UL},{1UL,1UL},{0xA1L,255UL}},{{0UL,0x16L},{0xCFL,0x95L},{8UL,0xCFL},{0x55L,1UL},{0x55L,0xCFL},{8UL,0x95L},{0xCFL,0x16L}},{{0UL,255UL},{0xA1L,1UL},{1UL,1UL},{0x1FL,0x48L},{0xCFL,0xDFL},{0x1CL,0UL},{6UL,1UL}}};
    struct S1 l_1341 = {0xD9D895CBL,0x715DAF44L,0xE4EFL,0x18L,0xDB11L,0xF1B98A8A168F5065LL,0xE9L};
    uint16_t ***l_1347 = &g_273;
    int32_t *l_1377 = &g_2;
    int8_t l_1417[1];
    int32_t l_1419 = (-7L);
    int8_t l_1420 = 0x2BL;
    int16_t l_1421 = (-9L);
    uint8_t l_1422 = 0xDEL;
    int16_t l_1426 = (-9L);
    struct S0 l_1476 = {0x2B49B8F3L};
    int i, j, k;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
            l_906[i][j] = &g_751[0];
    }
    for (i = 0; i < 6; i++)
        l_990[i] = 0L;
    for (i = 0; i < 2; i++)
        l_1008[i] = &g_724;
    for (i = 0; i < 1; i++)
        l_1040[i] = &g_47;
    for (i = 0; i < 6; i++)
        l_1187[i] = 0L;
    for (i = 0; i < 1; i++)
        l_1417[i] = 0x4AL;
    if (p_23)
    { 
        struct S0 *l_876 = &g_287[0].f1;
        (*p_25) = l_875;
        (*l_876) = p_22;
    }
    else
    { 
        uint16_t l_877 = 0xDBBEL;
        union U2 l_888[1] = {{{18446744073709551615UL}}};
        int8_t *l_891[4] = {&g_747,&g_747,&g_747,&g_747};
        int32_t *l_893[3];
        int32_t l_894 = 4L;
        int16_t **** const l_895 = &g_454;
        uint32_t l_896 = 0x60961A66L;
        int i;
        for (i = 0; i < 3; i++)
            l_893[i] = (void*)0;
        l_877 &= (-10L);
        (*l_875) = ((p_22 , l_898) == l_895);
        (*l_875) = g_247;
    }
    g_107 = ((*l_899) = g_107);
    for (g_242 = 0; (g_242 != 11); g_242 = safe_add_func_uint64_t_u_u(g_242, 1))
    { 
        uint8_t *l_907 = &g_751[0];
        uint16_t ***l_908 = &g_273;
        int8_t *l_909 = &g_749;
        int32_t l_928 = (-4L);
        union U2 *l_937 = &g_287[0];
        int32_t * const l_943 = &l_928;
        int32_t l_950 = 0xCCD04A23L;
        int32_t l_957 = (-9L);
        uint32_t l_972 = 0x44F19D4BL;
        int32_t l_989 = 5L;
        int16_t **l_1002[7][4] = {{&g_456,&g_456,(void*)0,(void*)0},{&g_456,&g_456,&g_456,&g_456},{&g_456,&g_456,&g_456,&g_456},{&g_456,&g_456,(void*)0,&g_456},{&g_456,&g_456,&g_456,&g_456},{&g_456,&g_456,&g_456,&g_456},{&g_456,&g_456,&g_456,(void*)0}};
        int i, j;
        if ((safe_mod_func_int8_t_s_s(((safe_mod_func_int64_t_s_s(((((**g_725) = l_906[0][0]) == l_907) ^ ((((*l_909) ^= (p_26 > (&g_318[5][3][0] == ((*l_875) , l_908)))) == (((*l_875) >= p_24) >= (**g_162))) || (*l_875))), (*l_875))) , 3L), (*l_875))))
        { 
            uint32_t l_916 = 0x37CF9292L;
            int32_t *l_925 = (void*)0;
            int32_t *l_926 = (void*)0;
            l_928 &= (safe_mul_func_int8_t_s_s((g_747 = (safe_lshift_func_uint8_t_u_u((safe_rshift_func_int8_t_s_u(((((*l_892) = l_916) | (safe_lshift_func_int8_t_s_u(l_916, (safe_mul_func_uint16_t_u_u(0x29EFL, ((g_47.f1 &= ((safe_div_func_uint32_t_u_u(((safe_div_func_uint32_t_u_u(p_22.f0, (*l_875))) == (((**g_455) = (-1L)) <= (65535UL <= 0x2C2AL))), 0xC6B9BE73L)) & g_320)) , p_26)))))) == 0x34E9L), g_927)), 5))), g_240));
        }
        else
        { 
            uint16_t **l_940 = &g_274;
            int32_t l_970 = 1L;
            struct S1 l_979 = {0x81C34EDDL,-2L,1L,0UL,2L,0x145C60737D3BEAACLL,8L};
            for (p_23 = 0; (p_23 != 45); ++p_23)
            { 
                struct S0 l_933 = {0xC56E0AE9L};
                union U2 **l_936 = &g_286;
                int64_t l_941[2][4] = {{0x76A629B83C979142LL,9L,0x76A629B83C979142LL,0x76A629B83C979142LL},{9L,9L,8L,9L}};
                int8_t l_942[7] = {1L,1L,1L,1L,1L,1L,1L};
                int32_t **l_944 = &g_68;
                uint32_t l_958 = 0x579E5154L;
                int32_t l_985 = 0x0598F540L;
                int32_t l_987 = 1L;
                int i, j;
                (*l_944) = (((safe_rshift_func_uint16_t_u_u(((*g_319) = (((((l_933 , (*l_875)) >= (((((*l_936) = &g_284) == l_937) , ((*l_909) = (safe_rshift_func_uint8_t_u_s(0xF5L, 0)))) == (((((l_940 == ((*l_875) , (*l_908))) && 18446744073709551615UL) && p_23) | (*l_875)) > l_941[0][1]))) && l_942[5]) , 0x2CD3L) < 0x31D5L)), l_942[4])) , p_24) , l_943);
                for (g_47.f3 = 17; (g_47.f3 >= 33); g_47.f3 = safe_add_func_uint32_t_u_u(g_47.f3, 9))
                { 
                    return p_22.f0;
                }
                for (g_247 = 0; (g_247 <= 0); g_247 += 1)
                { 
                    int32_t *l_947 = &g_757;
                    int32_t *l_948 = &g_757;
                    int32_t *l_949 = &g_757;
                    int32_t *l_951 = &l_928;
                    int32_t *l_952 = &l_928;
                    int32_t *l_953 = &g_8;
                    int32_t *l_954 = (void*)0;
                    int32_t *l_955 = &g_757;
                    int32_t *l_956[1][1][2];
                    int64_t *l_961 = &g_76;
                    int16_t l_984 = 0x69D1L;
                    int i, j, k;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 1; j++)
                        {
                            for (k = 0; k < 2; k++)
                                l_956[i][j][k] = &l_950;
                        }
                    }
                    l_958++;
                    (*l_875) = ((0x67EC41834DFB85BALL > ((*l_961) = (-7L))) < ((((safe_rshift_func_uint8_t_u_s((((safe_div_func_int64_t_s_s((g_751[g_247] ^ (safe_sub_func_int32_t_s_s(0xD369500BL, ((0UL < ((((l_970 = (safe_add_func_int32_t_s_s(l_970, (safe_unary_minus_func_uint16_t_u(0UL))))) && 0x329C5779B32B689DLL) || p_22.f0) , (*l_943))) != (-1L))))), p_26)) || l_972) != p_23), 7)) || p_26) ^ 0xBBC70278133EAD6FLL) & (-1L)));
                    (*l_949) = ((((*l_951) = (l_970 = ((*g_319) = (safe_div_func_uint32_t_u_u((safe_add_func_uint8_t_u_u(((safe_mul_func_uint8_t_u_u((g_749 <= ((*l_875) ^= (l_979 , g_439))), (safe_mod_func_uint8_t_u_u(((safe_div_func_uint16_t_u_u(((**g_273) = (g_871 | (p_22 , (&g_287[0] == (void*)0)))), 0x6A91L)) >= 0x69L), 0xEFL)))) || 65528UL), (*l_943))), l_970))))) == l_979.f0) | 0xB8A3L);
                    g_991++;
                }
                l_950 |= (safe_sub_func_int64_t_s_s((safe_add_func_int32_t_s_s(0L, (safe_rshift_func_uint16_t_u_u((((-4L) && (*l_875)) && (l_933 , (((void*)0 != l_1002[2][1]) <= (safe_add_func_uint64_t_u_u((((**p_25) && p_26) || (*l_875)), 0x14899931B37007C9LL))))), (*g_319))))), 0xCF10E40684FE8E0FLL));
            }
        }
    }
    if ((safe_add_func_int32_t_s_s(l_1007, (l_1008[1] != (l_1009 = l_1008[1])))))
    { 
        uint8_t l_1016 = 0xA6L;
        int32_t l_1019 = 9L;
        int32_t l_1020 = 0x5A912B9FL;
        int32_t l_1021[4] = {0x7C68D5B0L,0x7C68D5B0L,0x7C68D5B0L,0x7C68D5B0L};
        struct S0 l_1132 = {18446744073709551610UL};
        int i;
        for (g_107.f0 = 0; (g_107.f0 <= 1); g_107.f0 += 1)
        { 
            uint16_t l_1012 = 0x7F8DL;
            int32_t l_1015 = 0x17BF5997L;
            int32_t l_1022[1][3][6] = {{{0x2819E41BL,0x2819E41BL,0L,0L,0x2819E41BL,0x2819E41BL},{0x2819E41BL,0L,0L,0x2819E41BL,0x2819E41BL,0L},{0x2819E41BL,0x2819E41BL,0L,0L,0x2819E41BL,0x2819E41BL}}};
            int i, j, k;
            if (l_1012)
                break;
            for (g_597 = 0; (g_597 <= 1); g_597 += 1)
            { 
                int32_t *l_1013 = (void*)0;
                int32_t *l_1014[4][4][2] = {{{&g_2,&g_242},{&g_2,(void*)0},{(void*)0,&g_242},{(void*)0,(void*)0}},{{&g_2,&g_242},{&g_2,(void*)0},{(void*)0,&g_242},{(void*)0,(void*)0}},{{&g_2,&g_242},{&g_2,(void*)0},{(void*)0,&g_242},{(void*)0,(void*)0}},{{&g_2,&g_242},{&g_2,(void*)0},{(void*)0,&g_242},{(void*)0,(void*)0}}};
                int i, j, k;
                --l_1016;
                --g_1024;
                for (p_22.f0 = 0; (p_22.f0 <= 1); p_22.f0 += 1)
                { 
                    int i, j, k;
                    (*p_25) = g_231[(g_597 + 2)][(g_597 + 3)][g_597];
                    return l_1016;
                }
            }
        }
        (*l_875) |= ((((safe_rshift_func_uint16_t_u_u((l_1020 > (p_24 || (&l_990[2] != (void*)0))), (*g_274))) < 0x774CA18A6471DF2ALL) & p_24) <= l_1021[3]);
        for (g_986 = (-5); (g_986 != 5); g_986 = safe_add_func_uint16_t_u_u(g_986, 5))
        { 
            (*l_875) = 7L;
            return (***g_725);
        }
        if (((*l_875) = ((0xFFL | (safe_lshift_func_int16_t_s_s((safe_rshift_func_uint16_t_u_s(((*l_875) , (((((*g_250) = &p_24) == (void*)0) | 0xC129DB59L) != (!(safe_div_func_uint64_t_u_u(((*l_892) &= (((*g_362) != (l_1040[0] = l_1040[0])) || p_24)), l_1016))))), p_24)), l_1016))) > (-3L))))
        { 
            int64_t l_1043 = 0x2FC0B341833E57BELL;
            for (g_757 = 0; (g_757 == (-15)); g_757 = safe_sub_func_uint32_t_u_u(g_757, 9))
            { 
                int32_t *l_1044 = (void*)0;
                int32_t *l_1045 = &g_242;
                int32_t *l_1046 = &l_1021[3];
                int32_t *l_1047 = (void*)0;
                int32_t *l_1048 = &l_1021[1];
                int32_t *l_1049 = &g_2;
                int32_t *l_1050[5][1] = {{&g_242},{&l_988},{&g_242},{&l_988},{&g_242}};
                int64_t *l_1059 = &g_871;
                uint32_t *l_1062 = &g_439;
                int i, j;
                g_1051[1][6][1]--;
                (*l_1048) = (l_1020 = (~(safe_mul_func_uint8_t_u_u((****g_724), (safe_rshift_func_int16_t_s_s(0x207AL, ((((*l_1059) = l_1021[3]) , ((safe_sub_func_uint32_t_u_u(((*l_1062) = 6UL), (safe_rshift_func_uint16_t_u_s(0xC818L, l_1043)))) , ((*l_1059) |= 0x1FD159AF5A6C629ELL))) && 0x6DB16CBA53B84551LL)))))));
            }
            for (g_47.f2 = 0; (g_47.f2 == 29); g_47.f2 = safe_add_func_int32_t_s_s(g_47.f2, 4))
            { 
                int32_t l_1078 = 0x5A3D2436L;
                for (g_55 = 0; (g_55 == 16); g_55 = safe_add_func_int64_t_s_s(g_55, 9))
                { 
                    (*g_67) = (void*)0;
                }
                (*g_67) = &l_988;
                for (g_758 = 0; (g_758 > 1); g_758 = safe_add_func_int8_t_s_s(g_758, 1))
                { 
                    uint32_t l_1071 = 4294967295UL;
                    int32_t * const l_1074[7] = {(void*)0,&g_1076[3],&g_1076[3],(void*)0,&g_1076[3],&g_1076[3],(void*)0};
                    int32_t * const *l_1073 = &l_1074[0];
                    int32_t * const **l_1072 = &l_1073;
                    int i;
                    (*p_25) = (*g_67);
                    if (l_1071)
                        break;
                    (*g_67) = (*p_25);
                    g_1077 = ((*l_1072) = (void*)0);
                }
                if (l_1078)
                    break;
            }
        }
        else
        { 
            uint32_t * const *l_1091 = &g_231[0][1][0];
            int32_t l_1092 = 0xB0E2E9BDL;
            const int32_t l_1093 = 1L;
            int64_t *l_1094 = &g_483;
            int32_t l_1099 = (-1L);
            int32_t l_1100 = 0L;
            int32_t l_1101 = 0xA1B0C6BDL;
            int32_t l_1102 = (-1L);
            int32_t l_1103 = 0xFCAE2FFFL;
            int32_t l_1156 = 1L;
            int32_t l_1157 = 1L;
            int8_t l_1158 = (-1L);
            int32_t l_1159 = 0x180E33EFL;
            int16_t *l_1186 = &g_196[1];
            uint64_t l_1188 = 0x13A2ACAFC7DEBDA6LL;
            l_1019 = l_1020;
            if ((safe_mul_func_uint16_t_u_u(((safe_rshift_func_uint8_t_u_u(0x45L, ((**g_250) = (safe_add_func_int64_t_s_s(((*l_1094) &= ((((l_1092 = ((l_1019 != ((safe_lshift_func_uint8_t_u_u((***g_725), (safe_rshift_func_uint16_t_u_s(p_22.f0, 15)))) || (((***g_702) || (safe_mul_func_uint8_t_u_u((((*g_251) | (((void*)0 == l_1091) > (*g_274))) & l_1016), (-9L)))) , g_47.f0))) >= l_1092)) | l_1093) > l_1020) | l_1021[0])), (**g_162)))))) <= l_1019), p_22.f0)))
            { 
                int32_t *l_1097 = &l_1021[3];
                (*l_1097) ^= (safe_lshift_func_uint8_t_u_s(((*l_875) > 0xE24AL), 0));
            }
            else
            { 
                int32_t *l_1098[3][6] = {{(void*)0,(void*)0,&g_242,&g_242,(void*)0,&g_242},{(void*)0,(void*)0,(void*)0,(void*)0,&g_242,&g_242},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&g_242}};
                uint32_t ***l_1110 = (void*)0;
                uint32_t ****l_1109 = &l_1110;
                uint8_t **l_1126 = &l_906[0][0];
                uint16_t l_1160[3][7][7] = {{{0x2E86L,0xA364L,0x726FL,65533UL,0x9160L,0x265EL,0x34E7L},{65535UL,65534UL,65530UL,0UL,0x9160L,6UL,0x9160L},{0x7591L,0x4CEBL,0x4CEBL,0x7591L,65533UL,0xFB39L,65535UL},{65535UL,0UL,65533UL,1UL,65534UL,0x4CEBL,1UL},{0x9160L,0x2F81L,6UL,0UL,0x676EL,0xC2DBL,65535UL},{0x2F81L,0x265EL,0x2E86L,0xA364L,0x726FL,65533UL,0x9160L},{0x1DA4L,0x676EL,65533UL,0x232BL,0x18C2L,0UL,0x34E7L}},{{65534UL,0x676EL,65526UL,65534UL,65534UL,65526UL,0x676EL},{65534UL,0x265EL,0x1DA4L,0x9160L,65530UL,0xFB39L,65534UL},{0x4CEBL,0x2F81L,0x726FL,0x1DA4L,65532UL,0x34E7L,0x4CEBL},{65534UL,0UL,1UL,0x9160L,0x676EL,1UL,65534UL},{0x676EL,0x4CEBL,0UL,65534UL,0x4CEBL,0x1DA4L,65534UL},{0x34E7L,65534UL,65530UL,0x232BL,0xA364L,0x1DA4L,0x1DA4L},{0x9160L,0xA364L,0xBD0CL,0xA364L,0x9160L,1UL,0x2F81L}},{{65535UL,0UL,0x1DA4L,0UL,0x2E86L,0x34E7L,0x9160L},{1UL,65534UL,0x4CEBL,1UL,0xA364L,0xFB39L,65535UL},{65535UL,0UL,0x35E2L,0x7591L,65534UL,65526UL,0x7591L},{0x9160L,0x34E7L,0x2E86L,0UL,0x1DA4L,0UL,65535UL},{0x34E7L,4UL,0x2E86L,65533UL,65532UL,6UL,0xC2DBL},{65533UL,65533UL,0x2F81L,0xFB39L,0x726FL,65534UL,0x232BL},{0xFB39L,0x35E2L,0xE32DL,0x4CEBL,65526UL,0xE32DL,65533UL}}};
                uint64_t **l_1189 = &l_892;
                int i, j, k;
                g_1104--;
                if (((*l_875) <= ((7L >= (l_1020 = ((((*g_576) = l_1107) == ((*l_1109) = (l_1108 , l_1107))) & 0xFD8DL))) ^ ((safe_lshift_func_uint16_t_u_s((safe_div_func_int32_t_s_s(((safe_add_func_uint32_t_u_u((l_1102 = (p_22.f0 && p_22.f0)), 0x7F1D5A2EL)) == g_836), p_22.f0)), (*l_875))) , l_1102))))
                { 
                    int32_t l_1117 = (-7L);
                    uint32_t *l_1145[7] = {(void*)0,&g_927,(void*)0,(void*)0,&g_927,(void*)0,(void*)0};
                    int32_t l_1146 = (-1L);
                    int64_t l_1147 = 0L;
                    int32_t l_1148 = (-5L);
                    int32_t l_1149 = 1L;
                    int32_t l_1150 = 0x30223379L;
                    int32_t l_1151 = 0xBB9FAA27L;
                    int32_t l_1152 = 3L;
                    int32_t l_1153 = 1L;
                    int32_t l_1154 = (-2L);
                    int32_t l_1155 = 0x30A68C87L;
                    int32_t l_1163 = 0xA22D6A36L;
                    int i;
                    l_1118++;
                    g_8 = (((((((safe_sub_func_uint64_t_u_u((safe_rshift_func_uint16_t_u_u(((((**g_362) , (****g_724)) < 0xFDL) >= (((l_1126 = l_1125) != (*g_725)) > (safe_sub_func_int32_t_s_s((+(0UL < 0x5BF164DA5E7E3F3DLL)), (*l_875))))), l_1130)), 0xBFA79F065190A5DBLL)) >= l_1131) , (-4L)) <= p_24) | p_24) | l_1117) && p_24);
                    g_757 &= ((l_1132 , ((**g_455) = (((safe_sub_func_uint64_t_u_u((safe_div_func_uint64_t_u_u(((*l_892) |= (0L == ((safe_add_func_int32_t_s_s((safe_mod_func_uint16_t_u_u(((*g_274) |= ((p_26 <= ((safe_sub_func_uint32_t_u_u(4294967295UL, (++l_1160[2][6][0]))) && 0xAFB1130EL)) > (0xF27283C4L < 4UL))), l_1151)), 0x6FC6B258L)) <= p_24))), 0x195D35A065DF0627LL)), (*l_875))) > p_24) && 1UL))) & 0x261BL);
                    (*l_875) = l_1163;
                    p_22 = ((*g_286) , func_27(((p_24 >= (((0xCCDF57CF9F4979E1LL != (((*g_274) = ((safe_add_func_int32_t_s_s((-1L), ((void*)0 == g_1166[0][6]))) <= ((**g_724) != (*g_725)))) , (**g_162))) , p_23) , l_1152)) | p_26), p_25, p_25, &l_1158));
                }
                else
                { 
                    (*l_875) = (((~((+p_23) <= p_22.f0)) & (safe_add_func_uint64_t_u_u(((((((safe_div_func_int16_t_s_s(((safe_rshift_func_uint16_t_u_u(((*g_319)--), ((0xF0B1L < ((safe_lshift_func_uint16_t_u_u(((((safe_lshift_func_uint16_t_u_u(((0xA6L || (9L ^ ((((((*g_1167) = (((*l_899) = p_22) , ((+(((safe_mul_func_uint16_t_u_u((((l_1099 | 8UL) , l_1185) , l_1093), 0x271CL)) , l_1186) != (void*)0)) >= l_1187[5]))) , 0xF98D5760L) , 65535UL) | (*g_704)) >= l_1021[1]))) < 1L), 15)) ^ (*l_875)) && g_2) && 1UL), 11)) >= (**g_250))) || l_1188))) & 7L), p_23)) ^ p_23) < l_1093) | 249UL) , g_234) == l_1189), l_1019))) | p_26);
                }
            }
            for (g_835 = 5; (g_835 >= 0); g_835 -= 1)
            { 
                int i;
                if (g_57[g_835])
                { 
                    (*l_875) = ((safe_sub_func_int8_t_s_s(0xEEL, 0x4EL)) | 1UL);
                    return p_22.f0;
                }
                else
                { 
                    uint32_t l_1192[3];
                    int i;
                    for (i = 0; i < 3; i++)
                        l_1192[i] = 18446744073709551615UL;
                    return l_1192[1];
                }
            }
        }
    }
    else
    { 
        struct S0 l_1193[6][3] = {{{0x045A63CDL},{18446744073709551615UL},{0x4F87A5AEL}},{{18446744073709551615UL},{0x045A63CDL},{0x4F87A5AEL}},{{0xA042CD2AL},{0xA042CD2AL},{0x4F87A5AEL}},{{0x045A63CDL},{18446744073709551615UL},{0x4F87A5AEL}},{{18446744073709551615UL},{0x045A63CDL},{0x4F87A5AEL}},{{0xA042CD2AL},{0xA042CD2AL},{0x4F87A5AEL}}};
        int32_t *l_1220 = (void*)0;
        int32_t *l_1221 = (void*)0;
        int32_t *l_1222 = &l_988;
        const uint8_t * const **l_1230[5];
        uint64_t l_1254 = 0x7A7E5C4CA351644DLL;
        int16_t l_1335 = 0xED7BL;
        uint16_t ***l_1346 = &g_273;
        int32_t l_1351 = 0xB5BB4C7CL;
        int32_t l_1354 = 1L;
        int32_t l_1356 = 0xA5C100E1L;
        uint8_t l_1400 = 0x49L;
        uint16_t l_1401 = 0x1C22L;
        int32_t l_1409 = 0x9766A99CL;
        int32_t l_1410 = 8L;
        int64_t l_1412 = 0x3B313B6BD87B2621LL;
        int32_t l_1413 = 0xF06F95E6L;
        int32_t l_1414 = 1L;
        int32_t l_1415 = (-1L);
        int32_t l_1416 = (-7L);
        int32_t l_1418[1][6];
        union U2 l_1425[7][7][3] = {{{{{0xDF9914B7L}},{{1UL}},{{0xBD084064L}}},{{{0x417B99C7L}},{{0x912589D5L}},{{0xE614CD31L}}},{{{0xDF9914B7L}},{{0xDF9914B7L}},{{0xE614CD31L}}},{{{0x912589D5L}},{{0x417B99C7L}},{{0xBD084064L}}},{{{1UL}},{{0xDF9914B7L}},{{1UL}}},{{{1UL}},{{0x912589D5L}},{{0xDF9914B7L}}},{{{0x912589D5L}},{{1UL}},{{1UL}}}},{{{{0xDF9914B7L}},{{1UL}},{{0xBD084064L}}},{{{0x417B99C7L}},{{0x912589D5L}},{{0xE614CD31L}}},{{{0xDF9914B7L}},{{0xDF9914B7L}},{{0xE614CD31L}}},{{{0x912589D5L}},{{0x417B99C7L}},{{0xBD084064L}}},{{{1UL}},{{0xDF9914B7L}},{{1UL}}},{{{1UL}},{{0x912589D5L}},{{0xDF9914B7L}}},{{{0x912589D5L}},{{1UL}},{{1UL}}}},{{{{0xDF9914B7L}},{{1UL}},{{0xBD084064L}}},{{{0x417B99C7L}},{{0x912589D5L}},{{0xE614CD31L}}},{{{0xDF9914B7L}},{{0xDF9914B7L}},{{0xE614CD31L}}},{{{0x912589D5L}},{{0x417B99C7L}},{{0xBD084064L}}},{{{1UL}},{{0xDF9914B7L}},{{1UL}}},{{{1UL}},{{0x912589D5L}},{{0xDF9914B7L}}},{{{0x912589D5L}},{{1UL}},{{1UL}}}},{{{{0xDF9914B7L}},{{1UL}},{{0xBD084064L}}},{{{0x417B99C7L}},{{0x912589D5L}},{{0xE614CD31L}}},{{{0xDF9914B7L}},{{0xDF9914B7L}},{{0xE614CD31L}}},{{{0x912589D5L}},{{0x417B99C7L}},{{0xBD084064L}}},{{{1UL}},{{0xDF9914B7L}},{{1UL}}},{{{1UL}},{{0x912589D5L}},{{0xDF9914B7L}}},{{{0x912589D5L}},{{1UL}},{{1UL}}}},{{{{0xDF9914B7L}},{{1UL}},{{0xBD084064L}}},{{{0x417B99C7L}},{{0x912589D5L}},{{0xE614CD31L}}},{{{0xDF9914B7L}},{{0xDF9914B7L}},{{0xE614CD31L}}},{{{0x912589D5L}},{{0x417B99C7L}},{{0xBD084064L}}},{{{1UL}},{{0xDF9914B7L}},{{1UL}}},{{{1UL}},{{0x912589D5L}},{{0xDF9914B7L}}},{{{0x912589D5L}},{{1UL}},{{1UL}}}},{{{{0xDF9914B7L}},{{1UL}},{{0xBD084064L}}},{{{0x417B99C7L}},{{0x912589D5L}},{{0xE614CD31L}}},{{{0xDF9914B7L}},{{0xDF9914B7L}},{{0xE614CD31L}}},{{{0x912589D5L}},{{0x417B99C7L}},{{0xBD084064L}}},{{{1UL}},{{0xDF9914B7L}},{{1UL}}},{{{1UL}},{{0x912589D5L}},{{0xDF9914B7L}}},{{{0x912589D5L}},{{1UL}},{{1UL}}}},{{{{0xDF9914B7L}},{{1UL}},{{0xBD084064L}}},{{{0x417B99C7L}},{{0x912589D5L}},{{0xE614CD31L}}},{{{0xDF9914B7L}},{{0xDF9914B7L}},{{0xE614CD31L}}},{{{0x912589D5L}},{{0x417B99C7L}},{{0xBD084064L}}},{{{1UL}},{{0xDF9914B7L}},{{1UL}}},{{{1UL}},{{0x912589D5L}},{{0xDF9914B7L}}},{{{0x912589D5L}},{{1UL}},{{1UL}}}}};
        int8_t **l_1478[7] = {&g_1167,&g_1167,&g_1167,&g_1167,&g_1167,&g_1167,&g_1167};
        int i, j, k;
        for (i = 0; i < 5; i++)
            l_1230[i] = (void*)0;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 6; j++)
                l_1418[i][j] = 0L;
        }
        l_1193[0][2] = p_22;
        if ((safe_add_func_uint16_t_u_u(((g_1196 , (safe_mul_func_int16_t_s_s((safe_sub_func_uint32_t_u_u(p_23, ((*l_875) >= 9UL))), ((*g_319) &= ((0xC5A1BC95L >= (+(p_22.f0 == (-1L)))) > 0x5B8383408833B259LL))))) , p_26), (*l_875))))
        { 
            uint64_t l_1202[2][2];
            int i, j;
            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 2; j++)
                    l_1202[i][j] = 5UL;
            }
            return l_1202[1][1];
        }
        else
        { 
            int32_t *l_1205 = &l_990[4];
            (*l_875) = (safe_div_func_uint8_t_u_u((p_26 || p_24), 0x63L));
            (*g_67) = l_1205;
        }
        (*l_1222) |= (safe_mod_func_int16_t_s_s(((*g_68) , (l_1208 , (safe_div_func_int64_t_s_s((((~((safe_sub_func_uint8_t_u_u((****g_724), (safe_rshift_func_int16_t_s_u(((safe_sub_func_uint8_t_u_u((safe_mod_func_uint32_t_u_u(((*l_875) != (0x2DE4CBAE4CAF3659LL != (*l_875))), p_22.f0)), (**g_250))) , (-9L)), 9)))) , (*l_875))) | 1UL) , l_1193[0][2].f0), (**g_162))))), p_24));
lbl_1460:
        for (g_47.f0 = (-15); (g_47.f0 <= 8); g_47.f0++)
        { 
            uint32_t l_1239 = 0x080A880EL;
            uint8_t * const *l_1261 = &l_906[0][0];
            uint8_t * const **l_1260 = &l_1261;
            uint8_t * const ***l_1259 = &l_1260;
            uint8_t * const ****l_1258 = &l_1259;
            uint32_t **l_1268 = (void*)0;
            struct S0 *l_1278 = &g_284.f1;
            uint32_t *l_1283 = (void*)0;
            uint32_t *l_1284 = &g_824;
            int32_t l_1350 = 0x3DDB6C47L;
            int32_t l_1353 = 0x35DCCFD8L;
            int32_t l_1355 = 9L;
            int16_t *l_1398 = &g_47.f2;
            int16_t ** const l_1397 = &l_1398;
            int16_t ** const *l_1396 = &l_1397;
            int16_t ** const **l_1395 = &l_1396;
            int32_t *l_1407 = (void*)0;
            int32_t *l_1408[7];
            int64_t l_1411 = 0L;
            int i;
            for (i = 0; i < 7; i++)
                l_1408[i] = (void*)0;
        }
        for (p_23 = 0; (p_23 <= 1); p_23 += 1)
        { 
            int8_t l_1439 = 0xC2L;
            union U2 **l_1456 = &g_286;
            int32_t l_1469 = 0L;
            for (g_758 = 0; (g_758 <= 1); g_758 += 1)
            { 
                int16_t l_1440 = 0xC4B9L;
                int32_t l_1457 = (-1L);
                int8_t l_1458 = 0xF9L;
                uint8_t l_1459 = 0x15L;
                int32_t l_1470 = 0xB2EEF7A0L;
                int32_t l_1471 = 0x6BD38729L;
                int32_t l_1472 = 0xD0057B86L;
                int8_t **l_1477 = (void*)0;
                (*l_875) &= (**p_25);
                if ((((l_1425[3][5][2] , (l_1426 , p_23)) == (safe_add_func_uint32_t_u_u(((0xB501L != (****g_701)) , (safe_div_func_int8_t_s_s(((safe_mul_func_uint16_t_u_u((((safe_mod_func_int32_t_s_s(((safe_lshift_func_uint8_t_u_u(((((safe_div_func_uint16_t_u_u(p_26, (p_24 & 0xF9L))) , l_1439) <= 0x29007871L) <= 0x5C869AF3AA496778LL), 2)) & 9L), l_1440)) , p_26) >= (**g_273)), p_23)) && (**p_25)), l_1439))), (*l_1377)))) <= (*l_1222)))
                { 
                    int16_t l_1461[7][3] = {{0L,0L,(-3L)},{0xEA53L,(-3L),(-3L)},{(-3L),1L,(-1L)},{0xEA53L,1L,0xEA53L},{0L,(-3L),(-1L)},{0L,0L,(-3L)},{0xEA53L,(-3L),(-3L)}};
                    int32_t *l_1462 = &l_988;
                    int32_t *l_1463 = &g_757;
                    int32_t *l_1464 = &l_1418[0][4];
                    int32_t *l_1465 = &l_1418[0][3];
                    int32_t *l_1466 = &l_1410;
                    int32_t *l_1467 = &g_2;
                    int32_t *l_1468[6][1];
                    uint32_t l_1473 = 0UL;
                    int i, j;
                    for (i = 0; i < 6; i++)
                    {
                        for (j = 0; j < 1; j++)
                            l_1468[i][j] = &l_1457;
                    }
                    (**p_25) = ((safe_sub_func_int32_t_s_s(((safe_lshift_func_int8_t_s_s(((*g_286) , (safe_mul_func_int8_t_s_s((*g_1167), (p_26 && (safe_add_func_int16_t_s_s((((*l_1377) , (safe_mul_func_uint16_t_u_u((--(**g_273)), (((p_26 > (((safe_mul_func_uint16_t_u_u(65533UL, (~(l_1457 ^= ((void*)0 == l_1456))))) , 1L) < p_22.f0)) , 5UL) || (*g_704))))) & l_1439), l_1458)))))), l_1439)) >= 250UL), 0x85699C41L)) > l_1459);
                    if (p_22.f0)
                        goto lbl_1460;
                    l_1473++;
                }
                else
                { 
                    uint64_t * const *l_1485[6][2][1] = {{{&l_892},{&l_892}},{{&l_892},{&l_892}},{{&l_892},{&l_892}},{{&l_892},{&l_892}},{{&l_892},{&l_892}},{{&l_892},{&l_892}}};
                    int i, j, k;
                    (**p_25) ^= (-1L);
                    if ((**p_25))
                        break;
                    l_1476 = p_22;
                    l_1472 = ((((1L || (l_1477 == (g_1166[p_23][p_23] = l_1478[6]))) && (safe_rshift_func_uint16_t_u_s((((safe_rshift_func_uint8_t_u_u(((safe_rshift_func_uint8_t_u_u(0xEFL, ((void*)0 != l_1485[0][0][0]))) < ((safe_add_func_uint8_t_u_u(((4294967291UL & g_1488[5]) && (-5L)), (*g_1167))) || (-1L))), 5)) , (**g_67)) > l_1439), 8))) | 0xF5A9323BL) ^ l_1472);
                }
            }
        }
    }
    return p_24;
}



static struct S0  func_27(const uint8_t  p_28, int32_t ** p_29, int32_t ** p_30, const int8_t * p_31)
{ 
    int64_t l_542[1];
    uint64_t *l_559 = &g_47.f5;
    uint64_t **l_558[5] = {&l_559,&l_559,&l_559,&l_559,&l_559};
    struct S0 l_560 = {0UL};
    uint32_t **l_593 = &g_231[0][5][0];
    int32_t l_598 = (-4L);
    uint64_t **l_652 = &l_559;
    uint8_t * const *l_664[1][1][6] = {{{&g_251,&g_251,&g_251,&g_251,&g_251,&g_251}}};
    uint8_t * const **l_663 = &l_664[0][0][1];
    uint8_t * const ***l_662 = &l_663;
    int16_t ****l_706[4][7] = {{&g_454,&g_454,&g_454,&g_454,&g_454,&g_454,&g_454},{&g_454,&g_454,&g_454,&g_454,&g_454,&g_454,&g_454},{&g_454,&g_454,&g_454,&g_454,&g_454,&g_454,&g_454},{&g_454,&g_454,&g_454,&g_454,&g_454,&g_454,&g_454}};
    int16_t l_717 = 0x9868L;
    struct S1 *l_720 = &g_47;
    int32_t l_754 = 0xF72A45D0L;
    int32_t l_755 = 1L;
    uint8_t l_781 = 255UL;
    union U2 *l_793 = &g_287[0];
    uint8_t l_843 = 0xC2L;
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_542[i] = 0x655958048058D355LL;
    for (g_47.f5 = (-5); (g_47.f5 < 12); g_47.f5 = safe_add_func_int32_t_s_s(g_47.f5, 1))
    { 
        struct S0 *l_532[1][3];
        int32_t *l_564 = &g_8;
        uint64_t *l_582 = &g_47.f5;
        uint32_t **l_592 = &g_231[0][1][0];
        uint16_t l_623 = 1UL;
        int16_t ** const *l_642[1][4] = {{(void*)0,(void*)0,(void*)0,(void*)0}};
        int32_t l_673 = 0x37541984L;
        int64_t *l_676[7] = {&l_542[0],&l_542[0],&l_542[0],&l_542[0],&l_542[0],&l_542[0],&l_542[0]};
        int64_t **l_675 = &l_676[1];
        int64_t ***l_674 = &l_675;
        const int8_t l_708 = 0xC3L;
        uint8_t ***l_722 = &g_250;
        uint8_t ****l_721[4][4][4] = {{{&l_722,&l_722,&l_722,&l_722},{&l_722,&l_722,&l_722,&l_722},{&l_722,&l_722,&l_722,&l_722},{&l_722,&l_722,&l_722,&l_722}},{{&l_722,&l_722,&l_722,&l_722},{&l_722,&l_722,&l_722,&l_722},{&l_722,&l_722,&l_722,&l_722},{&l_722,&l_722,&l_722,&l_722}},{{&l_722,&l_722,&l_722,&l_722},{&l_722,&l_722,&l_722,&l_722},{&l_722,&l_722,&l_722,&l_722},{&l_722,&l_722,&l_722,&l_722}},{{&l_722,&l_722,&l_722,&l_722},{&l_722,&l_722,&l_722,&l_722},{&l_722,&l_722,&l_722,&l_722},{&l_722,&l_722,&l_722,&l_722}}};
        uint32_t *****l_739 = &g_576;
        int32_t l_743 = 0L;
        int32_t l_746 = 0L;
        int32_t l_756 = 0L;
        uint16_t *l_863 = &g_77;
        int i, j, k;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 3; j++)
                l_532[i][j] = (void*)0;
        }
        if (((void*)0 != l_532[0][1]))
        { 
            int16_t l_537 = (-9L);
            int32_t l_543 = 0xEDEA58A8L;
            uint8_t l_544 = 0UL;
            uint32_t l_547 = 1UL;
            uint32_t * const *l_573 = (void*)0;
            uint32_t * const **l_572 = &l_573;
            uint32_t * const ***l_571[2][2][2] = {{{&l_572,&l_572},{&l_572,&l_572}},{{&l_572,&l_572},{&l_572,&l_572}}};
            uint32_t * const ****l_570[4][7] = {{&l_571[0][0][0],&l_571[0][0][0],&l_571[1][1][1],&l_571[1][1][1],&l_571[1][1][1],&l_571[0][0][0],&l_571[0][0][0]},{&l_571[0][0][0],&l_571[1][1][1],&l_571[1][1][1],&l_571[1][1][1],&l_571[0][0][0],&l_571[0][0][0],&l_571[1][1][1]},{&l_571[0][1][0],&l_571[0][0][0],&l_571[0][1][0],&l_571[1][1][1],&l_571[1][1][1],&l_571[0][1][0],&l_571[0][0][0]},{&l_571[1][1][1],&l_571[0][0][0],&l_571[1][1][1],&l_571[1][1][1],&l_571[0][0][0],&l_571[1][1][1],&l_571[0][0][0]}};
            uint32_t *****l_574 = (void*)0;
            int32_t *l_583 = (void*)0;
            uint32_t l_602 = 0UL;
            struct S1 l_618 = {0x628FA6E7L,-7L,0x4A22L,250UL,-1L,18446744073709551614UL,1L};
            struct S0 l_624 = {1UL};
            const int64_t ***l_638 = &g_162;
            int i, j, k;
            for (g_247 = 0; (g_247 <= 0); g_247 += 1)
            { 
                struct S0 l_533 = {6UL};
                int32_t *l_534 = (void*)0;
                int32_t *l_535 = &g_2;
                int32_t *l_536 = &g_242;
                int32_t *l_538 = &g_2;
                int32_t *l_539 = &g_2;
                int32_t *l_540 = &g_8;
                int32_t *l_541[3][2][6] = {{{&g_242,&g_2,&g_2,&g_242,&g_8,(void*)0},{&g_242,&g_8,(void*)0,&g_242,&g_242,(void*)0}},{{&g_2,&g_8,&g_242,&g_2,&g_242,&g_8},{&g_242,&g_8,&g_2,&g_2,&g_8,&g_242}},{{&g_2,&g_242,&g_2,&g_242,&g_8,&g_8},{&g_242,&g_242,&g_242,&g_242,&g_8,(void*)0}}};
                int i, j, k;
                l_533 = g_284.f0;
                l_544++;
                --l_547;
                if (g_393[g_247][(g_247 + 1)])
                    continue;
            }
            for (l_544 = (-28); (l_544 > 18); l_544 = safe_add_func_uint16_t_u_u(l_544, 5))
            { 
                uint32_t l_555 = 4294967295UL;
                int32_t *l_561 = &l_543;
                (*l_561) = ((safe_sub_func_int8_t_s_s((!(*g_456)), l_555)) == (safe_div_func_uint64_t_u_u(((g_234 != l_558[3]) >= ((0L <= (l_560 , 247UL)) == 0UL)), 9L)));
            }
            (*l_564) &= ((g_46 < l_542[0]) > ((0xD2810385L || (safe_add_func_uint64_t_u_u(p_28, p_28))) , (((void*)0 != l_564) == l_537)));
            if (l_542[0])
            { 
                const uint32_t l_567 = 1UL;
                struct S0 l_581 = {0xE5205DC0L};
                (*l_564) = (safe_sub_func_uint32_t_u_u(((void*)0 != &g_362), l_567));
                if ((safe_add_func_int16_t_s_s(((((l_570[0][1] = (void*)0) == (g_575 = l_574)) < ((safe_sub_func_uint64_t_u_u((safe_mul_func_uint16_t_u_u(l_537, 1UL)), 0x766022079697BE90LL)) && 65535UL)) ^ l_542[0]), 0x7902L)))
                { 
                    (*p_29) = &l_543;
                    (*g_67) = (*g_67);
                    (*g_67) = &l_543;
                    return l_581;
                }
                else
                { 
                    (*l_564) = (((((((((void*)0 != l_582) > p_28) > (p_28 ^ p_28)) > ((((*g_251) < (p_29 != (void*)0)) < (**g_455)) ^ 4294967290UL)) | p_28) && g_393[0][2]) , g_46) >= p_28);
                }
                (*g_67) = (l_583 = &g_242);
                (*g_67) = (*g_67);
            }
            else
            { 
                int16_t l_594 = 0L;
                int8_t *l_599 = (void*)0;
                int8_t *l_600 = &g_393[0][0];
                struct S0 l_601 = {0xA3BA75B7L};
                int32_t l_622 = 0x64A109D7L;
                if ((0x16CD8C874ED5640ELL || (65528UL == (safe_div_func_int64_t_s_s((**g_162), ((safe_sub_func_uint64_t_u_u(1UL, (((((*l_600) = (safe_lshift_func_int8_t_s_s(((safe_div_func_uint64_t_u_u((l_592 != l_593), (((g_597 |= (g_243--)) || ((l_598 = 0xC0CCL) | p_28)) ^ p_28))) >= p_28), l_542[0]))) == (*p_31)) <= (*l_564)) | l_560.f0))) ^ l_594))))))
                { 
                    return l_601;
                }
                else
                { 
                    int64_t l_621 = (-10L);
                    (*l_564) ^= p_28;
                    if (l_602)
                        continue;
                    l_622 = (safe_lshift_func_int16_t_s_u((**g_455), ((safe_mul_func_int16_t_s_s(((safe_sub_func_int32_t_s_s(g_433, (((0x7584L <= (safe_mod_func_int32_t_s_s((safe_div_func_uint8_t_u_u((++(*g_251)), 0xD6L)), (~(safe_mul_func_uint16_t_u_u(((l_618 , ((((safe_sub_func_uint8_t_u_u((l_601.f0 , ((l_621 == g_433) >= (*l_564))), p_28)) & 0xB7B80AF941CD03C4LL) == p_28) ^ p_28)) , 0UL), p_28)))))) ^ (-6L)) & l_621))) , (***g_454)), (*l_564))) && 0xF6325901L)));
                }
                if (l_622)
                { 
                    (*l_564) = l_623;
                    l_560 = g_284.f0;
                    l_560 = g_284.f0;
                    return l_560;
                }
                else
                { 
                    int32_t *l_634 = (void*)0;
                    uint8_t l_637 = 0x12L;
                    l_624 = l_601;
                    l_622 |= (safe_rshift_func_int16_t_s_s(((safe_lshift_func_int8_t_s_s((-1L), ((*l_600) = (-1L)))) && ((safe_mod_func_int16_t_s_s(((!((safe_mul_func_int16_t_s_s((p_28 , (*l_564)), (*g_456))) & (g_242 &= 0x80AA3E34L))) || ((safe_div_func_int32_t_s_s(p_28, l_594)) & p_28)), (**g_273))) | g_47.f5)), l_637));
                }
                l_638 = &g_162;
            }
        }
        else
        { 
            uint32_t l_653[4];
            int32_t *l_655 = &l_598;
            int32_t l_709 = (-1L);
            struct S1 l_730 = {0x00E99619L,1L,8L,0x2CL,0L,0x1D202063830F90AALL,0xF6L};
            const int16_t **l_734 = &g_704;
            uint64_t l_735[7][7];
            struct S0 l_737 = {0xD919CD02L};
            int32_t *l_742[3][5] = {{&l_598,&g_242,&g_242,&l_598,&g_242},{&l_598,&l_598,(void*)0,&l_598,&l_598},{&g_242,&l_598,&g_242,&g_242,&l_598}};
            int i, j;
            for (i = 0; i < 4; i++)
                l_653[i] = 4294967295UL;
            for (i = 0; i < 7; i++)
            {
                for (j = 0; j < 7; j++)
                    l_735[i][j] = 0x6DECCDC1A76C9E62LL;
            }
            (*l_655) |= (((!(((*g_274) || (safe_mul_func_uint16_t_u_u((((void*)0 != l_642[0][2]) == (*p_31)), (safe_sub_func_uint64_t_u_u((+((safe_sub_func_int32_t_s_s(((p_28 , (safe_sub_func_int32_t_s_s((((safe_div_func_int32_t_s_s(((*l_564) = ((((*g_363) , l_652) != g_234) & 4294967286UL)), l_653[2])) , (*g_251)) ^ (*p_31)), l_653[2]))) | 0x82A16E15L), g_654)) == l_560.f0)), (*g_163)))))) ^ (*g_319))) < 0xD019FCF4C5A29EC5LL) > 0x52E570D5L);
            for (g_194 = 3; (g_194 >= 0); g_194 -= 1)
            { 
                uint8_t * const *l_658 = &g_251;
                uint8_t * const **l_657[3][6][6] = {{{&l_658,&l_658,&l_658,&l_658,&l_658,&l_658},{&l_658,&l_658,(void*)0,&l_658,&l_658,&l_658},{&l_658,&l_658,&l_658,&l_658,&l_658,&l_658},{&l_658,&l_658,&l_658,&l_658,(void*)0,&l_658},{&l_658,&l_658,&l_658,&l_658,&l_658,&l_658},{(void*)0,&l_658,&l_658,&l_658,&l_658,&l_658}},{{(void*)0,&l_658,&l_658,(void*)0,&l_658,&l_658},{&l_658,&l_658,&l_658,&l_658,&l_658,(void*)0},{&l_658,&l_658,&l_658,&l_658,&l_658,&l_658},{&l_658,&l_658,&l_658,&l_658,&l_658,&l_658},{&l_658,&l_658,&l_658,&l_658,&l_658,&l_658},{&l_658,&l_658,(void*)0,&l_658,&l_658,&l_658}},{{&l_658,&l_658,&l_658,&l_658,&l_658,&l_658},{&l_658,&l_658,(void*)0,&l_658,&l_658,&l_658},{(void*)0,&l_658,&l_658,&l_658,(void*)0,&l_658},{&l_658,&l_658,&l_658,&l_658,&l_658,&l_658},{&l_658,&l_658,&l_658,&l_658,&l_658,&l_658},{&l_658,&l_658,&l_658,&l_658,&l_658,&l_658}}};
                uint8_t * const ***l_656 = &l_657[0][1][4];
                uint8_t * const ****l_659 = (void*)0;
                uint8_t * const ****l_660 = (void*)0;
                uint8_t * const ****l_661 = (void*)0;
                const uint16_t **l_668 = (void*)0;
                const uint16_t *l_670 = &g_671[4];
                const uint16_t **l_669 = &l_670;
                int16_t l_672 = 1L;
                const int16_t ** const **l_705 = &g_702;
                int32_t l_707 = 0L;
                struct S0 l_719 = {18446744073709551608UL};
                uint64_t l_736 = 0xC254CB22A6021E60LL;
                int i, j, k;
                l_662 = l_656;
                l_598 = (0xB776L | (0x0763L ^ (l_673 = (l_672 = ((*l_564) >= (safe_mod_func_uint16_t_u_u((0UL > (*l_655)), (~((((*l_669) = &l_623) != (void*)0) > p_28)))))))));
            }
            for (g_395 = 0; (g_395 >= (-10)); g_395 = safe_sub_func_int64_t_s_s(g_395, 2))
            { 
                (*p_29) = (void*)0;
                (*l_564) = ((void*)0 != &l_542[0]);
                (*l_564) = (*l_655);
            }
            ++g_751[0];
            --g_758;
        }
        for (l_756 = 24; (l_756 == 0); --l_756)
        { 
            struct S0 l_765 = {0x84FA94CCL};
            int32_t *l_768[5][3][6];
            int8_t *l_790 = &g_393[0][1];
            uint64_t *l_806 = &g_243;
            uint8_t l_816 = 5UL;
            uint8_t l_822 = 0xCBL;
            uint32_t l_823 = 18446744073709551615UL;
            int8_t l_826 = 0x8CL;
            const int16_t **l_837 = &g_704;
            uint8_t l_844 = 5UL;
            int i, j, k;
            for (i = 0; i < 5; i++)
            {
                for (j = 0; j < 3; j++)
                {
                    for (k = 0; k < 6; k++)
                        l_768[i][j][k] = &g_2;
                }
            }
            for (g_439 = 1; (g_439 <= 6); g_439 += 1)
            { 
                int32_t l_780 = 0x4D4316A4L;
                int i;
                if ((safe_mul_func_uint8_t_u_u((((*l_720) , l_765) , 0x44L), (safe_rshift_func_int16_t_s_u(g_57[g_439], 3)))))
                { 
                    if (l_765.f0)
                        break;
                    (*p_29) = l_768[4][1][4];
                }
                else
                { 
                    int32_t l_773[4][2] = {{0x31C7B469L,0x31C7B469L},{0x31C7B469L,0x31C7B469L},{0x31C7B469L,0x31C7B469L},{0x31C7B469L,0x31C7B469L}};
                    int i, j;
                    (*l_564) = (l_780 = (g_2 = (safe_div_func_int32_t_s_s((safe_sub_func_int32_t_s_s((((l_773[0][1] > 0x2B2CC251L) , ((safe_rshift_func_int16_t_s_u(((safe_rshift_func_uint8_t_u_u((((safe_sub_func_uint16_t_u_u(0xC1C3L, (****g_701))) <= ((((**g_250) = l_754) || (*p_31)) < 0xC3L)) > p_28), 3)) , g_57[g_439]), p_28)) <= 9UL)) >= 0xFD44L), (-1L))), (-6L)))));
                }
                for (g_744 = 0; (g_744 <= 0); g_744 += 1)
                { 
                    l_781 |= (-1L);
                }
            }
            if (((safe_rshift_func_int16_t_s_s(l_542[0], 8)) || (l_598 = ((p_28 & ((*g_456) |= ((****g_701) >= (safe_unary_minus_func_int64_t_s(((g_757 > p_28) > (((~(safe_rshift_func_uint16_t_u_u(3UL, 7))) , (safe_lshift_func_int8_t_s_u(((*l_790) = (((*g_251) = 255UL) , (*l_564))), 4))) & 0xABL))))))) > p_28))))
            { 
                int64_t l_795[5] = {0xA499E8B9C85B55EALL,0xA499E8B9C85B55EALL,0xA499E8B9C85B55EALL,0xA499E8B9C85B55EALL,0xA499E8B9C85B55EALL};
                int32_t l_796 = 0x35ED34C6L;
                int16_t l_814 = 0L;
                struct S0 l_827[6] = {{18446744073709551607UL},{18446744073709551607UL},{18446744073709551607UL},{18446744073709551607UL},{18446744073709551607UL},{18446744073709551607UL}};
                int16_t * const l_833[5][3] = {{&g_836,&g_834[2],&g_836},{(void*)0,(void*)0,(void*)0},{&g_836,&g_834[2],&g_836},{(void*)0,(void*)0,(void*)0},{&g_836,&g_834[2],&g_836}};
                int16_t * const *l_832 = &l_833[4][2];
                uint32_t *l_840 = &g_439;
                int i, j;
                for (g_2 = 20; (g_2 > (-30)); g_2 = safe_sub_func_uint32_t_u_u(g_2, 8))
                { 
                    union U2 **l_794 = &l_793;
                    uint32_t l_798 = 0x453AE536L;
                    struct S0 l_801 = {4UL};
                    (*l_794) = l_793;
                    --l_798;
                    return l_801;
                }
                if (l_795[0])
                { 
                    uint32_t l_813 = 0UL;
                    int8_t **l_817 = &l_790;
                    int64_t l_821 = 0x730751477019FCFALL;
                    (*l_564) = (((*l_817) = func_39((safe_mod_func_uint32_t_u_u(((safe_sub_func_uint64_t_u_u(((void*)0 != l_806), ((safe_mul_func_int16_t_s_s((****g_701), (((safe_div_func_uint32_t_u_u((safe_add_func_uint16_t_u_u((((l_765 , (((*p_31) < ((*p_31) , ((l_813 == 6L) | p_28))) == l_814)) < 0x7C9AB0062281C741LL) & (**g_273)), 1L)), g_815)) > p_28) < l_813))) | p_28))) ^ 0x3E117F18L), l_816)), g_8, (***g_725), (**g_162), p_28)) != (void*)0);
                    if (g_47.f1)
                        continue;
                    (*l_564) = (p_28 > ((safe_unary_minus_func_uint8_t_u((((-1L) >= ((((p_28 <= ((((((safe_lshift_func_int8_t_s_u((-5L), 3)) || p_28) , 0xDBE2F83B13926D4DLL) > ((*l_806) = ((((((l_821 & (***g_454)) != l_813) <= l_821) , 0xDDD13931D8641390LL) | l_813) && p_28))) >= p_28) >= 0xB4L)) && l_822) <= 0x98DE07F754E2FF5ELL) | p_28)) , (**g_250)))) > l_813));
                }
                else
                { 
                    int16_t l_825[7][5] = {{0x5449L,1L,0xA319L,1L,0L},{0xC427L,4L,0x7ACFL,0L,0x49A4L},{0xC427L,0x49A4L,0xFA0CL,1L,1L},{0L,1L,0L,4L,0x49A4L},{0x5449L,1L,0x49A4L,4L,0L},{0x49A4L,0xFA0CL,1L,1L,0xFA0CL},{0xFA0CL,0L,0x49A4L,0L,0x7ACFL}};
                    int i, j;
                    l_825[1][0] = (((*l_790) = l_823) , ((g_824 |= ((*l_806) = p_28)) | p_28));
                    if (l_826)
                        break;
                    return l_827[4];
                }
                (*l_564) &= ((4294967295UL & (safe_mul_func_uint8_t_u_u(0xFBL, (safe_mod_func_int64_t_s_s(((l_832 = (*g_454)) == l_837), (((safe_lshift_func_uint8_t_u_s((((*l_840) = p_28) , ((0x02L || 0x5DL) , p_28)), 7)) , 0x02L) , 8L)))))) | (*g_251));
                (*l_564) = l_795[0];
                if (l_542[0])
                    continue;
            }
            else
            { 
                for (g_47.f4 = 0; (g_47.f4 != (-21)); g_47.f4 = safe_sub_func_uint64_t_u_u(g_47.f4, 7))
                { 
                    (*p_29) = &g_8;
                }
                (*l_564) ^= l_843;
            }
            (*l_564) |= l_844;
        }
        if ((*l_564))
            break;
        for (g_46 = 0; (g_46 <= (-12)); g_46 = safe_sub_func_int8_t_s_s(g_46, 3))
        { 
            int16_t l_865 = 0x57CCL;
            int32_t l_868 = 0x042221D7L;
            int32_t l_870 = 1L;
            for (l_560.f0 = 20; (l_560.f0 <= 14); l_560.f0--)
            { 
                int8_t *l_864 = &g_393[0][0];
                int32_t l_866 = 1L;
                int32_t *l_867 = (void*)0;
                int32_t *l_869[6] = {&g_242,&l_756,&l_756,&g_242,&l_756,&l_756};
                int i;
                l_755 |= (safe_lshift_func_int16_t_s_s((safe_sub_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_u((safe_sub_func_int16_t_s_s(((-1L) || (&g_243 == (*l_652))), (*l_564))), 5)), (safe_mod_func_uint16_t_u_u((3L ^ ((safe_lshift_func_int8_t_s_s(((*l_864) = (safe_mul_func_uint16_t_u_u((l_863 != (void*)0), (**g_273)))), (*p_31))) , (*l_564))), l_865)))), p_28));
                if ((*l_564))
                    break;
                for (g_597 = 0; (g_597 <= 6); g_597 += 1)
                { 
                    l_866 |= l_542[0];
                }
                g_872--;
                (*g_67) = &g_2;
            }
        }
    }
    return l_560;
}



static uint8_t  func_35(uint16_t  p_36, int8_t * p_37, int8_t * p_38)
{ 
    int32_t *l_52 = &g_2;
    int32_t *l_53 = &g_2;
    int32_t *l_54[2];
    int32_t l_56 = 0x7E64BFCEL;
    struct S0 l_66 = {0x6E035D6DL};
    int8_t *l_69 = &g_46;
    struct S1 l_70 = {0x66C3C348L,0xB8AAA841L,0x58A3L,1UL,0x4EFFL,18446744073709551615UL,0x54L};
    int64_t l_117 = 6L;
    int32_t l_206 = (-8L);
    int16_t *l_261 = &g_47.f4;
    uint32_t l_330 = 0x9E785CDDL;
    const int32_t l_332 = 1L;
    const struct S1 *l_366 = &l_70;
    const struct S1 **l_365 = &l_366;
    int32_t l_373 = 1L;
    int16_t **l_400 = &l_261;
    int16_t ***l_399 = &l_400;
    int8_t l_407 = 0x44L;
    int32_t *l_414 = &l_56;
    const uint64_t *l_432 = &g_433;
    int i;
    for (i = 0; i < 2; i++)
        l_54[i] = &g_8;
    --g_57[4];
    if (((*l_53) = ((0xF9BDEFAB77C19C50LL | (func_60((l_66 , g_67), p_37, &l_52, (1L <= (l_69 == &g_46)), l_70) , p_36)) , 0x0A206E71L)))
    { 
        const int8_t l_86 = 0xFBL;
        uint64_t *l_87 = &l_70.f5;
        uint64_t l_88[5][7][3] = {{{0x4C626C4802A3EDB7LL,0UL,0x52A12E219839B2FDLL},{18446744073709551615UL,0x69141744B85C5578LL,6UL},{0UL,0UL,0UL},{18446744073709551606UL,18446744073709551613UL,0xC771C75621C9A839LL},{0UL,5UL,0UL},{18446744073709551615UL,6UL,0xC771C75621C9A839LL},{0x4C626C4802A3EDB7LL,1UL,0UL}},{{0x25587BB5B285EFCBLL,6UL,6UL},{1UL,5UL,0x52A12E219839B2FDLL},{0x25587BB5B285EFCBLL,18446744073709551613UL,0x2C871CFEE841A119LL},{0x4C626C4802A3EDB7LL,0UL,0x52A12E219839B2FDLL},{18446744073709551615UL,0x69141744B85C5578LL,6UL},{0UL,0UL,0UL},{18446744073709551606UL,18446744073709551613UL,0xC771C75621C9A839LL}},{{0UL,5UL,0UL},{18446744073709551615UL,6UL,0xC771C75621C9A839LL},{0x4C626C4802A3EDB7LL,1UL,0UL},{0x25587BB5B285EFCBLL,6UL,6UL},{1UL,5UL,0x52A12E219839B2FDLL},{0x25587BB5B285EFCBLL,18446744073709551613UL,0x2C871CFEE841A119LL},{0x4C626C4802A3EDB7LL,0UL,0x52A12E219839B2FDLL}},{{18446744073709551615UL,0x69141744B85C5578LL,6UL},{0UL,0UL,0UL},{18446744073709551606UL,18446744073709551613UL,0xC771C75621C9A839LL},{0UL,5UL,0UL},{18446744073709551615UL,6UL,0xC771C75621C9A839LL},{0x4C626C4802A3EDB7LL,1UL,0UL},{0x25587BB5B285EFCBLL,6UL,6UL}},{{1UL,5UL,0x52A12E219839B2FDLL},{0x25587BB5B285EFCBLL,18446744073709551613UL,0x2C871CFEE841A119LL},{0x4C626C4802A3EDB7LL,0UL,0x52A12E219839B2FDLL},{18446744073709551615UL,0x69141744B85C5578LL,6UL},{0UL,0UL,0UL},{18446744073709551606UL,18446744073709551613UL,0xC771C75621C9A839LL},{0UL,5UL,0UL}}};
        int64_t *l_91 = &g_76;
        int32_t *l_94 = (void*)0;
        int16_t *l_101 = &g_47.f4;
        uint16_t *l_102 = (void*)0;
        uint16_t *l_103 = (void*)0;
        uint16_t *l_104 = &g_77;
        uint16_t *l_105 = &g_57[4];
        int32_t l_133 = 0x14F5BEE3L;
        uint32_t l_145 = 0xEBDE3C26L;
        uint8_t *l_195 = &g_47.f3;
        int16_t l_214 = 0x175BL;
        int32_t l_236 = 1L;
        int32_t l_241 = 0x4AAAEAEDL;
        uint32_t l_277 = 0xEEF04CFCL;
        const int64_t l_281 = 0xC3217EF71F425CC5LL;
        struct S0 l_282 = {0x2136C564L};
        struct S1 l_352 = {4294967291UL,0xB9CFDD6BL,0L,0x5AL,0L,18446744073709551615UL,0xF0L};
        uint32_t ***l_408 = &g_230;
        struct S0 *l_435 = (void*)0;
        int32_t l_436 = (-5L);
        int32_t l_437 = 0xF1FE5527L;
        int32_t l_438 = 0xBCC50A40L;
        int i, j, k;
lbl_146:
        (*l_53) |= ((-1L) < (safe_lshift_func_int8_t_s_u(((((safe_sub_func_uint16_t_u_u((((void*)0 != &g_68) , (safe_div_func_uint16_t_u_u(l_86, ((l_69 == p_37) | ((((*l_87) &= p_36) ^ 6UL) < 0x9CB9L))))), p_36)) & p_36) , 246UL) || g_47.f6), l_88[1][6][0])));
        if ((safe_rshift_func_uint16_t_u_u(((*l_105) = (((((*l_91) = (254UL | l_86)) , ((*l_104) |= (safe_div_func_int8_t_s_s((((((*g_67) = l_94) == (void*)0) , p_36) || (((*l_101) = ((safe_div_func_int16_t_s_s((safe_add_func_int16_t_s_s(p_36, ((safe_add_func_int64_t_s_s(g_8, p_36)) >= 0L))), 0x2646L)) , g_57[4])) > g_57[4])), p_36)))) || p_36) > g_55)), 0)))
        { 
            int8_t l_106 = 0x87L;
            int32_t * const l_156[5][1][1] = {{{&g_2}},{{&g_2}},{{&g_2}},{{&g_2}},{{&g_2}}};
            uint32_t *l_228[4];
            uint32_t **l_227 = &l_228[1];
            uint8_t ***l_275 = &g_250;
            uint32_t l_276 = 0x5F7AC17AL;
            struct S0 l_280[7][6] = {{{0xBB9B91C4L},{0x3BFD860EL},{1UL},{0x175E5F06L},{0x3BFD860EL},{0x5D37358AL}},{{0x15FF81F1L},{0xBB9B91C4L},{18446744073709551612UL},{0x3BFD860EL},{0UL},{0x5D37358AL}},{{0UL},{0x15FF81F1L},{1UL},{18446744073709551615UL},{18446744073709551615UL},{1UL}},{{0UL},{0UL},{0x8BD1D58CL},{0x3BFD860EL},{0x909BAAA9L},{0xB511B20AL}},{{0x15FF81F1L},{0UL},{18446744073709551609UL},{0x175E5F06L},{18446744073709551615UL},{0x8BD1D58CL}},{{0xBB9B91C4L},{0x15FF81F1L},{18446744073709551609UL},{0xBB9B91C4L},{0UL},{0xB511B20AL}},{{0x3BFD860EL},{0xBB9B91C4L},{0x8BD1D58CL},{0xBB9B91C4L},{0x3BFD860EL},{18446744073709551615UL}}};
            union U2 *l_283 = &g_284;
            int i, j, k;
            for (i = 0; i < 4; i++)
                l_228[i] = &l_70.f0;
            if (l_106)
            { 
                uint16_t l_110 = 1UL;
                uint64_t *l_134 = (void*)0;
                if (((g_107 , (((*l_91) |= (safe_mod_func_int16_t_s_s((l_110 <= ((((((safe_sub_func_uint64_t_u_u(p_36, (0x819422B6L < (g_47.f0 |= (safe_sub_func_int64_t_s_s((safe_mul_func_uint16_t_u_u(l_117, (safe_lshift_func_int8_t_s_u((safe_lshift_func_int8_t_s_u(l_110, 6)), 3)))), (safe_lshift_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_u((safe_add_func_int16_t_s_s(((safe_sub_func_uint64_t_u_u(((l_86 & l_110) ^ 0xC331A2D7867E7C57LL), g_47.f5)) || 5L), 0xA0F1L)), 7)), 3)))))))) , (-2L)) >= p_36) == p_36) ^ 0x54A4L) , 0x2EE2B33AL)), p_36))) && p_36)) && p_36))
                { 
                    return p_36;
                }
                else
                { 
                    int32_t *l_130 = &g_2;
                    (*g_67) = (void*)0;
                    (*g_67) = l_130;
                    (*g_67) = &l_56;
                    l_133 = (safe_sub_func_uint16_t_u_u(g_47.f6, 0x509CL));
                }
                (*g_68) = ((void*)0 == l_134);
                (**g_67) ^= (safe_div_func_int64_t_s_s((p_36 && (p_36 , (g_47 , ((((((safe_add_func_int8_t_s_s((((safe_div_func_int8_t_s_s((((safe_sub_func_int16_t_s_s(((*l_101) = (((*l_87) = (safe_sub_func_int16_t_s_s(l_106, (0x06L && 0x58L)))) != g_57[4])), 65527UL)) , &g_57[4]) == &p_36), 0x8EL)) , g_8) , (*p_38)), (*l_52))) , 1L) | 0x83L) && g_47.f3) | 3UL) | l_145)))), g_47.f2));
                return p_36;
            }
            else
            { 
                if (p_36)
                { 
                    int64_t **l_151 = &l_91;
                    int64_t *l_153 = &l_117;
                    int64_t **l_152 = &l_153;
                    int32_t l_154 = 0xA0E29635L;
                    int32_t l_155[5];
                    int i;
                    for (i = 0; i < 5; i++)
                        l_155[i] = 0x735A7C04L;
                    if (l_70.f5)
                        goto lbl_146;
                    l_155[4] ^= ((safe_lshift_func_int8_t_s_s((g_2 && ((((((*l_101) = ((g_47.f3 ^ (((*l_151) = &g_76) != ((*l_152) = &g_55))) <= (&g_46 != l_69))) , l_154) > 65526UL) <= g_47.f3) , l_154)), (*p_38))) && 0x0FL);
                    (*l_52) ^= p_36;
                }
                else
                { 
                    int32_t **l_157 = &l_54[0];
                    (*l_157) = l_156[4][0][0];
                }
                for (l_56 = 0; (l_56 <= 1); l_56 += 1)
                { 
                    int i;
                    if (g_57[(l_56 + 3)])
                        break;
                }
            }
            if ((((g_47.f5 , (safe_sub_func_uint32_t_u_u(((safe_rshift_func_int8_t_s_u((((void*)0 == g_162) | (+g_8)), (p_36 != ((safe_sub_func_int8_t_s_s(0x6AL, ((*p_38) <= g_46))) <= (*p_37))))) <= g_76), p_36))) , (void*)0) == &g_74))
            { 
                const int32_t * const l_170 = &g_8;
                const int32_t * const *l_169 = &l_170;
                int32_t l_192 = (-7L);
                uint32_t l_197 = 18446744073709551609UL;
                uint16_t **l_212 = &l_103;
                int8_t *l_213 = &l_106;
                for (g_47.f5 = 4; (g_47.f5 > 25); g_47.f5 = safe_add_func_int8_t_s_s(g_47.f5, 2))
                { 
                    uint32_t *l_173 = (void*)0;
                    int16_t **l_174 = (void*)0;
                    int16_t **l_175 = &l_101;
                    int32_t ** const l_182 = &g_68;
                    uint8_t *l_183 = &g_47.f3;
                    uint64_t *l_193[6][5] = {{(void*)0,(void*)0,&g_47.f5,(void*)0,(void*)0},{&l_88[1][6][0],(void*)0,&l_88[1][6][0],&l_88[1][6][0],(void*)0},{(void*)0,&l_88[2][3][0],&l_88[2][3][0],(void*)0,&l_88[2][3][0]},{(void*)0,(void*)0,&l_88[1][6][0],(void*)0,(void*)0},{&l_88[2][3][0],(void*)0,&l_88[2][3][0],&l_88[2][3][0],(void*)0},{(void*)0,&l_88[1][6][0],&l_88[1][6][0],(void*)0,&l_88[1][6][0]}};
                    int i, j;
                    (*l_52) ^= (l_169 != ((g_47.f0 = (safe_rshift_func_int16_t_s_s((**l_169), 12))) , &l_54[0]));
                    (*l_52) |= (0x42L & ((((((((*l_175) = (void*)0) == (void*)0) > (safe_rshift_func_uint16_t_u_u((safe_mul_func_int16_t_s_s(((safe_div_func_uint32_t_u_u((((*l_183) = ((void*)0 != l_182)) , (safe_lshift_func_uint16_t_u_u(((0x08L | (g_8 || 18446744073709551615UL)) > p_36), p_36))), g_47.f6)) , p_36), g_107.f0)), (*l_170)))) ^ g_8) || (-1L)) && p_36) | 0x35L));
                    g_196[1] &= ((safe_add_func_uint32_t_u_u(9UL, (safe_add_func_int32_t_s_s((*l_53), (safe_lshift_func_uint8_t_u_s(((((((void*)0 == (*g_67)) , (**l_169)) & (g_194 = ((*l_87) = (l_192 = g_8)))) ^ ((l_69 == l_195) , g_57[4])) && (*l_170)), 3)))))) | p_36);
                    l_197++;
                }
                (*l_52) = (((*l_87)--) & (safe_rshift_func_uint16_t_u_s(((*l_105) ^= ((safe_div_func_int32_t_s_s((0x33CD63981B1BC71CLL != l_206), (safe_add_func_uint64_t_u_u(g_194, (!(safe_rshift_func_int8_t_s_s((((*l_212) = &g_77) == &g_57[2]), ((*l_213) ^= ((*p_38) = (*p_38)))))))))) != l_214)), 12)));
            }
            else
            { 
                uint32_t ***l_229[5];
                int32_t l_235 = 0x58D05659L;
                int32_t l_238[6] = {(-4L),(-4L),(-4L),(-4L),(-4L),(-4L)};
                int8_t l_239[6] = {1L,1L,1L,1L,1L,1L};
                uint16_t * const *l_272 = &l_103;
                struct S0 l_278 = {0xDB64655AL};
                struct S0 *l_279[6][5][3] = {{{&l_66,&l_66,&l_66},{&l_278,&l_278,&l_278},{&l_66,(void*)0,&l_66},{&l_278,&l_278,&l_66},{&g_107,(void*)0,&l_66}},{{&l_66,&l_278,&l_278},{&g_107,&l_66,&g_107},{&l_278,&l_66,&l_278},{&l_66,&l_278,&l_66},{&l_278,&l_66,&l_66}},{{&l_66,&l_66,&l_66},{&l_278,&l_278,&l_278},{&l_66,(void*)0,&l_66},{&l_278,&l_278,&l_66},{&g_107,(void*)0,&l_66}},{{&l_66,&l_278,&l_278},{&g_107,&l_66,&g_107},{&l_278,&l_66,&l_278},{&l_66,&l_278,&l_66},{&l_278,&l_66,&l_66}},{{&l_66,&l_66,&l_66},{&l_278,&l_278,&l_278},{&l_66,(void*)0,&l_66},{&l_278,&l_278,&l_66},{&g_107,(void*)0,&l_66}},{{&l_66,&l_278,&l_278},{&g_107,&l_66,&g_107},{&l_278,&l_66,&l_278},{&l_66,&l_278,&l_66},{&l_278,&l_66,&l_66}}};
                int i, j, k;
                for (i = 0; i < 5; i++)
                    l_229[i] = &l_227;
                (*l_53) &= (((safe_mod_func_uint64_t_u_u(((*l_87) ^= (0x9FL ^ (safe_lshift_func_int16_t_s_s((safe_mod_func_uint64_t_u_u(0UL, ((safe_rshift_func_int8_t_s_s((p_36 != (safe_lshift_func_int8_t_s_s(((*p_37) = (((void*)0 == &g_68) == (p_36 & (safe_rshift_func_uint8_t_u_s(((void*)0 == l_156[4][0][0]), 2))))), 4))), 1)) & (*g_163)))), p_36)))), p_36)) , (void*)0) != &l_106);
                g_230 = l_227;
                for (l_133 = 13; (l_133 < (-2)); l_133--)
                { 
                    int64_t l_237 = 0L;
                    uint8_t ***l_252 = &g_250;
                    g_234 = (void*)0;
                    g_243++;
                    (*l_52) = p_36;
                    --g_247;
                    (*l_252) = g_250;
                }
                l_280[6][3] = (((l_235 = (safe_add_func_int64_t_s_s((safe_add_func_int16_t_s_s((safe_mod_func_int32_t_s_s(((safe_mod_func_int16_t_s_s(((*l_101) = ((p_36 || 0L) == ((***l_275) |= ((((l_239[0] , &g_246) == l_261) == (g_76 < ((((safe_div_func_int32_t_s_s(((safe_mod_func_int32_t_s_s((safe_rshift_func_int16_t_s_u(((safe_mul_func_int8_t_s_s((((l_272 == g_273) , &g_250) == l_275), l_276)) == 0x1EA467D7L), p_36)), l_239[0])) ^ (*l_53)), (**g_230))) , g_196[1]) > p_36) == l_238[0]))) && 3UL)))), p_36)) ^ 3L), p_36)), p_36)), g_46))) | l_277) , l_278);
                if (l_281)
                { 
                    union U2 **l_285[5] = {&l_283,&l_283,&l_283,&l_283,&l_283};
                    uint8_t l_299 = 6UL;
                    int i;
                    g_107 = l_282;
                    l_52 = (*g_67);
                    g_286 = l_283;
                    if (l_282.f0)
                        goto lbl_300;
lbl_300:
                    (*l_53) |= ((((*g_274) = ((safe_mod_func_uint64_t_u_u(((safe_add_func_int8_t_s_s(g_47.f4, (((+(+(safe_lshift_func_uint16_t_u_s((&g_46 == (void*)0), 3)))) >= 4294967291UL) <= (safe_mod_func_int64_t_s_s((0UL ^ ((~((6L > l_299) & p_36)) > p_36)), (*g_163)))))) <= (**g_230)), l_235)) & p_36)) , p_36) >= g_47.f4);
                    (*l_53) = l_278.f0;
                }
                else
                { 
                    struct S0 l_301 = {1UL};
                    (*g_67) = (void*)0;
                    l_301 = (g_287[0].f1 = g_107);
                }
            }
            (*g_67) = (*g_67);
            for (g_74 = 0; (g_74 != 25); ++g_74)
            { 
                uint32_t l_304 = 4294967294UL;
                ++l_304;
                if (p_36)
                    continue;
                (*g_67) = (*g_67);
                for (l_241 = (-18); (l_241 > (-9)); l_241 = safe_add_func_int8_t_s_s(l_241, 8))
                { 
                    return l_304;
                }
            }
        }
        else
        { 
            uint16_t * const **l_317 = (void*)0;
            int32_t l_329[7][4][7];
            int32_t l_331 = 0xCDEC75F1L;
            int32_t *l_356 = &l_236;
            uint32_t l_372 = 1UL;
            uint32_t l_380[6];
            int32_t **l_391[6][1] = {{&l_94},{&l_54[0]},{&l_94},{&l_54[0]},{&l_94},{&l_54[0]}};
            uint64_t l_396 = 0x91F2F87219A0BE3BLL;
            int16_t ***l_402 = &l_400;
            struct S0 l_416[2] = {{0x08090F0AL},{0x08090F0AL}};
            int i, j, k;
            for (i = 0; i < 7; i++)
            {
                for (j = 0; j < 4; j++)
                {
                    for (k = 0; k < 7; k++)
                        l_329[i][j][k] = 1L;
                }
            }
            for (i = 0; i < 6; i++)
                l_380[i] = 0UL;
            l_331 &= ((*l_53) = (safe_lshift_func_uint8_t_u_u((safe_add_func_int8_t_s_s((g_240 = (l_329[5][3][0] = ((*p_37) ^= (((p_36 , ((safe_mod_func_uint64_t_u_u(((safe_lshift_func_int8_t_s_u(((g_318[0][0][0] = (p_36 , &g_274)) != &g_274), 4)) || ((**g_250) == ((safe_sub_func_uint32_t_u_u((safe_mod_func_uint32_t_u_u(((safe_rshift_func_int8_t_s_u(((safe_sub_func_uint16_t_u_u(((l_329[5][3][0] < 2UL) | (-1L)), g_2)) , l_330), (**g_250))) == p_36), 0xA7B01F77L)), l_329[5][3][0])) & p_36))), p_36)) < p_36)) == 0x43L) ^ 3L)))), p_36)), p_36)));
            if (l_332)
            { 
                int32_t l_340 = 0x3902DA11L;
                int32_t l_350 = 0x13D93577L;
                for (g_76 = 2; (g_76 >= 0); g_76 -= 1)
                { 
                    int i;
                    (*l_53) &= g_57[g_76];
                }
                for (l_330 = 0; (l_330 >= 50); l_330++)
                { 
                    if (p_36)
                        break;
                    (*g_67) = (g_47 , &l_236);
                }
                if (((safe_mul_func_int16_t_s_s((g_47.f6 && (~((((((p_36 == ((safe_div_func_uint32_t_u_u(0x30411F77L, p_36)) != ((l_340 | (((safe_rshift_func_uint8_t_u_u(0x75L, 5)) == l_340) , (*g_251))) != 0L))) <= 0L) ^ 0x69D0L) & (*g_251)) > p_36) != (*g_251)))), (*l_52))) <= l_340))
                { 
                    uint16_t l_349[5][4] = {{0UL,0UL,0x29ADL,0x29ADL},{0UL,0UL,0x29ADL,0x29ADL},{0UL,0UL,0x29ADL,0x29ADL},{0UL,0UL,0x29ADL,0x29ADL},{0UL,0UL,0x29ADL,0x29ADL}};
                    const struct S1 *l_354[7];
                    const struct S1 **l_353 = &l_354[4];
                    int32_t **l_355[3];
                    struct S0 *l_358 = &l_66;
                    int i, j;
                    for (i = 0; i < 7; i++)
                        l_354[i] = (void*)0;
                    for (i = 0; i < 3; i++)
                        l_355[i] = &l_54[0];
                    (*l_52) &= ((0x39258C68L > ((safe_mod_func_int8_t_s_s(0x7EL, (**g_250))) , ((safe_sub_func_int8_t_s_s(0L, ((((((++(*l_87)) == (l_331 = ((((l_350 = l_349[1][1]) , (*g_163)) && (((((((((!(0xFDL > g_247)) , p_36) , l_352) , 0x93F0E83303B9F7BDLL) ^ 0x5E980E34BD4938FELL) , p_36) | 0x9C460402DF225DDFLL) , (void*)0) == (void*)0)) < (**g_250)))) >= 1L) && (*g_251)) != (*g_251)) ^ p_36))) , p_36))) != 2UL);
                    (*g_67) = (void*)0;
                    if (l_117)
                        goto lbl_357;
                    (*l_353) = (void*)0;
lbl_357:
                    l_356 = ((*g_67) = &l_56);
                    (*l_358) = g_287[0].f0;
                }
                else
                { 
                    if (l_352.f2)
                        goto lbl_146;
                }
            }
            else
            { 
                uint32_t l_361[1];
                struct S1 ***l_364[3][3][7] = {{{&g_362,&g_362,&g_362,&g_362,&g_362,&g_362,&g_362},{&g_362,&g_362,&g_362,&g_362,&g_362,&g_362,&g_362},{&g_362,&g_362,&g_362,&g_362,&g_362,&g_362,&g_362}},{{(void*)0,(void*)0,&g_362,&g_362,&g_362,&g_362,&g_362},{&g_362,&g_362,&g_362,&g_362,&g_362,&g_362,&g_362},{&g_362,(void*)0,&g_362,&g_362,&g_362,&g_362,(void*)0}},{{&g_362,&g_362,&g_362,&g_362,&g_362,&g_362,&g_362},{&g_362,&g_362,&g_362,&g_362,(void*)0,&g_362,&g_362},{&g_362,&g_362,&g_362,&g_362,&g_362,&g_362,&g_362}}};
                const struct S1 ***l_367 = &l_365;
                int8_t *l_371 = &g_240;
                int32_t l_394[2][5] = {{6L,6L,6L,6L,6L},{3L,3L,3L,3L,3L}};
                struct S0 *l_403 = &g_287[0].f1;
                int i, j, k;
                for (i = 0; i < 1; i++)
                    l_361[i] = 18446744073709551615UL;
                (*l_53) ^= 0x9092F00DL;
                if (((((((*g_274) = (safe_lshift_func_int8_t_s_s(g_47.f4, ((*l_371) = (((((g_362 = (l_361[0] , g_362)) == ((*l_367) = (p_36 , l_365))) || ((*p_38) = (safe_mul_func_uint16_t_u_u((!p_36), (((void*)0 != &l_101) != (*g_251)))))) == p_36) == p_36))))) == l_372) | l_373) != p_36) | p_36))
                { 
                    uint8_t l_381 = 254UL;
                    int8_t *l_392 = &g_393[0][0];
                    l_394[0][4] = (safe_rshift_func_uint8_t_u_s(0xB0L, ((safe_mul_func_uint16_t_u_u((safe_sub_func_uint64_t_u_u(0xDE7CE8A9AF49738BLL, ((*l_87) = l_380[4]))), (l_381 , ((safe_add_func_uint64_t_u_u((safe_unary_minus_func_int8_t_s(((((safe_sub_func_int16_t_s_s(((safe_div_func_int8_t_s_s((l_361[0] & (safe_lshift_func_int8_t_s_s(((*l_392) |= ((*p_38) != ((*l_371) ^= ((l_391[3][0] == &l_54[0]) | l_381)))), g_320))), 8L)) == g_46), g_196[2])) , p_36) & p_36) , (*p_38)))), p_36)) || p_36)))) && (*g_251))));
                    --l_396;
                    (*l_356) = p_36;
                }
                else
                { 
                    int16_t ****l_401[3][5][1] = {{{&l_399},{(void*)0},{&l_399},{&l_399},{(void*)0}},{{&l_399},{&l_399},{(void*)0},{&l_399},{&l_399}},{{(void*)0},{&l_399},{&l_399},{(void*)0},{&l_399}}};
                    int i, j, k;
                    l_402 = l_399;
                }
                (*l_403) = g_284.f0;
            }
            for (l_145 = 0; (l_145 != 21); l_145 = safe_add_func_int8_t_s_s(l_145, 3))
            { 
                struct S0 *l_417 = &l_66;
                if (((((void*)0 != &g_286) && (((safe_unary_minus_func_int8_t_s(0xC8L)) & (l_407 , p_36)) , (&l_56 != (*g_67)))) ^ (*g_251)))
                { 
                    uint32_t ****l_409[7];
                    int i;
                    for (i = 0; i < 7; i++)
                        l_409[i] = (void*)0;
                    (*l_53) |= g_47.f6;
                    g_410[1] = l_408;
                    if ((*l_356))
                        break;
                }
                else
                { 
                    uint32_t l_411 = 0x46075F68L;
                    l_411--;
                    (*g_67) = l_414;
                }
                g_415 = &g_319;
                (*l_417) = l_416[1];
            }
            (*l_356) |= 0x7D146537L;
            for (g_194 = (-5); (g_194 != 0); g_194++)
            { 
                (*l_53) = 0x6D4F9E9EL;
                if ((safe_div_func_int16_t_s_s((((safe_sub_func_uint32_t_u_u(((*l_52) = (((!p_36) != (safe_sub_func_uint32_t_u_u(((p_36 && (safe_add_func_int32_t_s_s((((3L == ((9L ^ ((&g_251 == (void*)0) | ((**g_362) , 1UL))) || p_36)) > (-7L)) , p_36), 0xCD50D945L))) == (*p_38)), p_36))) & 0xA7L)), p_36)) , (**g_250)) > (*g_251)), (**g_273))))
                { 
                    const uint64_t *l_430 = &g_431[1];
                    const uint64_t **l_429[3];
                    int i;
                    for (i = 0; i < 3; i++)
                        l_429[i] = &l_430;
                    (*l_365) = (*g_362);
                    l_94 = (void*)0;
                    (*l_356) = (0x8BDAEAC2B9D95947LL < (((&g_243 == (l_432 = &l_88[1][6][0])) , (*g_67)) != (*g_67)));
                    return p_36;
                }
                else
                { 
                    uint32_t l_434 = 0x0F00340AL;
                    return l_434;
                }
            }
        }
        l_282 = l_282;
        --g_439;
    }
    else
    { 
        const uint16_t l_449 = 1UL;
        int32_t l_462 = 0x3D8EA6DCL;
        uint64_t *l_494[3];
        int16_t **l_505 = &g_456;
        struct S0 l_510 = {4UL};
        int i;
        for (i = 0; i < 3; i++)
            l_494[i] = &l_70.f5;
        for (l_373 = 5; (l_373 >= 1); l_373 -= 1)
        { 
            uint16_t l_443 = 0x29C4L;
            uint32_t l_460 = 0x237E602FL;
            int32_t l_461 = (-1L);
            struct S1 ***l_480[5] = {&g_362,&g_362,&g_362,&g_362,&g_362};
            uint32_t ** const l_484 = &g_231[0][1][0];
            int i;
        }
    }
    for (g_47.f1 = 0; (g_47.f1 >= 11); g_47.f1 = safe_add_func_uint32_t_u_u(g_47.f1, 9))
    { 
        return (*l_53);
    }
    (*g_67) = &l_56;
    return p_36;
}



static int8_t * func_39(uint32_t  p_40, int8_t  p_41, uint8_t  p_42, int64_t  p_43, const uint16_t  p_44)
{ 
    uint32_t l_49 = 0xB19F88DDL;
    int32_t *l_50 = &g_2;
    int32_t *l_51 = &g_2;
    (*l_50) |= l_49;
    l_51 = (void*)0;
    return &g_46;
}



static int32_t  func_60(int32_t ** p_61, const int8_t * p_62, int32_t ** p_63, uint16_t  p_64, struct S1  p_65)
{ 
    int32_t l_75 = 0x4CB18241L;
    for (p_65.f5 = (-1); (p_65.f5 != 19); p_65.f5++)
    { 
        int32_t *l_73[2];
        int i;
        for (i = 0; i < 2; i++)
            l_73[i] = (void*)0;
        g_77--;
    }
    return l_75;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_8, "g_8", print_hash_value);
    transparent_crc(g_46, "g_46", print_hash_value);
    transparent_crc(g_47.f0, "g_47.f0", print_hash_value);
    transparent_crc(g_47.f1, "g_47.f1", print_hash_value);
    transparent_crc(g_47.f2, "g_47.f2", print_hash_value);
    transparent_crc(g_47.f3, "g_47.f3", print_hash_value);
    transparent_crc(g_47.f4, "g_47.f4", print_hash_value);
    transparent_crc(g_47.f5, "g_47.f5", print_hash_value);
    transparent_crc(g_47.f6, "g_47.f6", print_hash_value);
    transparent_crc(g_55, "g_55", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_57[i], "g_57[i]", print_hash_value);

    }
    transparent_crc(g_74, "g_74", print_hash_value);
    transparent_crc(g_76, "g_76", print_hash_value);
    transparent_crc(g_77, "g_77", print_hash_value);
    transparent_crc(g_107.f0, "g_107.f0", print_hash_value);
    transparent_crc(g_194, "g_194", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_196[i], "g_196[i]", print_hash_value);

    }
    transparent_crc(g_240, "g_240", print_hash_value);
    transparent_crc(g_242, "g_242", print_hash_value);
    transparent_crc(g_243, "g_243", print_hash_value);
    transparent_crc(g_246, "g_246", print_hash_value);
    transparent_crc(g_247, "g_247", print_hash_value);
    transparent_crc(g_284.f0.f0, "g_284.f0.f0", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_287[i].f0.f0, "g_287[i].f0.f0", print_hash_value);

    }
    transparent_crc(g_320, "g_320", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_393[i][j], "g_393[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_395, "g_395", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_431[i], "g_431[i]", print_hash_value);

    }
    transparent_crc(g_433, "g_433", print_hash_value);
    transparent_crc(g_439, "g_439", print_hash_value);
    transparent_crc(g_483, "g_483", print_hash_value);
    transparent_crc(g_597, "g_597", print_hash_value);
    transparent_crc(g_654, "g_654", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_671[i], "g_671[i]", print_hash_value);

    }
    transparent_crc(g_744, "g_744", print_hash_value);
    transparent_crc(g_745, "g_745", print_hash_value);
    transparent_crc(g_747, "g_747", print_hash_value);
    transparent_crc(g_748, "g_748", print_hash_value);
    transparent_crc(g_749, "g_749", print_hash_value);
    transparent_crc(g_750, "g_750", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_751[i], "g_751[i]", print_hash_value);

    }
    transparent_crc(g_757, "g_757", print_hash_value);
    transparent_crc(g_758, "g_758", print_hash_value);
    transparent_crc(g_797, "g_797", print_hash_value);
    transparent_crc(g_815, "g_815", print_hash_value);
    transparent_crc(g_824, "g_824", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_834[i], "g_834[i]", print_hash_value);

    }
    transparent_crc(g_835, "g_835", print_hash_value);
    transparent_crc(g_836, "g_836", print_hash_value);
    transparent_crc(g_871, "g_871", print_hash_value);
    transparent_crc(g_872, "g_872", print_hash_value);
    transparent_crc(g_927, "g_927", print_hash_value);
    transparent_crc(g_986, "g_986", print_hash_value);
    transparent_crc(g_991, "g_991", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_1023[i][j], "g_1023[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_1024, "g_1024", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_1051[i][j][k], "g_1051[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_1075, "g_1075", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_1076[i], "g_1076[i]", print_hash_value);

    }
    transparent_crc(g_1104, "g_1104", print_hash_value);
    transparent_crc(g_1196.f0.f0, "g_1196.f0.f0", print_hash_value);
    transparent_crc(g_1306, "g_1306", print_hash_value);
    transparent_crc(g_1406.f0, "g_1406.f0", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_1488[i], "g_1488[i]", print_hash_value);

    }
    transparent_crc(g_1509, "g_1509", print_hash_value);
    transparent_crc(g_1618, "g_1618", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_1645[i], "g_1645[i]", print_hash_value);

    }
    transparent_crc(g_1697, "g_1697", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
