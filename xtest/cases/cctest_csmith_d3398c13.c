// SPDX-License-Identifier: MIT
// cctest_csmith_d3398c13.c --- cctest case csmith_d3398c13 (csmith seed 3543763987)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x1bfb0435 */

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

// Options:   -s 3543763987 -o /tmp/csmith_gen_lsy0a47v/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S2 {
   int64_t  f0;
};

#pragma pack(push)
#pragma pack(1)
struct S3 {
   const uint32_t  f0;
   uint8_t  f1;
};
#pragma pack(pop)

union U4 {
   uint8_t  f0;
   uint32_t  f1;
};


static int32_t g_2 = (-2L);
static uint8_t g_11 = 0x14L;
static uint16_t g_43 = 0xC0F9L;
static int16_t g_52 = 9L;
static int64_t g_67 = 0x64E9414028B0229BLL;
static int32_t g_77[2] = {0L,0L};
static int16_t g_78 = 0xA0A5L;
static int32_t g_99 = (-9L);
static uint32_t g_100 = 0xD69965F2L;
static uint8_t g_128 = 0xC8L;
static uint32_t g_176 = 0xDA70A41DL;
static struct S2 g_211 = {0xED4AB7E17490E7B9LL};
static struct S3 g_212 = {0xC30123A9L,0x0BL};
static uint16_t g_221 = 0x9907L;
static int32_t g_245 = 1L;
static int64_t g_258 = 0L;
static uint8_t g_261 = 255UL;



static const int64_t  func_1(void);
static const uint16_t  func_5(int64_t  p_6, int64_t  p_7, const uint16_t  p_8, int32_t  p_9);
static uint64_t  func_18(int32_t  p_19, const int32_t  p_20);
static uint16_t  func_25(uint64_t  p_26, const int32_t  p_27, int32_t  p_28, int32_t  p_29);




static const int64_t  func_1(void)
{ 
    uint32_t l_14 = 3UL;
    int32_t l_17 = 0L;
    int32_t l_36 = 3L;
    int16_t l_262 = 0xBA93L;
    for (g_2 = 0; (g_2 >= (-22)); g_2 = safe_sub_func_uint64_t_u_u(g_2, 6))
    { 
        int32_t l_10[3][2][1];
        int32_t l_53 = 0x93DFE8E2L;
        const uint32_t l_105[4][2] = {{0xD9701DEEL,0x60FE7B97L},{0xD9701DEEL,0xD9701DEEL},{0x60FE7B97L,0xD9701DEEL},{0xD9701DEEL,0x60FE7B97L}};
        int i, j, k;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 2; j++)
            {
                for (k = 0; k < 1; k++)
                    l_10[i][j][k] = 1L;
            }
        }
        if ((func_5((g_11 = l_10[2][1][0]), ((l_17 = ((safe_mod_func_int32_t_s_s((-3L), (--l_14))) , 0xC92EA21E1D82C32BLL)) | func_18(((((safe_mod_func_uint16_t_u_u((safe_mul_func_int8_t_s_s(((l_53 = func_25((safe_sub_func_int64_t_s_s(((((+((((~((safe_mod_func_uint32_t_u_u(0x607800FFL, l_36)) , 0xA9L)) > l_36) == g_2) , l_36)) & l_36) < g_2) < g_2), 0xE17716E311378331LL)), l_10[2][0][0], g_2, l_10[2][1][0])) & l_36), 0x0CL)), 0x1177L)) , l_36) >= l_36) != 0x16D6L), g_2)), l_105[0][0], g_2) | l_36))
        { 
            uint32_t l_222 = 0x17529D58L;
            int32_t l_251[2][1];
            int16_t l_252[4] = {0xEE7DL,0xEE7DL,0xEE7DL,0xEE7DL};
            int i, j;
            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 1; j++)
                    l_251[i][j] = (-3L);
            }
            l_222 = (g_212 , ((((safe_lshift_func_uint16_t_u_s(((safe_rshift_func_uint16_t_u_u(l_105[3][1], 13)) < ((((safe_lshift_func_uint8_t_u_s(247UL, (safe_rshift_func_int8_t_s_u((g_211 , 0xA9L), 0)))) != l_17) > g_67) & g_221)), l_36)) ^ 0x8A36L) < 255UL) & g_77[0]));
            for (g_128 = 0; (g_128 >= 48); g_128 = safe_add_func_uint16_t_u_u(g_128, 3))
            { 
                uint16_t l_246 = 0x00BCL;
                int32_t l_253 = 1L;
                l_17 |= (safe_div_func_uint64_t_u_u((safe_mul_func_uint8_t_u_u((((~(safe_lshift_func_uint8_t_u_s((((((safe_unary_minus_func_int8_t_s(g_77[1])) | ((safe_lshift_func_uint8_t_u_u(((safe_sub_func_int8_t_s_s((safe_div_func_int16_t_s_s(((safe_lshift_func_uint16_t_u_u(((g_67 |= g_100) ^ ((safe_rshift_func_uint8_t_u_u(l_222, (safe_mod_func_uint64_t_u_u((--l_246), (l_53 ^= (safe_mul_func_int8_t_s_s((0x3EL && g_211.f0), (-1L)))))))) > l_36)), g_212.f0)) ^ l_14), 0x3723L)), l_10[2][1][0])) || l_246), g_212.f1)) == l_251[1][0])) >= g_100) >= 0x6A51E36D968C18A0LL) && g_128), 4))) <= l_14) ^ l_252[1]), 0x9AL)), l_253));
                g_77[0] |= l_222;
                l_36 = ((safe_mod_func_int16_t_s_s(g_99, (safe_rshift_func_int16_t_s_s((4L | g_11), g_258)))) & l_36);
            }
            for (l_17 = 26; (l_17 != (-10)); l_17 = safe_sub_func_int64_t_s_s(l_17, 6))
            { 
                int8_t l_266[4][4][3] = {{{4L,9L,0x41L},{(-8L),0xDBL,(-8L)},{(-1L),(-1L),0x73L},{0L,(-1L),0L}},{{9L,0xDBL,5L},{0xD4L,9L,9L},{9L,1L,4L},{0L,0x41L,4L}},{{(-1L),4L,9L},{(-8L),0L,5L},{4L,4L,0xDBL},{(-1L),9L,5L}},{{(-1L),0x73L,0x41L},{0L,0xD4L,9L},{0x41L,(-1L),0x41L},{(-1L),1L,5L}}};
                int i, j, k;
                g_77[0] &= ((l_262 &= (g_261 = l_251[1][0])) | 0UL);
                g_77[0] = g_43;
                l_266[2][0][0] ^= (safe_div_func_int8_t_s_s((!0x7CL), g_67));
            }
        }
        else
        { 
            const int16_t l_267 = 4L;
            return l_267;
        }
    }
    for (g_221 = 3; (g_221 != 15); ++g_221)
    { 
        uint8_t l_270 = 0x7FL;
        l_17 &= (g_43 > (g_52 | l_270));
    }
    return g_67;
}



static const uint16_t  func_5(int64_t  p_6, int64_t  p_7, const uint16_t  p_8, int32_t  p_9)
{ 
    uint8_t l_106[2][4][4];
    int32_t l_126[4];
    uint32_t l_139 = 0xA5C3DAF8L;
    uint64_t l_158 = 0UL;
    int32_t l_181 = (-1L);
    int32_t l_210[2];
    int i, j, k;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 4; k++)
                l_106[i][j][k] = 0x42L;
        }
    }
    for (i = 0; i < 4; i++)
        l_126[i] = (-1L);
    for (i = 0; i < 2; i++)
        l_210[i] = 0xB6FD115CL;
    if (l_106[1][0][2])
    { 
        int32_t l_125 = 0x74A80601L;
        int32_t l_127[1][1][4] = {{{0x49B8DC11L,0x49B8DC11L,0x49B8DC11L,0x49B8DC11L}}};
        int i, j, k;
        l_125 |= (safe_sub_func_uint16_t_u_u((((((g_67 != g_99) , (safe_lshift_func_int16_t_s_u((safe_add_func_uint32_t_u_u((safe_mod_func_uint16_t_u_u((safe_add_func_int16_t_s_s(((safe_sub_func_uint8_t_u_u((g_11--), (((safe_add_func_int16_t_s_s((p_9 < ((safe_mul_func_uint8_t_u_u(g_77[0], g_43)) && p_7)), p_7)) > g_43) || l_106[1][1][0]))) && 0xE3AA948860579173LL), p_9)), g_77[1])), 0x42676EBEL)), g_77[0]))) <= g_78) ^ g_67) > g_67), g_43));
        g_128++;
    }
    else
    { 
        union U4 l_152[4][2] = {{{0x62L},{0x62L}},{{0x62L},{0x62L}},{{0x62L},{0x62L}},{{0x62L},{0x62L}}};
        int32_t l_155[1];
        int32_t l_166[3][5][4] = {{{0xA860806CL,0xA860806CL,0xC26B4E49L,0x81529419L},{0xCD6EFC41L,0x90506A2FL,0xCD6EFC41L,0xC26B4E49L},{0xCD6EFC41L,0xC26B4E49L,0xC26B4E49L,0xCD6EFC41L},{0xA860806CL,0xC26B4E49L,0x81529419L,0xC26B4E49L},{0xC26B4E49L,0x90506A2FL,0x81529419L,0x81529419L}},{{0xA860806CL,0xA860806CL,0xC26B4E49L,0x81529419L},{0xCD6EFC41L,0x90506A2FL,0xCD6EFC41L,0xC26B4E49L},{0xCD6EFC41L,0xC26B4E49L,0xC26B4E49L,0xCD6EFC41L},{0xA860806CL,0xC26B4E49L,0x81529419L,0xC26B4E49L},{0xC26B4E49L,0x90506A2FL,0x81529419L,0x81529419L}},{{0xA860806CL,0xA860806CL,0xC26B4E49L,0x81529419L},{0xCD6EFC41L,0x90506A2FL,0xCD6EFC41L,0xC26B4E49L},{0xCD6EFC41L,0xC26B4E49L,0xC26B4E49L,0xCD6EFC41L},{0xA860806CL,0xC26B4E49L,0x81529419L,0xC26B4E49L},{0xC26B4E49L,0x90506A2FL,0x81529419L,0x81529419L}}};
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_155[i] = 0x7F73882FL;
        if ((((((((safe_sub_func_int16_t_s_s((safe_rshift_func_int16_t_s_s(g_77[0], (safe_rshift_func_uint8_t_u_u((safe_mod_func_int8_t_s_s(l_106[1][0][2], g_2)), 2)))), (g_128 || g_43))) & g_43) <= l_139) || 9L) | g_52) | 0x55FAF6E0L) >= 0x4235L))
        { 
            l_126[1] = ((safe_lshift_func_int8_t_s_u((((g_100 <= (safe_unary_minus_func_int16_t_s(((safe_add_func_uint64_t_u_u(p_9, l_106[1][0][2])) , (safe_rshift_func_uint16_t_u_s((safe_mul_func_int16_t_s_s((safe_add_func_uint16_t_u_u(((~(((l_152[3][1] , g_77[1]) , l_152[3][1].f0) ^ g_43)) ^ 0x5669B834A4F5E2A8LL), p_6)), l_139)), 1)))))) & 1L) & 1UL), 1)) | 0x4BBB47CEL);
        }
        else
        { 
            l_155[0] |= (safe_lshift_func_int16_t_s_u(5L, 3));
            g_77[1] = g_77[0];
        }
        if (p_6)
        { 
            uint32_t l_182 = 0x7E325ED2L;
            int32_t l_183 = 0x7AE31396L;
            l_126[1] = (g_77[0] = ((l_155[0] | ((l_166[2][2][2] |= (safe_rshift_func_uint8_t_u_u((l_158 ^ (safe_div_func_uint64_t_u_u(l_152[3][1].f0, ((safe_mod_func_int8_t_s_s(((safe_unary_minus_func_int32_t_s((safe_sub_func_uint16_t_u_u((((g_99 = ((0xC186D855L <= l_152[3][1].f0) <= 65535UL)) , 4294967289UL) <= (-9L)), 0L)))) >= (-5L)), g_77[0])) , p_8)))), g_52))) & g_67)) ^ 0x4F879874L));
            for (g_11 = 9; (g_11 >= 50); g_11++)
            { 
                int16_t l_173 = 0x304EL;
                l_183 = (safe_lshift_func_uint16_t_u_s((((l_182 = ((safe_sub_func_int64_t_s_s(l_173, ((safe_add_func_int64_t_s_s(g_176, (safe_add_func_uint8_t_u_u((safe_unary_minus_func_int8_t_s((+l_158))), l_173)))) && l_166[2][4][1]))) , l_181)) || g_2) < 18446744073709551615UL), g_78));
                return g_176;
            }
        }
        else
        { 
            int64_t l_196[3];
            int32_t l_197 = 0xBF0A7C6EL;
            int i;
            for (i = 0; i < 3; i++)
                l_196[i] = 0x29629171A507D193LL;
            for (g_67 = 0; (g_67 <= 1); g_67 += 1)
            { 
                int i;
                g_77[g_67] = (safe_lshift_func_int8_t_s_u(g_77[g_67], 1));
                g_77[g_67] = 0xD683B573L;
                l_197 &= (g_77[g_67] = (safe_mul_func_uint8_t_u_u((((safe_add_func_int64_t_s_s(g_77[g_67], (((safe_rshift_func_int16_t_s_s(3L, ((safe_add_func_int16_t_s_s((safe_div_func_uint32_t_u_u((((l_196[0] | p_8) == g_43) , l_139), p_6)), (-1L))) & g_77[g_67]))) > (-4L)) | g_52))) != g_99) <= p_7), p_7)));
            }
            for (g_128 = 0; (g_128 <= 1); g_128 += 1)
            { 
                uint32_t l_208 = 0x76628C78L;
                l_210[0] = (safe_add_func_int8_t_s_s((l_166[1][0][1] = 7L), ((l_208 &= (safe_lshift_func_int16_t_s_s((l_126[1] ^= (+(safe_lshift_func_int8_t_s_u((+(++g_11)), 0)))), 6))) < (~1UL))));
            }
            g_211 = g_211;
        }
    }
    g_77[0] &= g_176;
    l_126[1] |= g_2;
    return g_2;
}



static uint64_t  func_18(int32_t  p_19, const int32_t  p_20)
{ 
    int16_t l_72 = 1L;
    const uint8_t l_73 = 8UL;
    uint16_t l_74 = 0x2EE3L;
    int32_t l_75 = (-1L);
    int32_t l_76 = 0L;
    union U4 l_81[5][3][2] = {{{{251UL},{0UL}},{{255UL},{255UL}},{{255UL},{0UL}}},{{{251UL},{0x0EL}},{{0UL},{255UL}},{{0x87L},{255UL}}},{{{0x0EL},{0xC0L}},{{0xC0L},{0xC0L}},{{0x0EL},{255UL}}},{{{0x87L},{255UL}},{{0UL},{0x0EL}},{{251UL},{0UL}}},{{{255UL},{255UL}},{{255UL},{0UL}},{{251UL},{0x0EL}}}};
    int i, j, k;
    g_78 ^= (0xE34EF9DEAB2DD2C9LL != ((g_77[0] = (p_19 == (((~(((safe_rshift_func_uint8_t_u_u((safe_mul_func_int8_t_s_s(((safe_lshift_func_int16_t_s_s((g_52 = (l_76 |= ((((l_75 = (safe_mul_func_int8_t_s_s((l_74 = (safe_lshift_func_uint8_t_u_u((safe_add_func_uint64_t_u_u((g_67 |= p_20), (((safe_div_func_uint32_t_u_u((safe_mod_func_uint64_t_u_u(5UL, 0x28C20713981DC8A0LL)), l_72)) , l_73) || 0x03L))), p_19))), 6L))) , p_20) ^ g_2) | g_43))), 12)) && 0xA3L), 1UL)), 2)) >= l_73) >= g_43)) > p_20) == l_72))) | l_72));
    g_77[1] |= (((l_75 | l_76) <= (g_52 = (((-1L) ^ (l_81[1][1][1] , l_74)) == p_19))) , g_78);
    for (g_43 = 0; (g_43 <= 1); g_43 += 1)
    { 
        int32_t l_103 = 0x0D6AF106L;
        int i;
        if (g_77[g_43])
            break;
        for (g_78 = 0; (g_78 > (-30)); g_78 = safe_sub_func_int64_t_s_s(g_78, 3))
        { 
            union U4 l_88 = {3UL};
            int32_t l_101 = 0L;
            int8_t l_102 = 3L;
            uint32_t l_104 = 0x0ECC8E5CL;
            if ((safe_sub_func_uint16_t_u_u(p_19, (safe_mod_func_uint8_t_u_u((((l_88 , ((safe_mul_func_uint16_t_u_u((safe_sub_func_int8_t_s_s((g_100 = (g_99 = (((safe_lshift_func_uint8_t_u_s(((g_77[g_43] = p_20) || ((safe_sub_func_int16_t_s_s((safe_mul_func_uint8_t_u_u(1UL, 0x68L)), l_81[1][1][1].f0)) < p_19)), l_88.f0)) , 0x71L) && p_19))), l_101)), 0xAC0DL)) || l_102)) > (-1L)) > l_103), 248UL)))))
            { 
                return l_104;
            }
            else
            { 
                return p_19;
            }
        }
    }
    return g_43;
}



static uint16_t  func_25(uint64_t  p_26, const int32_t  p_27, int32_t  p_28, int32_t  p_29)
{ 
    struct S2 l_39 = {8L};
    int32_t l_51 = 0xAF02C199L;
    for (p_28 = 0; (p_28 == 24); ++p_28)
    { 
        int8_t l_49 = 0xCDL;
        int32_t l_50 = 0L;
        g_52 = (l_39 , (l_51 &= (!(safe_sub_func_int32_t_s_s((g_2 > (g_43 = 1L)), (l_50 = (+((((safe_lshift_func_int16_t_s_s(((-1L) == 0xEBL), p_26)) || l_49) < 1L) != 0L))))))));
    }
    return p_26;
}





int test_main(void)
{
    int i;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_11, "g_11", print_hash_value);
    transparent_crc(g_43, "g_43", print_hash_value);
    transparent_crc(g_52, "g_52", print_hash_value);
    transparent_crc(g_67, "g_67", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_77[i], "g_77[i]", print_hash_value);

    }
    transparent_crc(g_78, "g_78", print_hash_value);
    transparent_crc(g_99, "g_99", print_hash_value);
    transparent_crc(g_100, "g_100", print_hash_value);
    transparent_crc(g_128, "g_128", print_hash_value);
    transparent_crc(g_176, "g_176", print_hash_value);
    transparent_crc(g_211.f0, "g_211.f0", print_hash_value);
    transparent_crc(g_212.f0, "g_212.f0", print_hash_value);
    transparent_crc(g_212.f1, "g_212.f1", print_hash_value);
    transparent_crc(g_221, "g_221", print_hash_value);
    transparent_crc(g_245, "g_245", print_hash_value);
    transparent_crc(g_258, "g_258", print_hash_value);
    transparent_crc(g_261, "g_261", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
