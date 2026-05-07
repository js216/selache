// SPDX-License-Identifier: MIT
// cctest_csmith_e6e3ae39.c --- cctest case csmith_e6e3ae39 (csmith seed 3873680953)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xf3de0efb */

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

// Options:   -s 3873680953 -o /tmp/csmith_gen_q9opucgm/csmith.c --concise --no-volatiles --no-volatile-pointers --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   int8_t  f0;
   uint64_t  f1;
};
#pragma pack(pop)

union U1 {
   struct S0  f0;
   int32_t  f1;
   unsigned f2 : 9;
};


static int32_t g_2 = (-10L);
static int32_t g_49 = 0x9BAAA4F6L;
static int32_t g_53 = (-1L);
static int32_t g_57 = (-6L);
static uint64_t g_71 = 9UL;
static int32_t *g_83 = &g_49;
static int32_t **g_82 = &g_83;
static int64_t g_99 = 0xB8798E375BC53ECDLL;
static uint16_t g_101 = 0x3A40L;
static int64_t g_103 = 0x57B2633072FE88D3LL;
static int32_t g_107 = 0xFC0A9984L;
static union U1 g_112 = {{0x2CL,18446744073709551609UL}};
static const uint64_t g_119 = 0UL;
static const uint64_t *g_118 = &g_119;
static uint32_t g_161 = 4294967295UL;
static uint32_t g_164[5] = {18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL};
static uint8_t g_175[5][7] = {{0xD3L,4UL,5UL,5UL,4UL,0xD3L,0xB0L},{0xD3L,4UL,5UL,5UL,4UL,0xD3L,0xB0L},{0xD3L,4UL,5UL,5UL,4UL,0xD3L,0xB0L},{0xD3L,4UL,5UL,5UL,4UL,0xD3L,0xB0L},{0xD3L,4UL,5UL,5UL,4UL,0xD3L,0xB0L}};
static int16_t g_193[6] = {7L,7L,7L,7L,7L,7L};
static int16_t g_195 = (-4L);
static int16_t g_198 = 6L;
static struct S0 *g_240 = &g_112.f0;
static uint8_t g_298 = 0xCAL;
static int8_t g_349 = 0xA6L;
static uint64_t g_358 = 1UL;
static struct S0 g_365 = {0xCFL,18446744073709551615UL};
static uint32_t g_378 = 0xCC771989L;
static uint64_t *g_379 = &g_112.f0.f1;
static int32_t * const *g_407 = &g_83;
static int32_t * const **g_406 = &g_407;
static int32_t * const ***g_405 = &g_406;
static uint64_t g_461 = 9UL;
static int16_t g_526[3] = {0x6F1DL,0x6F1DL,0x6F1DL};
static int64_t g_530 = 0xD9C75B2FF600C9B7LL;
static uint8_t g_531 = 255UL;
static uint32_t g_565 = 0xD69E251FL;
static int32_t g_570[3][4][5] = {{{1L,(-1L),1L,(-1L),1L},{1L,1L,1L,1L,1L},{1L,(-1L),1L,(-1L),1L},{1L,1L,1L,1L,1L}},{{1L,(-1L),1L,(-1L),1L},{1L,1L,1L,1L,1L},{1L,(-1L),1L,(-1L),1L},{1L,1L,1L,1L,1L}},{{1L,(-1L),1L,(-1L),1L},{1L,1L,1L,1L,1L},{1L,(-1L),1L,(-1L),1L},{1L,1L,1L,1L,1L}}};
static int64_t g_571[6] = {0x44FFA04D5B03EED8LL,0x44FFA04D5B03EED8LL,0x1418A09570DAFADDLL,0x44FFA04D5B03EED8LL,0x44FFA04D5B03EED8LL,0x1418A09570DAFADDLL};
static uint32_t g_575 = 0x64FF5EB4L;
static uint16_t g_581[4] = {2UL,2UL,2UL,2UL};
static const int32_t g_594 = 0x917BDC2AL;
static const struct S0 g_602 = {0x0FL,18446744073709551615UL};
static const int32_t *g_610 = &g_57;
static const int32_t **g_609[1][6] = {{&g_610,&g_610,&g_610,&g_610,&g_610,&g_610}};
static const int32_t ***g_608[6][4] = {{&g_609[0][5],&g_609[0][5],&g_609[0][5],&g_609[0][5]},{&g_609[0][5],&g_609[0][5],&g_609[0][5],&g_609[0][5]},{&g_609[0][5],&g_609[0][5],&g_609[0][5],&g_609[0][5]},{&g_609[0][5],&g_609[0][5],&g_609[0][5],&g_609[0][5]},{&g_609[0][5],&g_609[0][5],&g_609[0][5],&g_609[0][5]},{&g_609[0][5],&g_609[0][5],&g_609[0][5],&g_609[0][5]}};
static uint16_t *g_618 = &g_101;
static uint16_t **g_617 = &g_618;
static int32_t g_635 = 1L;
static int8_t g_636[6] = {(-1L),0L,0L,(-1L),0L,0L};
static uint8_t *g_640 = (void*)0;
static uint8_t **g_639[2][2] = {{&g_640,&g_640},{&g_640,&g_640}};
static int32_t g_683 = 0x1DF34194L;
static uint16_t g_684[7][4] = {{0xD598L,0x2E94L,0x2E94L,0xD598L},{65530UL,65535UL,65531UL,0UL},{0xA94FL,7UL,0UL,1UL},{0UL,1UL,0xB4ECL,1UL},{0x2E94L,7UL,65530UL,0UL},{0xB290L,65535UL,1UL,0xD598L},{65530UL,0x2E94L,1UL,1UL}};
static int64_t g_706 = 0x69269A1C0234B0EDLL;
static union U1 **g_742 = (void*)0;
static union U1 ***g_741 = &g_742;
static union U1 ****g_740 = &g_741;
static uint8_t ***g_748 = &g_639[0][0];
static uint8_t ****g_747 = &g_748;
static int32_t *g_770 = &g_53;
static uint64_t **g_821 = &g_379;
static uint64_t ***g_820 = &g_821;
static int32_t g_838 = 1L;
static int32_t g_841[3] = {0x681FEE16L,0x681FEE16L,0x681FEE16L};
static uint32_t g_842[7] = {1UL,1UL,1UL,1UL,1UL,1UL,1UL};
static union U1 *****g_869[7] = {&g_740,&g_740,&g_740,&g_740,&g_740,&g_740,&g_740};
static int16_t g_887 = 0x4F8DL;
static int32_t g_889 = 0L;
static uint64_t g_890 = 18446744073709551610UL;
static uint32_t g_914 = 0UL;
static uint32_t g_942 = 0x8DB4ABD0L;
static int32_t g_1021 = 0xC9475B52L;
static int32_t * const g_1020 = &g_1021;
static int32_t * const *g_1019 = &g_1020;
static int32_t * const *g_1022[3][6] = {{&g_1020,&g_1020,(void*)0,(void*)0,(void*)0,&g_1020},{(void*)0,&g_1020,(void*)0,(void*)0,&g_1020,(void*)0},{&g_1020,(void*)0,(void*)0,(void*)0,&g_1020,&g_1020}};
static int32_t * const *g_1023 = &g_1020;
static int32_t * const *g_1024 = &g_1020;
static int32_t * const *g_1025 = &g_1020;
static int32_t * const *g_1026 = &g_1020;
static int32_t * const *g_1027 = &g_1020;
static int32_t * const *g_1028 = &g_1020;
static int32_t * const *g_1029[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
static int32_t * const *g_1030 = &g_1020;
static int32_t * const *g_1031 = &g_1020;
static int32_t * const *g_1032 = &g_1020;
static int32_t * const *g_1033 = &g_1020;
static int32_t * const *g_1034 = (void*)0;
static int32_t * const *g_1035 = (void*)0;
static int32_t * const *g_1036 = &g_1020;
static int32_t * const ** const g_1018[6][3][2] = {{{&g_1023,&g_1023},{&g_1030,&g_1023},{&g_1023,&g_1025}},{{&g_1034,&g_1029[1]},{&g_1030,&g_1034},{&g_1029[1],&g_1032}},{{&g_1036,&g_1025},{&g_1019,&g_1036},{&g_1025,&g_1032}},{{&g_1030,&g_1030},{&g_1019,&g_1030},{&g_1030,&g_1032}},{{&g_1025,&g_1036},{&g_1019,&g_1025},{&g_1036,&g_1032}},{{&g_1036,&g_1025},{&g_1019,&g_1036},{&g_1025,&g_1032}}};
static int32_t * const ** const *g_1017 = &g_1018[1][0][0];
static int32_t * const ** const **g_1016 = &g_1017;
static uint8_t ****g_1039[5][4] = {{&g_748,&g_748,&g_748,&g_748},{&g_748,&g_748,&g_748,&g_748},{&g_748,&g_748,&g_748,&g_748},{&g_748,&g_748,&g_748,&g_748},{&g_748,&g_748,&g_748,&g_748}};
static uint8_t g_1104 = 0x0EL;
static int32_t g_1111 = 0x939A33F7L;
static const struct S0 ** const g_1153 = (void*)0;
static const struct S0 ** const *g_1152 = &g_1153;
static uint32_t *g_1260 = &g_378;
static uint32_t **g_1259 = &g_1260;
static uint32_t ***g_1434 = &g_1259;
static uint32_t ****g_1433 = &g_1434;
static const int16_t *g_1560 = &g_195;
static const int16_t **g_1559 = &g_1560;
static int64_t g_1583 = 1L;
static uint32_t g_1643 = 0x6A0A74B8L;
static uint64_t ****g_1653[6] = {&g_820,&g_820,&g_820,&g_820,&g_820,&g_820};
static uint64_t *****g_1652 = &g_1653[5];
static int16_t ***g_1656 = (void*)0;
static const uint32_t g_1679 = 4294967287UL;
static uint32_t g_1701 = 0x8BE723CDL;
static int8_t *g_1763 = &g_365.f0;
static int8_t ** const g_1762 = &g_1763;
static uint32_t g_1838 = 0x2B0402ADL;
static int8_t g_1894[3][3] = {{(-10L),0x1BL,(-10L)},{(-10L),0x1BL,(-10L)},{(-10L),0x1BL,(-10L)}};
static uint16_t g_1909 = 65535UL;
static int32_t ***g_2008 = &g_82;
static const union U1 * const * const g_2071 = (void*)0;
static const union U1 * const * const *g_2070 = &g_2071;
static uint16_t g_2075[2] = {0x31B0L,0x31B0L};



static const struct S0  func_1(void);
static int32_t * func_5(struct S0  p_6);
static struct S0  func_7(const uint32_t  p_8, int32_t * p_9, int32_t * p_10, int32_t  p_11);
static int32_t  func_12(int32_t * p_13, int32_t * p_14, uint32_t  p_15);
static int32_t * func_16(uint32_t  p_17, int32_t * const  p_18, int8_t  p_19, int64_t  p_20);
static const uint8_t  func_26(struct S0  p_27, int32_t * p_28, int32_t * p_29, uint16_t  p_30, int32_t * p_31);
static struct S0  func_32(int32_t * p_33, int32_t * p_34);
static uint8_t  func_39(int32_t * p_40, int32_t * p_41, uint64_t  p_42, int32_t * p_43);




static const struct S0  func_1(void)
{ 
    int32_t *l_48 = &g_49;
    int32_t *l_50 = &g_49;
    const int32_t l_1011[6][4] = {{(-4L),5L,0xD109B7C6L,0xD109B7C6L},{0xBA157C9AL,0xBA157C9AL,0x31050BBFL,5L},{5L,(-4L),0x31050BBFL,(-4L)},{0xBA157C9AL,0xB4103CCBL,0xD109B7C6L,0x31050BBFL},{(-4L),0xB4103CCBL,0xB4103CCBL,(-4L)},{0xB4103CCBL,(-4L),0xBA157C9AL,5L}};
    int32_t l_2074[5][3] = {{0xB2C722C5L,0L,0L},{0x107DBF3DL,0xF4D27535L,0xF4D27535L},{0xB2C722C5L,0L,0L},{0x107DBF3DL,0xF4D27535L,0xF4D27535L},{0xB2C722C5L,0L,0L}};
    int i, j;
    for (g_2 = 0; (g_2 == 13); ++g_2)
    { 
        union U1 l_21[1][2][2] = {{{{{0xD4L,0UL}},{{0xD4L,0UL}}},{{{0xD4L,0UL}},{{0xD4L,0UL}}}}};
        int32_t *l_45 = &g_2;
        int32_t **l_44 = &l_45;
        int32_t *l_47 = &g_2;
        int32_t **l_46[3][2];
        int32_t *l_2055 = (void*)0;
        int32_t *l_2065 = &g_1021;
        const union U1 * const * const *l_2066[6][2];
        int32_t l_2078 = 1L;
        int64_t l_2079 = 0x1D7B1E90C7E04F13LL;
        int16_t l_2080 = 7L;
        uint64_t l_2081 = 0x0364223A04BDEFD1LL;
        int i, j, k;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 2; j++)
                l_46[i][j] = &l_47;
        }
        for (i = 0; i < 6; i++)
        {
            for (j = 0; j < 2; j++)
                l_2066[i][j] = (void*)0;
        }
    }
    return (*g_240);
}



static int32_t * func_5(struct S0  p_6)
{ 
    uint16_t l_1994 = 6UL;
    struct S0 l_2009 = {0xC9L,0x52E57E6AA67BEE1DLL};
    int32_t l_2027 = 1L;
    int32_t l_2028 = 0x655B96C9L;
    int32_t l_2033 = 3L;
    int32_t l_2034 = (-1L);
    uint64_t l_2035[4][2] = {{5UL,5UL},{5UL,5UL},{5UL,5UL},{5UL,5UL}};
    union U1 *l_2039 = &g_112;
    uint8_t *l_2050 = &g_175[2][5];
    int32_t *l_2054 = (void*)0;
    int i, j;
    for (g_112.f0.f0 = 2; (g_112.f0.f0 >= 0); g_112.f0.f0 -= 1)
    { 
        const uint32_t l_1997 = 0x3BC0D967L;
        int32_t l_2024 = 0x992E8C8DL;
        int32_t l_2026 = 1L;
        int32_t l_2029 = 0xE68B150AL;
        int32_t l_2032[7][5][6] = {{{0x60E21C45L,(-1L),0L,0L,(-1L),0x60E21C45L},{0x0E753FC6L,0x60E21C45L,0L,0x60E21C45L,0x0E753FC6L,0x0E753FC6L},{7L,0x60E21C45L,0x60E21C45L,7L,(-1L),7L},{7L,(-1L),7L,0x60E21C45L,0x60E21C45L,7L},{0x0E753FC6L,0x0E753FC6L,0x60E21C45L,0L,0x60E21C45L,0x0E753FC6L}},{{0x60E21C45L,(-1L),0L,0L,(-1L),0x60E21C45L},{0x0E753FC6L,0x60E21C45L,0L,0x60E21C45L,0x0E753FC6L,0x0E753FC6L},{7L,0x60E21C45L,0x60E21C45L,7L,(-1L),7L},{7L,(-1L),7L,0x60E21C45L,0x60E21C45L,7L},{0x0E753FC6L,0x0E753FC6L,0x60E21C45L,0L,0x60E21C45L,0x0E753FC6L}},{{0x60E21C45L,(-1L),0L,0L,(-1L),0x60E21C45L},{0x0E753FC6L,0x60E21C45L,0L,0x60E21C45L,0x0E753FC6L,0x0E753FC6L},{7L,0x60E21C45L,0x60E21C45L,7L,(-1L),0L},{0L,0x0E753FC6L,0L,7L,7L,0L},{0x60E21C45L,0x60E21C45L,7L,(-1L),7L,0x60E21C45L}},{{7L,0x0E753FC6L,(-1L),(-1L),0x0E753FC6L,7L},{0x60E21C45L,7L,(-1L),7L,0x60E21C45L,0x60E21C45L},{0L,7L,7L,0L,0x0E753FC6L,0L},{0L,0x0E753FC6L,0L,7L,7L,0L},{0x60E21C45L,0x60E21C45L,7L,(-1L),7L,0x60E21C45L}},{{7L,0x0E753FC6L,(-1L),(-1L),0x0E753FC6L,7L},{0x60E21C45L,7L,(-1L),7L,0x60E21C45L,0x60E21C45L},{0L,7L,7L,0L,0x0E753FC6L,0L},{0L,0x0E753FC6L,0L,7L,7L,0L},{0x60E21C45L,0x60E21C45L,7L,(-1L),7L,0x60E21C45L}},{{7L,0x0E753FC6L,(-1L),(-1L),0x0E753FC6L,7L},{0x60E21C45L,7L,(-1L),7L,0x60E21C45L,0x60E21C45L},{0L,7L,7L,0L,0x0E753FC6L,0L},{0L,0x0E753FC6L,0L,7L,7L,0L},{0x60E21C45L,0x60E21C45L,7L,(-1L),7L,0x60E21C45L}},{{7L,0x0E753FC6L,(-1L),(-1L),0x0E753FC6L,7L},{0x60E21C45L,7L,(-1L),7L,0x60E21C45L,0x60E21C45L},{0L,7L,7L,0L,0x0E753FC6L,0L},{0L,0x0E753FC6L,0L,7L,7L,0L},{0x60E21C45L,0x60E21C45L,7L,(-1L),7L,0x60E21C45L}}};
        uint32_t **l_2041 = &g_1260;
        struct S0 l_2053 = {1L,18446744073709551615UL};
        int i, j, k;
        ++l_1994;
        if (l_1997)
            continue;
        for (g_101 = 3; (g_101 == 24); g_101++)
        { 
            uint32_t l_2005 = 0xE3EAB0AFL;
            int32_t l_2011 = 1L;
            int32_t l_2014 = 1L;
            int32_t l_2025 = 0xBEAC055DL;
            int32_t l_2031[3][2][4] = {{{0xFA5ECB41L,0xFA5ECB41L,0xFA5ECB41L,0xFA5ECB41L},{0xFA5ECB41L,0xFA5ECB41L,0xFA5ECB41L,0xFA5ECB41L}},{{0xFA5ECB41L,0xFA5ECB41L,0xFA5ECB41L,0xFA5ECB41L},{0xFA5ECB41L,0xFA5ECB41L,0xFA5ECB41L,0xFA5ECB41L}},{{0xFA5ECB41L,0xFA5ECB41L,0xFA5ECB41L,0xFA5ECB41L},{0xFA5ECB41L,0xFA5ECB41L,0xFA5ECB41L,0xFA5ECB41L}}};
            const int32_t ****l_2038[5][4][6] = {{{&g_608[0][2],&g_608[0][2],&g_608[5][0],&g_608[1][2],&g_608[5][0],&g_608[3][2]},{(void*)0,&g_608[5][0],&g_608[5][0],&g_608[1][2],&g_608[4][1],&g_608[5][0]},{&g_608[5][0],(void*)0,&g_608[5][0],&g_608[3][2],&g_608[0][2],&g_608[3][2]},{&g_608[5][0],&g_608[3][2],&g_608[5][0],&g_608[2][1],&g_608[4][3],&g_608[5][0]}},{{&g_608[2][1],&g_608[4][3],&g_608[5][0],&g_608[4][1],&g_608[5][0],&g_608[5][0]},{&g_608[1][2],&g_608[5][0],&g_608[5][0],&g_608[4][1],&g_608[5][0],&g_608[5][0]},{&g_608[5][0],&g_608[0][2],&g_608[0][2],&g_608[5][0],&g_608[1][2],&g_608[5][0]},{&g_608[5][0],&g_608[0][2],(void*)0,&g_608[5][0],&g_608[5][0],&g_608[3][2]}},{{&g_608[5][0],&g_608[5][0],&g_608[5][0],&g_608[5][0],&g_608[5][0],&g_608[4][1]},{&g_608[1][2],&g_608[0][2],&g_608[5][0],&g_608[0][2],&g_608[1][2],&g_608[5][0]},{&g_608[5][0],&g_608[0][2],&g_608[2][1],&g_608[5][0],&g_608[5][0],&g_608[5][0]},{&g_608[2][1],&g_608[1][2],&g_608[1][2],&g_608[0][2],&g_608[5][0],&g_608[5][0]}},{{&g_608[5][0],&g_608[4][1],&g_608[2][1],&g_608[2][1],&g_608[4][1],&g_608[5][0]},{&g_608[5][0],&g_608[5][0],&g_608[5][0],&g_608[5][0],&g_608[5][0],&g_608[4][1]},{&g_608[5][0],&g_608[1][2],&g_608[5][0],(void*)0,&g_608[5][0],&g_608[3][2]},{&g_608[5][0],&g_608[5][0],(void*)0,&g_608[5][0],(void*)0,&g_608[5][0]}},{{&g_608[5][0],&g_608[5][0],&g_608[0][2],&g_608[2][1],&g_608[5][0],&g_608[5][0]},{&g_608[5][0],&g_608[5][0],&g_608[5][0],&g_608[0][2],&g_608[5][0],(void*)0},{&g_608[2][1],&g_608[5][0],&g_608[1][2],&g_608[5][0],&g_608[5][0],&g_608[1][2]},{&g_608[5][0],&g_608[5][0],&g_608[5][0],&g_608[0][2],(void*)0,&g_608[5][0]}}};
            const int8_t l_2047 = 0x2CL;
            int i, j, k;
            for (g_531 = 4; (g_531 < 37); ++g_531)
            { 
                int32_t *l_2002 = &g_53;
                int32_t **l_2003 = (void*)0;
                int32_t **l_2004 = (void*)0;
                int32_t l_2013 = 0x32C64FC7L;
                int32_t l_2030[7];
                int i;
                for (i = 0; i < 7; i++)
                    l_2030[i] = 0xD0C4DEAEL;
                l_2002 = ((*g_82) = l_2002);
                (**g_1031) &= ((-5L) > ((-10L) >= l_2005));
                if ((**g_1023))
                    continue;
                if (l_1997)
                    break;
                for (g_887 = (-22); (g_887 >= (-7)); g_887++)
                { 
                    struct S0 *l_2010 = &l_2009;
                    int32_t l_2012 = 0x82713B82L;
                    int32_t *l_2015 = &g_107;
                    int32_t l_2016 = 0xAFFB3665L;
                    int32_t *l_2017 = &g_57;
                    int32_t *l_2018 = (void*)0;
                    int32_t *l_2019 = &g_107;
                    int32_t *l_2020 = (void*)0;
                    int32_t *l_2021 = &g_107;
                    int32_t *l_2022 = &g_49;
                    int32_t *l_2023[7] = {&g_635,(void*)0,(void*)0,&g_635,(void*)0,(void*)0,&g_635};
                    int i;
                    g_2008 = &l_2003;
                    (*l_2010) = l_2009;
                    if (p_6.f0)
                        break;
                    --l_2035[0][1];
                    if ((**g_1036))
                        break;
                }
            }
            if (((((void*)0 == l_2038[0][0][2]) , l_2026) , l_2035[0][1]))
            { 
                union U1 **l_2040 = &l_2039;
                (*l_2040) = l_2039;
                (**g_1027) = ((void*)0 != l_2041);
            }
            else
            { 
                int32_t *l_2044[7][2] = {{&l_2031[1][1][0],(void*)0},{(void*)0,&l_2031[1][1][0]},{(void*)0,(void*)0},{&l_2031[1][1][0],(void*)0},{(void*)0,&l_2031[1][1][0]},{(void*)0,(void*)0},{&l_2031[1][1][0],(void*)0}};
                int i, j;
                for (g_1838 = 19; (g_1838 <= 1); g_1838--)
                { 
                    uint8_t *l_2051 = &g_1104;
                    int64_t *l_2052 = &g_530;
                    (*g_82) = l_2044[1][1];
                    (**g_1019) ^= p_6.f0;
                    (*g_82) = &l_2029;
                    l_2044[1][1] = func_16(l_2032[6][4][4], func_16((safe_rshift_func_uint16_t_u_u((((l_2047 & (0UL >= l_2028)) | l_2029) != ((*l_2052) = ((((((18446744073709551606UL <= ((safe_mod_func_uint64_t_u_u((p_6.f1 = (l_2024 = 0x4CCA799A62C1FEB0LL)), 0x0CAC3623F3E8B011LL)) & (**g_617))) >= 18446744073709551611UL) , l_2050) != l_2051) != p_6.f0) || l_2009.f1))), 4)), &l_2029, p_6.f0, g_349), p_6.f0, g_531);
                }
                l_2009 = l_2053;
                if (l_2053.f1)
                    continue;
            }
        }
    }
    (*g_82) = &l_2028;
    return l_2054;
}



static struct S0  func_7(const uint32_t  p_8, int32_t * p_9, int32_t * p_10, int32_t  p_11)
{ 
    uint64_t * const l_1438 = &g_890;
    uint64_t ***l_1440 = &g_821;
    uint8_t *l_1441 = &g_531;
    int32_t l_1445 = 1L;
    uint8_t l_1446 = 0UL;
    const int32_t ****l_1461 = (void*)0;
    union U1 l_1481[4] = {{{0x08L,0xD3AAB5AC548FDEC4LL}},{{0x08L,0xD3AAB5AC548FDEC4LL}},{{0x08L,0xD3AAB5AC548FDEC4LL}},{{0x08L,0xD3AAB5AC548FDEC4LL}}};
    uint8_t l_1543 = 1UL;
    int64_t l_1547[3];
    int32_t l_1549 = 0x749EB22DL;
    int32_t l_1552 = 0x13D77B64L;
    int32_t l_1553[1];
    uint16_t l_1576 = 0xBB7BL;
    uint64_t ***l_1608 = &g_821;
    uint32_t l_1632 = 0xED93B090L;
    int16_t *l_1635 = &g_526[1];
    int16_t **l_1634 = &l_1635;
    int16_t ***l_1633 = &l_1634;
    int32_t *l_1639 = &l_1553[0];
    uint64_t ****l_1648[4] = {&l_1440,&l_1440,&l_1440,&l_1440};
    uint64_t *****l_1647[5][5][7] = {{{&l_1648[3],(void*)0,&l_1648[2],&l_1648[1],&l_1648[3],&l_1648[2],&l_1648[2]},{&l_1648[2],&l_1648[0],&l_1648[1],&l_1648[1],&l_1648[0],&l_1648[2],&l_1648[3]},{&l_1648[3],&l_1648[2],(void*)0,(void*)0,&l_1648[3],&l_1648[2],(void*)0},{(void*)0,&l_1648[2],&l_1648[3],&l_1648[2],(void*)0,&l_1648[3],&l_1648[2]},{(void*)0,&l_1648[2],(void*)0,&l_1648[2],&l_1648[2],&l_1648[2],&l_1648[2]}},{{&l_1648[3],&l_1648[0],&l_1648[2],(void*)0,&l_1648[2],(void*)0,&l_1648[2]},{(void*)0,(void*)0,(void*)0,&l_1648[2],&l_1648[2],&l_1648[2],&l_1648[2]},{&l_1648[2],&l_1648[2],&l_1648[3],&l_1648[2],&l_1648[2],&l_1648[3],(void*)0},{&l_1648[2],&l_1648[2],&l_1648[2],(void*)0,&l_1648[2],&l_1648[2],&l_1648[3]},{&l_1648[2],(void*)0,&l_1648[3],&l_1648[2],&l_1648[2],&l_1648[2],&l_1648[2]}},{{&l_1648[2],&l_1648[2],&l_1648[3],&l_1648[2],&l_1648[2],&l_1648[3],&l_1648[2]},{&l_1648[3],&l_1648[3],&l_1648[2],&l_1648[3],&l_1648[2],(void*)0,&l_1648[2]},{&l_1648[1],(void*)0,&l_1648[2],(void*)0,(void*)0,&l_1648[3],&l_1648[3]},{&l_1648[3],&l_1648[3],(void*)0,&l_1648[2],&l_1648[1],&l_1648[3],&l_1648[2]},{&l_1648[2],(void*)0,&l_1648[3],&l_1648[2],&l_1648[2],&l_1648[3],(void*)0}},{{&l_1648[2],(void*)0,&l_1648[2],&l_1648[2],&l_1648[2],&l_1648[3],&l_1648[2]},{(void*)0,&l_1648[2],&l_1648[2],&l_1648[2],&l_1648[0],(void*)0,&l_1648[2]},{(void*)0,&l_1648[2],&l_1648[3],&l_1648[2],(void*)0,&l_1648[2],&l_1648[2]},{&l_1648[0],&l_1648[2],(void*)0,&l_1648[2],&l_1648[2],(void*)0,&l_1648[2]},{&l_1648[2],&l_1648[2],&l_1648[2],&l_1648[2],(void*)0,&l_1648[2],(void*)0}},{{(void*)0,&l_1648[2],(void*)0,(void*)0,&l_1648[2],&l_1648[2],(void*)0},{(void*)0,&l_1648[2],(void*)0,&l_1648[3],&l_1648[0],&l_1648[3],(void*)0},{&l_1648[2],(void*)0,&l_1648[2],&l_1648[0],&l_1648[3],&l_1648[2],&l_1648[2]},{&l_1648[2],(void*)0,&l_1648[3],&l_1648[3],&l_1648[3],(void*)0,&l_1648[2]},{(void*)0,&l_1648[3],&l_1648[1],&l_1648[2],&l_1648[0],&l_1648[2],&l_1648[2]}}};
    int32_t l_1685 = (-6L);
    int8_t l_1686 = (-7L);
    int32_t *l_1688 = &g_49;
    uint16_t l_1796[5][7] = {{0x8EACL,0x9180L,0x9180L,0x8EACL,0x9180L,0x9180L,0x8EACL},{1UL,0x015AL,1UL,65535UL,0x1F87L,65535UL,1UL},{0x8EACL,0x8EACL,1UL,0x8EACL,0x8EACL,1UL,0x8EACL},{0x1F87L,65535UL,1UL,0x015AL,1UL,65535UL,0x1F87L},{0x9180L,0x8EACL,0x9180L,0x9180L,0x8EACL,0x9180L,0x9180L}};
    uint64_t ***l_1805 = (void*)0;
    struct S0 **l_1832 = &g_240;
    struct S0 ***l_1831 = &l_1832;
    uint32_t l_1856 = 0x82FB3486L;
    uint32_t *** const *l_1897[5][6];
    uint32_t *** const * const *l_1896 = &l_1897[4][4];
    uint8_t *****l_1939 = &g_1039[3][0];
    uint32_t l_1959 = 0xD2F55BAFL;
    uint32_t ***l_1983 = &g_1259;
    struct S0 l_1993 = {0x8AL,18446744073709551613UL};
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_1547[i] = 1L;
    for (i = 0; i < 1; i++)
        l_1553[i] = (-1L);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 6; j++)
            l_1897[i][j] = &g_1434;
    }
    if ((safe_rshift_func_int8_t_s_u((safe_unary_minus_func_int16_t_s(g_838)), (((((void*)0 == l_1438) == (+(((*l_1441) = ((void*)0 != l_1440)) || (g_581[3] , ((safe_mul_func_uint8_t_u_u(((~l_1445) >= l_1446), 4UL)) > l_1446))))) > g_101) < 0xD3F4L))))
    { 
        const union U1 l_1452 = {{-10L,0x85AD8635EAA0ACB1LL}};
        int32_t l_1504 = 1L;
        const uint16_t l_1542[1] = {0x1836L};
        int32_t l_1548 = 0L;
        int32_t l_1550 = 0x00407C3DL;
        int32_t l_1551[6][5] = {{0x6C5E0308L,0xCAD4E679L,0xCAD4E679L,0x6C5E0308L,0x6C5E0308L},{0L,0xFBA26A48L,0L,0xFBA26A48L,0L},{0x6C5E0308L,0x6C5E0308L,0xCAD4E679L,0xCAD4E679L,0x6C5E0308L},{9L,0xFBA26A48L,9L,0xFBA26A48L,9L},{0x6C5E0308L,0xCAD4E679L,0xCAD4E679L,0x6C5E0308L,0x6C5E0308L},{0L,0xFBA26A48L,0L,0xFBA26A48L,0L}};
        const int16_t **l_1564 = &g_1560;
        union U1 **l_1646 = (void*)0;
        uint64_t *****l_1690[2];
        struct S0 **l_1721 = &g_240;
        struct S0 ** const *l_1720[7][7] = {{&l_1721,&l_1721,&l_1721,&l_1721,&l_1721,&l_1721,&l_1721},{&l_1721,&l_1721,&l_1721,(void*)0,&l_1721,(void*)0,&l_1721},{&l_1721,&l_1721,&l_1721,&l_1721,&l_1721,&l_1721,&l_1721},{&l_1721,(void*)0,&l_1721,&l_1721,&l_1721,&l_1721,&l_1721},{&l_1721,&l_1721,&l_1721,&l_1721,&l_1721,&l_1721,&l_1721},{&l_1721,(void*)0,&l_1721,(void*)0,&l_1721,&l_1721,&l_1721},{&l_1721,&l_1721,&l_1721,&l_1721,&l_1721,&l_1721,&l_1721}};
        uint32_t l_1767 = 0x287641F4L;
        int16_t ****l_1780 = (void*)0;
        const int8_t *l_1787[5][6][4] = {{{&g_349,(void*)0,&g_636[5],&g_602.f0},{(void*)0,&l_1452.f0.f0,(void*)0,&g_365.f0},{&l_1452.f0.f0,(void*)0,&g_365.f0,(void*)0},{&g_365.f0,&l_1452.f0.f0,(void*)0,&g_602.f0},{&g_365.f0,(void*)0,&g_112.f0.f0,&l_1452.f0.f0},{&l_1452.f0.f0,&g_349,&g_365.f0,&g_349}},{{&l_1686,&g_365.f0,(void*)0,&g_602.f0},{&l_1481[2].f0.f0,&g_349,&g_602.f0,&g_112.f0.f0},{&g_112.f0.f0,&l_1686,&g_602.f0,&g_636[3]},{&g_112.f0.f0,&g_112.f0.f0,&g_602.f0,&g_636[3]},{&l_1481[2].f0.f0,&g_636[3],(void*)0,&g_636[1]},{&l_1686,&g_602.f0,&g_365.f0,(void*)0}},{{&l_1452.f0.f0,&g_636[3],&g_112.f0.f0,&l_1452.f0.f0},{&g_365.f0,(void*)0,(void*)0,&l_1481[2].f0.f0},{&g_365.f0,&g_636[5],&g_365.f0,&g_365.f0},{&l_1452.f0.f0,&l_1452.f0.f0,(void*)0,&l_1686},{(void*)0,&g_636[3],&g_636[5],&l_1452.f0.f0},{&g_349,&l_1452.f0.f0,&g_636[2],&g_636[5]}},{{&g_636[3],&l_1452.f0.f0,(void*)0,&l_1452.f0.f0},{&l_1452.f0.f0,&g_636[3],&g_112.f0.f0,&l_1686},{&g_602.f0,&l_1452.f0.f0,(void*)0,&g_365.f0},{&g_365.f0,&g_636[5],&l_1452.f0.f0,&l_1481[2].f0.f0},{&g_112.f0.f0,(void*)0,&l_1452.f0.f0,&l_1452.f0.f0},{(void*)0,&g_636[3],&l_1452.f0.f0,(void*)0}},{{&g_636[3],&g_602.f0,&g_636[3],&g_636[1]},{(void*)0,&g_636[3],(void*)0,&g_636[3]},{(void*)0,&g_112.f0.f0,&l_1452.f0.f0,&g_636[3]},{(void*)0,&l_1686,&l_1452.f0.f0,&g_112.f0.f0},{(void*)0,&g_349,(void*)0,&g_602.f0},{(void*)0,&g_365.f0,&g_636[3],&g_349}}};
        uint8_t l_1788 = 255UL;
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_1690[i] = &g_1653[2];
        for (g_890 = (-11); (g_890 >= 12); g_890 = safe_add_func_uint8_t_u_u(g_890, 7))
        { 
            uint64_t l_1454[1];
            uint16_t *l_1455 = (void*)0;
            int32_t l_1460[2][6] = {{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)}};
            struct S0 * const *l_1474 = &g_240;
            int32_t l_1482 = 0x3AE1C77DL;
            int64_t *l_1540 = (void*)0;
            int64_t *l_1541[7][6] = {{&g_571[5],&g_530,&g_530,&g_530,&g_103,&g_530},{&g_530,&g_571[5],&g_530,&g_571[4],&g_706,&g_571[5]},{&g_706,&g_571[4],&g_530,&g_571[4],&g_571[4],&g_571[4]},{&g_571[4],&g_571[4],&g_571[4],&g_571[4],&g_530,&g_571[4]},{&g_706,&g_571[5],&g_706,&g_571[4],&g_530,&g_571[5]},{&g_530,&g_530,&g_103,&g_530,&g_530,&g_571[1]},{(void*)0,&g_571[4],&g_103,&g_571[4],&g_571[5],&g_530}};
            int32_t *l_1544 = (void*)0;
            int32_t *l_1545 = &g_57;
            int32_t *l_1546[6][1][5] = {{{&g_683,&l_1445,&g_2,&g_683,&g_1021}},{{&g_53,&g_2,&g_2,&g_53,&g_2}},{{&g_53,&l_1445,&g_2,&g_53,&g_1021}},{{&g_683,&l_1445,&g_2,&g_683,&g_1021}},{{&g_53,&g_2,&g_2,&g_53,&g_2}},{{&g_53,&l_1445,&g_2,&g_53,&g_1021}}};
            uint16_t l_1554 = 0xFDF4L;
            union U1 l_1588 = {{0x5BL,18446744073709551607UL}};
            union U1 *****l_1613 = &g_740;
            int32_t * const l_1641 = &l_1550;
            int i, j, k;
            for (i = 0; i < 1; i++)
                l_1454[i] = 0xB1BEC4CA2D099AB9LL;
            if (((+(0xE42B828CL <= ((((**g_617) = 1UL) < ((void*)0 == &g_1153)) <= ((safe_sub_func_int64_t_s_s(((l_1452 , (!(l_1454[0] && (--g_581[1])))) , (safe_rshift_func_int16_t_s_s((-7L), 2))), l_1460[1][2])) < 0xDA5BA087L)))) & 0xAD0E736F5D65FC00LL))
            { 
                const int32_t *****l_1462 = &l_1461;
                (*l_1462) = l_1461;
            }
            else
            { 
                int32_t * const l_1485 = &l_1482;
                int64_t *l_1514 = &g_99;
                struct S0 l_1522 = {8L,18446744073709551615UL};
                for (g_112.f1 = 4; (g_112.f1 >= 0); g_112.f1 -= 1)
                { 
                    int16_t l_1463 = 0xA1BDL;
                    uint32_t *l_1483 = &g_942;
                    uint32_t *l_1484 = &g_161;
                    int8_t *l_1486 = &l_1481[2].f0.f0;
                    uint16_t l_1503 = 0x5F50L;
                    int i;
                    if (l_1463)
                        break;
                    l_1482 ^= (safe_rshift_func_int16_t_s_u(l_1454[0], ((safe_mod_func_uint8_t_u_u((safe_sub_func_int32_t_s_s(((**g_1036) = ((safe_lshift_func_int8_t_s_s((l_1463 | (((safe_add_func_int64_t_s_s(((**g_407) || ((((l_1474 != (((safe_add_func_uint8_t_u_u((safe_sub_func_int16_t_s_s((((l_1463 , (0xB1736409L <= (safe_mul_func_int8_t_s_s((l_1481[2] , 0x3AL), p_11)))) < (*p_9)) > g_684[4][1]), l_1452.f1)), p_11)) || 0x78B3L) , (*g_1152))) < g_575) && (**g_617)) >= g_349)), p_11)) <= l_1463) != l_1460[1][2])), 3)) & 0x74FAL)), 5UL)), g_602.f1)) & p_11)));
                    (**g_1023) ^= (*p_10);
                    (*g_82) = func_16(((*l_1484) = ((*l_1483) = ((void*)0 != &g_1018[1][0][0]))), l_1485, ((*l_1486) = l_1454[0]), p_8);
                    l_1504 = (((safe_mul_func_int8_t_s_s(8L, (*l_1485))) >= (((0xCFL || (safe_div_func_uint16_t_u_u((((safe_mul_func_uint16_t_u_u((safe_mod_func_uint16_t_u_u((0L | (safe_sub_func_int16_t_s_s(2L, (--(**g_617))))), (safe_rshift_func_int8_t_s_s(0xAFL, 5)))), (safe_mod_func_uint32_t_u_u(1UL, l_1503)))) , g_365.f1) > (*p_10)), 65535UL))) < g_175[4][5]) != 0xB52CB0B5L)) & (*l_1485));
                }
                (**g_1023) = (l_1454[0] <= ((safe_div_func_int32_t_s_s((safe_rshift_func_uint16_t_u_s((((+((safe_mod_func_uint32_t_u_u(((((*l_1514) = p_8) != ((safe_mod_func_uint64_t_u_u((0x02L >= (0x14B1L ^ ((*l_1485) = (+(*l_1485))))), (g_889 & (safe_add_func_uint32_t_u_u(0x0F945375L, 0x257B1321L))))) | g_526[1])) ^ l_1454[0]), (**g_1019))) >= p_8)) < g_365.f1) <= g_565), 3)), (**g_1036))) > p_8));
                for (g_889 = 0; (g_889 < (-17)); g_889 = safe_sub_func_int64_t_s_s(g_889, 6))
                { 
                    return l_1522;
                }
            }
            (*g_1020) = (safe_mul_func_uint8_t_u_u((((safe_sub_func_int64_t_s_s((+(g_71 ^= (l_1452.f0 , (safe_unary_minus_func_int32_t_s((*p_10)))))), (safe_mod_func_uint16_t_u_u(((!((l_1460[1][2] != (g_914 || (((~(safe_mul_func_int8_t_s_s((((((safe_rshift_func_int8_t_s_u(((*p_10) > (*p_9)), 4)) == (+(((((g_571[4] |= ((--(*l_1441)) | 0xBBL)) | 0x344E7ABB1EA1AA14LL) ^ (**g_1019)) >= p_11) == l_1454[0]))) && 1L) < l_1542[0]) == g_684[3][2]), l_1543))) || 0xC8B35F9DL) && p_8))) >= p_11)) > p_11), 6L)))) > 6L) && l_1504), g_581[1]));
            --l_1554;
            if (((**g_1033) ^= (safe_div_func_int8_t_s_s(((void*)0 == &g_565), l_1481[2].f0.f0))))
            { 
                const uint64_t l_1582 = 0UL;
                int32_t l_1598 = (-1L);
                uint64_t ***l_1606 = &g_821;
                const union U1 *l_1620 = &l_1452;
                const union U1 **l_1619 = &l_1620;
                const union U1 ***l_1618[3][2][2] = {{{&l_1619,&l_1619},{&l_1619,&l_1619}},{{&l_1619,&l_1619},{&l_1619,&l_1619}},{{&l_1619,&l_1619},{&l_1619,&l_1619}}};
                const union U1 ****l_1617 = &l_1618[0][0][0];
                const union U1 *****l_1616 = &l_1617;
                int i, j, k;
                (**g_1031) = (**g_1032);
                for (g_57 = 0; (g_57 <= 1); g_57 += 1)
                { 
                    const int16_t ***l_1561 = (void*)0;
                    const int16_t ***l_1562 = &g_1559;
                    const int16_t ***l_1563[1];
                    int16_t *l_1575 = &g_193[4];
                    uint16_t *l_1596 = &g_684[4][3];
                    uint32_t *l_1597 = &g_161;
                    int i, j;
                    for (i = 0; i < 1; i++)
                        l_1563[i] = (void*)0;
                    l_1564 = ((*l_1562) = g_1559);
                    l_1552 = (l_1548 = ((((safe_lshift_func_int8_t_s_u((((safe_rshift_func_int8_t_s_u(l_1460[g_57][(g_57 + 3)], (((**g_1024) = (safe_div_func_uint32_t_u_u((g_842[(g_57 + 1)] < ((l_1550 = 0xFAE4F1168269D2E5LL) > (l_1551[1][3] = (safe_sub_func_uint32_t_u_u(((safe_rshift_func_int16_t_s_s((((*l_1575) = (-4L)) <= p_11), (((l_1576 ^ (+(safe_add_func_uint8_t_u_u(((safe_sub_func_int64_t_s_s(0x8726B6B7BCB20436LL, l_1582)) < 1L), p_11)))) ^ 4L) & 0x76C53111L))) == (*p_9)), 0xE9A1C414L))))), (*p_10)))) ^ (-1L)))) , l_1582) == g_575), 4)) <= g_1583) == p_8) != g_842[(g_57 + 1)]));
                    (**g_1028) = (safe_lshift_func_uint8_t_u_u((l_1598 = (safe_div_func_uint32_t_u_u(((*l_1597) = (((l_1588 , (~(safe_div_func_uint16_t_u_u(((*l_1596) = (safe_mul_func_uint16_t_u_u((((**g_617) = (p_11 ^ ((void*)0 != (*g_1259)))) ^ ((p_8 , ((safe_mod_func_int64_t_s_s((((*l_1441) |= p_11) , ((l_1481[2].f0 , 0x5222889FL) | 1L)), l_1582)) > 0x22L)) | (*p_9))), g_461))), g_107)))) || p_11) > l_1550)), l_1582))), p_8));
                }
                for (g_53 = (-26); (g_53 >= (-6)); g_53 = safe_add_func_int32_t_s_s(g_53, 4))
                { 
                    uint32_t *l_1601 = &g_942;
                    uint64_t ****l_1607[4];
                    union U1 l_1612 = {{0xFCL,1UL}};
                    union U1 *****l_1614[4][4] = {{&g_740,&g_740,&g_740,&g_740},{&g_740,&g_740,&g_740,&g_740},{&g_740,&g_740,&g_740,&g_740},{&g_740,&g_740,&g_740,&g_740}};
                    union U1 *****l_1615 = (void*)0;
                    int32_t l_1621 = 0xB983716CL;
                    int i, j;
                    for (i = 0; i < 4; i++)
                        l_1607[i] = &g_820;
                    (*g_82) = func_16(((*l_1601)--), (*g_1027), g_99, g_365.f1);
                    (*g_82) = (*g_1027);
                    (**g_1027) = (**g_1033);
                    (**g_1031) &= (safe_rshift_func_int8_t_s_u(((l_1608 = l_1606) != ((l_1621 |= (safe_lshift_func_uint8_t_u_s((((void*)0 == &p_8) , ((+0L) , ((l_1615 = (l_1612 , (l_1614[1][3] = l_1613))) == l_1616))), p_11))) , l_1606)), l_1612.f2));
                }
                (**g_1025) |= l_1504;
            }
            else
            { 
                uint16_t l_1626 = 5UL;
                int32_t l_1627 = 0x2843FA81L;
                for (g_1104 = 0; (g_1104 <= 36); g_1104 = safe_add_func_uint32_t_u_u(g_1104, 6))
                { 
                    uint8_t l_1640 = 255UL;
                    union U1 l_1642 = {{0xA0L,4UL}};
                    (**g_1036) ^= (((safe_sub_func_uint32_t_u_u(0UL, ((((**g_617) = p_8) <= l_1626) , l_1627))) != (((l_1452.f0.f0 < (safe_mul_func_int16_t_s_s(p_11, (safe_mod_func_uint32_t_u_u((p_8 || p_8), 1UL))))) , 0xFAC69AF540603332LL) == 0xCBF1555C2911E072LL)) || 0xCF29L);
                    l_1550 ^= (*g_1020);
                    (**l_1474) = l_1481[2].f0;
                    (*g_82) = func_16((l_1627 = (0xC0A2D566F67BF48DLL ^ l_1640)), (l_1481[2].f0 , l_1641), g_684[0][3], (l_1642 , p_8));
                }
                ++g_1643;
                (*g_82) = (((**g_740) == l_1646) , &p_11);
                if (l_1542[0])
                    continue;
                if ((*p_9))
                    continue;
            }
        }
        if (((l_1481[2] , l_1647[0][0][2]) == ((((safe_div_func_uint64_t_u_u(0xF856EA0EA8A3622DLL, (+l_1551[5][1]))) ^ p_11) || (0x0AL && (l_1481[2].f0 , g_889))) , g_1652)))
        { 
            int16_t ****l_1657 = &l_1633;
            const int32_t l_1671 = 1L;
            int32_t **l_1672 = &l_1639;
            (*l_1672) = ((*g_82) = func_16(g_565, (((safe_mul_func_int8_t_s_s(((((*l_1657) = g_1656) == (void*)0) || ((safe_add_func_uint64_t_u_u((safe_sub_func_int64_t_s_s((((+((**l_1634) = (((((void*)0 == &l_1635) <= (++(**g_617))) ^ (*l_1639)) , (safe_lshift_func_uint16_t_u_u((safe_sub_func_int16_t_s_s((safe_mod_func_int16_t_s_s(p_8, p_11)), p_8)), (**g_617)))))) || 1L) >= p_11), 0xD2CB1F362039D04DLL)), p_8)) >= (*l_1639))), 0x8BL)) , l_1671) , &l_1550), p_11, g_112.f1));
        }
        else
        { 
            uint64_t l_1687 = 18446744073709551613UL;
            int32_t *l_1689 = &l_1685;
            (*g_240) = l_1452.f0;
            (*g_82) = (l_1689 = &l_1445);
        }
        l_1690[1] = &l_1648[2];
        for (g_1643 = (-1); (g_1643 == 25); g_1643 = safe_add_func_int8_t_s_s(g_1643, 2))
        { 
            uint8_t **l_1700 = &l_1441;
            uint32_t *l_1702 = &l_1632;
            int32_t l_1703 = (-1L);
            int32_t *l_1704[2][3][7] = {{{(void*)0,(void*)0,&l_1445,&l_1445,(void*)0,(void*)0,(void*)0},{(void*)0,&l_1445,&l_1445,(void*)0,&l_1551[4][4],(void*)0,&l_1445},{&l_1553[0],&l_1553[0],(void*)0,&l_1445,(void*)0,&l_1553[0],&l_1553[0]}},{{&g_683,&l_1445,&g_49,&l_1445,&g_683,&g_683,&l_1445},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&l_1445,&l_1551[4][4],&g_49,&g_49,&l_1551[4][4],&l_1445,&l_1551[4][4]}}};
            uint64_t **l_1713 = &g_379;
            struct S0 **l_1718 = &g_240;
            struct S0 ***l_1717 = &l_1718;
            uint64_t l_1761 = 18446744073709551610UL;
            int8_t l_1766 = 0x9AL;
            union U1 l_1773 = {{-9L,0x8F50D17614160557LL}};
            int i, j, k;
            for (g_890 = 0; (g_890 != 41); g_890++)
            { 
                int16_t l_1695 = 0xABB5L;
                int16_t ****l_1697 = (void*)0;
                int16_t *****l_1696 = &l_1697;
                int16_t ****l_1699 = (void*)0;
                int16_t *****l_1698 = &l_1699;
                if ((*p_9))
                    break;
                for (g_101 = 0; (g_101 <= 3); g_101 += 1)
                { 
                    (*g_82) = &l_1504;
                    return l_1452.f0;
                }
                (*l_1688) = (l_1695 && (((((*l_1696) = &g_1656) == ((*l_1698) = &g_1656)) & ((18446744073709551612UL < (p_11 != ((void*)0 == l_1700))) && 0x65L)) != 0UL));
                return l_1452.f0;
            }
            (*g_240) = l_1481[2].f0;
            l_1704[0][0][0] = &p_11;
        }
        (**g_1019) = (((((*l_1639) ^ (**g_1032)) ^ (0xF6EAD347L != ((*g_1763) & (((**g_1652) == l_1805) || ((l_1548 && 0UL) <= (*l_1639)))))) && 0x7BL) , (*p_10));
    }
    else
    { 
        uint32_t l_1806[3];
        uint32_t ***l_1820 = &g_1259;
        const uint16_t l_1837 = 0xECCEL;
        int16_t *l_1849[4][4] = {{&g_195,&g_195,&g_195,&g_195},{&g_195,&g_195,&g_195,&g_195},{&g_195,&g_195,&g_195,&g_195},{&g_195,&g_195,&g_195,&g_195}};
        uint32_t *l_1860[1];
        struct S0 l_1869 = {0x84L,1UL};
        int32_t l_1875 = 5L;
        uint32_t *l_1877 = &g_164[1];
        int32_t l_1878 = 0x2FBB161CL;
        const uint64_t **l_1889 = &g_118;
        const uint64_t *** const l_1888 = &l_1889;
        uint32_t ***** const l_1898 = &g_1433;
        int32_t l_1902 = (-7L);
        int32_t l_1903 = 0x9A6D21B0L;
        int32_t l_1904 = 0x19FD8445L;
        int32_t l_1905 = 0x0EF2B8E8L;
        int32_t l_1906 = 8L;
        int32_t l_1907 = 0x2250544DL;
        int32_t l_1908[1];
        int16_t l_1912 = 0xF184L;
        uint64_t * const *l_1943 = &l_1438;
        uint64_t * const **l_1942 = &l_1943;
        int64_t *l_1990 = &l_1547[0];
        int64_t *l_1991 = (void*)0;
        int64_t l_1992 = 3L;
        int i, j;
        for (i = 0; i < 3; i++)
            l_1806[i] = 0x2E7D9EBAL;
        for (i = 0; i < 1; i++)
            l_1860[i] = &g_942;
        for (i = 0; i < 1; i++)
            l_1908[i] = (-1L);
lbl_1916:
        if (((*l_1688) != l_1806[0]))
        { 
            union U1 l_1819 = {{1L,0xB4EBB0CB8CE3E63ELL}};
            union U1 * const l_1827 = &l_1819;
            union U1 * const *l_1826 = &l_1827;
            union U1 * const **l_1825[1];
            union U1 * const ***l_1824 = &l_1825[0];
            union U1 * const ****l_1823 = &l_1824;
            const struct S0 *l_1833 = &g_602;
            uint64_t l_1841[4];
            int32_t l_1859 = 0L;
            uint64_t *l_1870 = (void*)0;
            int i;
            for (i = 0; i < 1; i++)
                l_1825[i] = &l_1826;
            for (i = 0; i < 4; i++)
                l_1841[i] = 18446744073709551615UL;
            (*g_82) = &p_11;
            if ((safe_add_func_uint64_t_u_u(((safe_div_func_uint32_t_u_u(((p_9 == (void*)0) || (((safe_lshift_func_int16_t_s_u((safe_rshift_func_uint16_t_u_u((*g_618), ((safe_add_func_int32_t_s_s(((****g_405) = (safe_rshift_func_int8_t_s_u((((*l_1688) = 0x3EFCL) != (l_1819 , (((**g_1036) = ((l_1819.f0 , (void*)0) == l_1820)) > (*p_9)))), p_8))), (-9L))) , (*l_1688)))), 3)) | 0x9CD49FCFL) , (*l_1639))), (*p_9))) | p_8), p_8)))
            { 
                (**g_1024) ^= (*p_9);
            }
            else
            { 
                struct S0 **l_1830 = &g_240;
                struct S0 ***l_1829 = &l_1830;
                struct S0 ****l_1828[4];
                int16_t *l_1850 = &g_193[4];
                int32_t l_1858 = 0x55298A7BL;
                int i;
                for (i = 0; i < 4; i++)
                    l_1828[i] = &l_1829;
                (*g_240) = l_1481[2].f0;
                if (((p_8 < ((void*)0 != &l_1648[2])) & (safe_mod_func_int64_t_s_s(((l_1823 == (void*)0) , ((l_1831 = (void*)0) == (void*)0)), p_8))))
                { 
                    int32_t l_1836[1][4] = {{(-1L),(-1L),(-1L),(-1L)}};
                    int i, j;
                    (**g_1030) = (((void*)0 == l_1833) , (safe_div_func_uint16_t_u_u(((**g_617) ^= l_1836[0][2]), ((*l_1635) ^= l_1806[1]))));
                    (**g_1033) = (l_1837 >= g_195);
                    g_1838++;
                    return (***l_1829);
                }
                else
                { 
                    uint16_t *l_1855 = (void*)0;
                    uint16_t *l_1857 = &g_581[1];
                    l_1841[3]--;
                    if (l_1445)
                        goto lbl_1844;
lbl_1844:
                    (**g_1024) ^= (p_11 >= 0x9F48L);
                    (*g_82) = &p_11;
                    (**g_1019) = (safe_div_func_int32_t_s_s((*p_9), (*g_610)));
                    l_1859 = ((0x70L == (((((**g_617) = (((**g_407) = (*p_10)) != l_1806[0])) == (safe_rshift_func_int16_t_s_u(((l_1849[1][3] != l_1850) ^ ((*l_1857) = (l_1856 = ((((*l_1688) = ((*p_9) , ((**g_1025) &= (((*g_1433) = ((safe_div_func_int16_t_s_s((safe_lshift_func_int16_t_s_s(0x6FC5L, 10)), p_8)) , (void*)0)) == (void*)0)))) || g_636[3]) , 65527UL)))), l_1858))) != (-1L)) , (*g_1763))) || p_8);
                }
                (***l_1829) = (l_1819.f0 = (((&l_1632 == l_1860[0]) ^ (safe_sub_func_uint32_t_u_u((safe_sub_func_int16_t_s_s(((*l_1635) = (p_8 ^ (safe_div_func_uint32_t_u_u(4294967295UL, p_8)))), ((safe_div_func_uint16_t_u_u((g_378 && 1UL), (*l_1639))) <= g_461))), p_11))) , l_1869));
                (**g_1027) = ((l_1870 = ((****g_1652) = (**l_1440))) != (void*)0);
            }
        }
        else
        { 
            uint32_t *l_1876 = &g_842[1];
            const int32_t l_1879 = (-1L);
            (*g_1020) = (((((((*p_10) >= (g_193[4] <= ((***l_1608) = (safe_add_func_int8_t_s_s(((l_1875 |= (++(*l_1438))) | p_8), ((((**l_1820) = ((2UL ^ p_11) , l_1876)) == l_1877) ^ l_1806[0])))))) != l_1878) ^ l_1879) | 18446744073709551611UL) & 0x0C88640E9B690C29LL) == (*g_1763));
        }
lbl_1950:
        for (g_57 = (-20); (g_57 != 16); g_57 = safe_add_func_uint32_t_u_u(g_57, 2))
        { 
            int8_t l_1895 = (-1L);
            (**g_1031) = (((safe_mul_func_uint16_t_u_u(((safe_lshift_func_uint8_t_u_s(((((safe_add_func_int64_t_s_s(g_1111, (((void*)0 == l_1888) & ((~((safe_unary_minus_func_int8_t_s(((((safe_sub_func_int16_t_s_s(((((**g_1019) < p_8) | (((*g_1560) & (p_11 && 1L)) & g_1894[0][0])) <= l_1806[0]), 0xE9FCL)) , 247UL) < p_8) < 7L))) ^ 65530UL)) >= l_1895)))) | 6L) ^ p_11) < l_1895), 7)) > (*g_1763)), (**g_1559))) == 65535UL) ^ p_11);
        }
        if ((((p_8 > ((**g_1652) != &l_1889)) , l_1896) == (l_1806[1] , l_1898)))
        { 
            struct S0 l_1899[3][7] = {{{0xC4L,0xE7E0673044D68867LL},{0x0BL,0xEF862069947A4BBFLL},{0x0BL,0xEF862069947A4BBFLL},{0xC4L,0xE7E0673044D68867LL},{0xB5L,0xAC05FCAF600D476ALL},{0xC4L,0xE7E0673044D68867LL},{0x0BL,0xEF862069947A4BBFLL}},{{0x75L,0xE220C4E49CAF053BLL},{0x75L,0xE220C4E49CAF053BLL},{0x1DL,0UL},{-6L,1UL},{0x1DL,0UL},{0x75L,0xE220C4E49CAF053BLL},{0x75L,0xE220C4E49CAF053BLL}},{{0L,0UL},{0x0BL,0xEF862069947A4BBFLL},{1L,6UL},{0x0BL,0xEF862069947A4BBFLL},{0L,0UL},{0L,0UL},{0x0BL,0xEF862069947A4BBFLL}}};
            int i, j;
            return l_1899[2][4];
        }
        else
        { 
            int32_t l_1900 = 0xA07D0373L;
            int32_t *l_1901[2];
            uint32_t l_1913 = 0x739B9925L;
            uint8_t *****l_1940 = &g_747;
            uint64_t ***l_1941 = &g_821;
            uint64_t * const **l_1945 = &l_1943;
            int8_t l_1956 = 0x6EL;
            int i;
            for (i = 0; i < 2; i++)
                l_1901[i] = &l_1875;
            g_1909++;
            --l_1913;
            if (g_57)
                goto lbl_1916;
            if (((~(safe_mod_func_uint64_t_u_u((l_1906 = ((*g_379) = 18446744073709551613UL)), (((((safe_mul_func_uint16_t_u_u(0UL, ((safe_mod_func_int64_t_s_s((((((((safe_lshift_func_uint16_t_u_s(((((((**g_1762) == ((*l_1441) &= (l_1875 = 249UL))) , (&l_1913 == &g_1838)) <= 0xECA5L) < p_11) & 0xEEL), (**g_1559))) == l_1904) & l_1908[0]) , (**g_1559)) & (*l_1639)) <= 0x75BA9DFCL) || l_1902), p_8)) || (-8L)))) , (****g_405)) & 0xA1DCA698L) , 18446744073709551609UL) , g_887)))) <= l_1878))
            { 
                uint8_t *****l_1938[2][4];
                uint64_t * const ***l_1944[1];
                int32_t l_1946 = (-10L);
                int32_t l_1955[4][4][4] = {{{0L,0xB2B69162L,0xEF353055L,0xEF353055L},{0xB2B69162L,0xB2B69162L,(-5L),0x2BEF4583L},{0xB2B69162L,0L,0xEF353055L,0x2BEF4583L},{0L,0xB2B69162L,0xEF353055L,0xEF353055L}},{{0xB2B69162L,0xB2B69162L,(-5L),0x2BEF4583L},{0xB2B69162L,0L,0xEF353055L,0x2BEF4583L},{0L,0xB2B69162L,0xEF353055L,0xEF353055L},{0xB2B69162L,0xB2B69162L,(-5L),0x2BEF4583L}},{{0xB2B69162L,0L,0xEF353055L,0x2BEF4583L},{0L,0xB2B69162L,0xEF353055L,0xEF353055L},{0xB2B69162L,0xB2B69162L,(-5L),0xEF353055L},{0L,(-1L),(-5L),0xEF353055L}},{{(-1L),0L,(-5L),(-5L)},{0L,0L,0x2BEF4583L,0xEF353055L},{0L,(-1L),(-5L),0xEF353055L},{(-1L),0L,(-5L),(-5L)}}};
                int i, j, k;
                for (i = 0; i < 2; i++)
                {
                    for (j = 0; j < 4; j++)
                        l_1938[i][j] = (void*)0;
                }
                for (i = 0; i < 1; i++)
                    l_1944[i] = (void*)0;
                if ((safe_div_func_int16_t_s_s((((((~(((***l_1941) = ((**g_617) ^ ((--(*l_1438)) && (safe_lshift_func_uint16_t_u_s(((~(safe_lshift_func_int16_t_s_s((safe_sub_func_int16_t_s_s(0x0BC8L, (l_1938[0][3] != (l_1940 = l_1939)))), 5))) > ((l_1941 != (l_1945 = l_1942)) && ((void*)0 != (****g_1652)))), 5))))) , g_890)) && p_8) , (*l_1688)) ^ p_8) && l_1946), p_11)))
                { 
                    uint64_t l_1947 = 0xFBE669C13BAC8EDCLL;
                    int16_t **l_1951[6];
                    int32_t l_1952 = (-4L);
                    int32_t l_1953 = 0x682C875AL;
                    int32_t l_1954 = 1L;
                    int32_t l_1957 = 0x3A589725L;
                    int32_t l_1958[6];
                    int i;
                    for (i = 0; i < 6; i++)
                        l_1951[i] = &l_1849[2][0];
                    for (i = 0; i < 6; i++)
                        l_1958[i] = (-1L);
                    --l_1947;
                    if (l_1837)
                        goto lbl_1950;
                    (**g_1031) = (l_1951[5] == (*l_1633));
                    (*l_1688) |= ((**g_1031) |= 0x32489128L);
                    l_1959++;
                }
                else
                { 
                    (*g_82) = &p_11;
                }
            }
            else
            { 
                union U1 l_1962 = {{0x1DL,0xB993DDFA3CC0CA2BLL}};
                (**g_1028) = (p_11 ^ (l_1962 , (safe_add_func_int64_t_s_s((g_706 |= ((*l_1688) < p_11)), (safe_mod_func_uint32_t_u_u(((safe_mul_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u(((l_1902 = (safe_rshift_func_uint16_t_u_s(((((l_1898 != (void*)0) != (+((*p_9) != 2L))) & p_8) || l_1962.f0.f0), (*g_1560)))) < g_164[2]), (-1L))), l_1878)) | p_11), p_11))))));
            }
            (*g_1020) &= ((safe_mod_func_uint32_t_u_u(0UL, ((((safe_add_func_int8_t_s_s((*g_1763), p_11)) == 0xDB8C9FC60A11C9E3LL) > l_1907) && ((***l_1440) = ((*l_1438) = (+(l_1904 && (l_1481[2] , 0x34L)))))))) != 8UL);
        }
        (**g_1032) = (safe_mul_func_uint8_t_u_u(p_8, ((**g_1762) = (safe_mul_func_uint16_t_u_u(((**g_1028) , (((**l_1898) = l_1983) == ((safe_add_func_uint64_t_u_u((safe_mul_func_int16_t_s_s(((((*l_1639) , ((*l_1688) = ((*l_1990) = (1L >= ((safe_add_func_uint8_t_u_u((((l_1908[0] ^ ((*l_1639) = (g_570[0][2][3] >= 18446744073709551612UL))) <= 0x2CC03310L) <= (****g_405)), p_11)) && 0xB7L))))) == l_1992) | g_581[1]), p_8)), (-10L))) , (void*)0))), l_1908[0])))));
    }
    return l_1993;
}



static int32_t  func_12(int32_t * p_13, int32_t * p_14, uint32_t  p_15)
{ 
    const union U1 * const l_1042 = &g_112;
    const union U1 *l_1044 = &g_112;
    const union U1 **l_1043 = &l_1044;
    int32_t l_1045 = 0L;
    uint64_t * const l_1047 = &g_890;
    int32_t l_1048 = 0xF801CFCAL;
    int32_t l_1049 = 1L;
    int32_t l_1050[7][5][6] = {{{(-1L),(-1L),0x368EC4D0L,(-1L),(-1L),0x368EC4D0L},{(-1L),(-1L),0x368EC4D0L,(-1L),(-1L),0x368EC4D0L},{(-1L),(-1L),0x368EC4D0L,(-1L),(-1L),0x368EC4D0L},{(-1L),(-1L),0x368EC4D0L,(-1L),(-1L),0x368EC4D0L},{(-1L),(-1L),0x368EC4D0L,(-1L),(-1L),0x368EC4D0L}},{{(-1L),(-1L),0x368EC4D0L,(-1L),(-1L),0x368EC4D0L},{(-1L),(-1L),0x368EC4D0L,(-1L),(-1L),0x368EC4D0L},{(-1L),(-1L),0x368EC4D0L,(-1L),(-1L),0x368EC4D0L},{(-1L),(-1L),0x368EC4D0L,(-1L),(-1L),0x368EC4D0L},{(-1L),(-1L),0x368EC4D0L,(-1L),(-1L),0x368EC4D0L}},{{(-1L),(-1L),0x368EC4D0L,(-1L),(-1L),0x368EC4D0L},{(-1L),(-1L),0x368EC4D0L,(-1L),(-1L),0x368EC4D0L},{(-1L),(-1L),0x368EC4D0L,(-1L),(-1L),0x368EC4D0L},{(-1L),(-1L),0x368EC4D0L,(-1L),(-1L),0x368EC4D0L},{(-1L),(-1L),0x368EC4D0L,(-1L),(-1L),0x368EC4D0L}},{{(-1L),(-1L),0x368EC4D0L,(-1L),(-1L),0x368EC4D0L},{(-1L),(-1L),0x368EC4D0L,(-1L),(-1L),0x368EC4D0L},{(-1L),(-1L),0x368EC4D0L,(-1L),(-1L),0x368EC4D0L},{(-1L),(-1L),0x368EC4D0L,(-1L),(-1L),0x368EC4D0L},{(-1L),(-1L),0x368EC4D0L,(-1L),(-1L),0x368EC4D0L}},{{(-1L),(-1L),0x368EC4D0L,(-1L),(-1L),0x368EC4D0L},{(-1L),(-1L),0x368EC4D0L,(-1L),(-1L),0x368EC4D0L},{(-1L),(-1L),0x368EC4D0L,(-1L),(-1L),0x368EC4D0L},{(-1L),(-1L),0x368EC4D0L,(-1L),(-1L),0x368EC4D0L},{(-1L),(-1L),0x368EC4D0L,(-1L),(-1L),0x368EC4D0L}},{{(-1L),(-1L),0x368EC4D0L,(-1L),(-1L),0x368EC4D0L},{(-1L),(-1L),0x368EC4D0L,(-1L),(-1L),0x368EC4D0L},{(-1L),(-1L),0x368EC4D0L,(-1L),(-1L),0x368EC4D0L},{(-1L),(-1L),(-1L),0x72D2A599L,0x72D2A599L,(-1L)},{0x72D2A599L,0x72D2A599L,(-1L),0x72D2A599L,0x72D2A599L,(-1L)}},{{0x72D2A599L,0x72D2A599L,(-1L),0x72D2A599L,0x72D2A599L,(-1L)},{0x72D2A599L,0x72D2A599L,(-1L),0x72D2A599L,0x72D2A599L,(-1L)},{0x72D2A599L,0x72D2A599L,(-1L),0x72D2A599L,0x72D2A599L,(-1L)},{0x72D2A599L,0x72D2A599L,(-1L),0x72D2A599L,0x72D2A599L,(-1L)},{0x72D2A599L,0x72D2A599L,(-1L),0x72D2A599L,0x72D2A599L,(-1L)}}};
    int32_t *l_1051[6][7][2] = {{{&g_53,&l_1049},{(void*)0,&g_49},{&l_1045,&g_49},{&g_53,&l_1048},{&g_49,&l_1045},{&g_107,&g_2},{&l_1048,&g_1021}},{{&l_1050[3][3][3],&g_53},{&g_635,&g_1021},{&g_1021,&g_1021},{&l_1045,&g_49},{&g_107,&g_635},{&l_1049,&l_1048},{&g_1021,&l_1049}},{{&l_1045,&g_57},{&l_1045,&l_1049},{&g_1021,&l_1048},{&l_1049,&g_635},{&g_107,&g_49},{&l_1045,&g_1021},{&g_1021,&g_1021}},{{&g_635,&g_53},{&l_1050[3][3][3],&g_1021},{&l_1048,&g_2},{&g_107,&l_1045},{&g_49,&l_1048},{&g_53,&g_49},{&l_1045,&g_49}},{{(void*)0,&l_1049},{&g_53,&g_1021},{&l_1049,&l_1045},{&l_1049,&g_49},{&l_1048,&l_1050[3][3][3]},{&g_1021,&g_53},{&g_53,&g_53}},{{&g_1021,&l_1050[3][3][3]},{&l_1048,&g_49},{&l_1049,&l_1045},{&l_1049,&g_1021},{&g_53,&l_1049},{(void*)0,&g_49},{&l_1045,&g_49}}};
    uint32_t l_1052 = 0xCB4C4C02L;
    uint8_t l_1062 = 0xF0L;
    uint8_t *****l_1068 = &g_1039[3][0];
    const int64_t l_1143 = (-9L);
    const struct S0 ** const l_1155 = (void*)0;
    const struct S0 ** const *l_1154 = &l_1155;
    uint32_t l_1170 = 0x346658EDL;
    int8_t *l_1177 = (void*)0;
    int32_t ***l_1303 = (void*)0;
    int32_t ****l_1302 = &l_1303;
    int32_t *****l_1301[7][5] = {{&l_1302,&l_1302,&l_1302,&l_1302,&l_1302},{&l_1302,&l_1302,&l_1302,&l_1302,&l_1302},{&l_1302,&l_1302,&l_1302,&l_1302,&l_1302},{&l_1302,&l_1302,&l_1302,&l_1302,&l_1302},{&l_1302,&l_1302,&l_1302,&l_1302,&l_1302},{&l_1302,&l_1302,&l_1302,&l_1302,&l_1302},{&l_1302,&l_1302,&l_1302,&l_1302,&l_1302}};
    int16_t l_1337 = 0x5329L;
    uint32_t *l_1425 = &g_164[2];
    int i, j, k;
    (*l_1043) = l_1042;
    (*p_14) ^= ((l_1045 || p_15) <= ((l_1045 & (**g_1023)) & (~(l_1047 != (void*)0))));
    l_1052++;
    for (g_365.f1 = 0; (g_365.f1 < 7); g_365.f1 = safe_add_func_uint64_t_u_u(g_365.f1, 1))
    { 
        int8_t l_1057 = 0L;
        int32_t l_1060 = 1L;
        int32_t l_1061[3];
        uint32_t l_1065[4][1];
        int i, j;
        for (i = 0; i < 3; i++)
            l_1061[i] = 1L;
        for (i = 0; i < 4; i++)
        {
            for (j = 0; j < 1; j++)
                l_1065[i][j] = 4294967293UL;
        }
        if (l_1057)
            break;
        (**g_1026) ^= ((safe_sub_func_uint64_t_u_u(((void*)0 != &g_405), p_15)) == 0x989EL);
        l_1062++;
        (**g_1028) = (-1L);
        l_1065[0][0]++;
    }
    return (*p_14);
}



static int32_t * func_16(uint32_t  p_17, int32_t * const  p_18, int8_t  p_19, int64_t  p_20)
{ 
    int32_t ****l_1013 = (void*)0;
    int32_t *****l_1012 = &l_1013;
    int32_t * const ** const *l_1015 = &g_406;
    int32_t * const ** const **l_1014 = &l_1015;
    uint8_t ****l_1037 = (void*)0;
    uint8_t *****l_1038[1][6] = {{&g_747,&g_747,&g_747,&g_747,&g_747,&g_747}};
    union U1 *l_1040 = &g_112;
    union U1 *l_1041 = &g_112;
    int i, j;
    (**g_1023) = ((l_1012 == (g_1016 = l_1014)) != (((l_1037 != (g_1039[3][0] = l_1037)) , (l_1040 = l_1040)) == (l_1041 = l_1041)));
    return (*g_82);
}



static const uint8_t  func_26(struct S0  p_27, int32_t * p_28, int32_t * p_29, uint16_t  p_30, int32_t * p_31)
{ 
    int64_t l_721 = 0x1A171932FF98DC5ELL;
    uint64_t *l_722 = &g_112.f0.f1;
    uint64_t *l_723 = &g_112.f0.f1;
    uint64_t *l_724 = &g_71;
    int8_t *l_725 = &g_349;
    union U1 * const l_739[7][2][2] = {{{&g_112,&g_112},{&g_112,&g_112}},{{&g_112,&g_112},{&g_112,&g_112}},{{&g_112,&g_112},{&g_112,&g_112}},{{&g_112,&g_112},{&g_112,&g_112}},{{&g_112,&g_112},{&g_112,&g_112}},{{&g_112,&g_112},{&g_112,&g_112}},{{&g_112,&g_112},{&g_112,&g_112}}};
    union U1 * const *l_738 = &l_739[2][1][1];
    union U1 * const ** const l_737 = &l_738;
    uint8_t ***l_746 = &g_639[0][0];
    uint8_t ****l_745 = &l_746;
    int32_t l_793 = 0x020B2200L;
    int64_t l_795 = 0x6A01C7E47C619821LL;
    int32_t l_809 = (-1L);
    uint32_t l_812 = 0xA4CACD4CL;
    struct S0 l_814 = {0x79L,0UL};
    int32_t l_832 = 0xEBD13757L;
    int32_t l_833 = (-4L);
    int32_t l_834 = 0x9F92BD37L;
    int32_t l_836 = 1L;
    int32_t l_837 = 0x3D4B7818L;
    int32_t l_840[7][6] = {{(-1L),0x046F1F4AL,9L,0x940B1F3CL,0xE44CDC6FL,(-1L)},{0xF012A986L,(-1L),9L,(-1L),0xF012A986L,5L},{(-9L),(-1L),(-1L),0x7C9D91C4L,0xE44CDC6FL,0x7C9D91C4L},{(-9L),0x046F1F4AL,(-9L),(-1L),(-1L),0x7C9D91C4L},{0xF012A986L,5L,(-1L),0x940B1F3CL,(-1L),5L},{(-1L),0x046F1F4AL,9L,0x940B1F3CL,0xE44CDC6FL,(-1L)},{0xF012A986L,(-1L),9L,(-1L),0xF012A986L,5L}};
    union U1 *l_931 = &g_112;
    union U1 **l_930 = &l_931;
    uint64_t * const *l_949 = &l_722;
    uint64_t * const **l_948 = &l_949;
    uint64_t * const ***l_947 = &l_948;
    int i, j, k;
    if ((((safe_mod_func_int64_t_s_s((safe_sub_func_int32_t_s_s(((safe_sub_func_int16_t_s_s((safe_mod_func_int16_t_s_s((!(safe_mod_func_uint32_t_u_u((safe_sub_func_int8_t_s_s(((*l_725) |= (+((*l_724) ^= l_721))), ((((0x2537L < ((safe_mod_func_int64_t_s_s((safe_sub_func_uint64_t_u_u(((safe_unary_minus_func_uint64_t_u((safe_mul_func_int8_t_s_s((p_27.f0 != ((void*)0 == l_737)), (0xD7L || ((((***l_737) , g_112.f1) ^ 0xF21ACC3EL) , g_684[3][3])))))) != 0xB85CL), 18446744073709551615UL)), 1L)) && (*g_83))) == (**g_407)) , g_740) == &l_737))), l_721))), 0xF6FCL)), l_721)) , (-1L)), l_721)), l_721)) > 1L) , (*p_29)))
    { 
        uint64_t **l_751 = (void*)0;
        uint64_t ***l_750 = &l_751;
        uint64_t ****l_749 = &l_750;
        for (p_27.f0 = 0; (p_27.f0 > (-12)); --p_27.f0)
        { 
            g_747 = l_745;
            return l_721;
        }
        (*l_749) = (void*)0;
    }
    else
    { 
        uint8_t l_790 = 0xBBL;
        int32_t l_797[5];
        uint64_t *l_798 = &g_358;
        uint64_t * const ** const l_819 = (void*)0;
        int i;
        for (i = 0; i < 5; i++)
            l_797[i] = 0L;
        for (g_195 = 0; (g_195 == 1); ++g_195)
        { 
            uint64_t **l_757 = &l_723;
            uint64_t ***l_756[4];
            uint64_t ****l_758 = &l_756[3];
            union U1 l_767[7][6][2] = {{{{{0x25L,0x483EEB86F7745285LL}},{{0x25L,0x483EEB86F7745285LL}}},{{{0x25L,0x483EEB86F7745285LL}},{{0x25L,0x483EEB86F7745285LL}}},{{{0x25L,0x483EEB86F7745285LL}},{{0x25L,0x483EEB86F7745285LL}}},{{{0x25L,0x483EEB86F7745285LL}},{{0x25L,0x483EEB86F7745285LL}}},{{{0x25L,0x483EEB86F7745285LL}},{{0x25L,0x483EEB86F7745285LL}}},{{{0x25L,0x483EEB86F7745285LL}},{{0x25L,0x483EEB86F7745285LL}}}},{{{{0x25L,0x483EEB86F7745285LL}},{{0x25L,0x483EEB86F7745285LL}}},{{{0x25L,0x483EEB86F7745285LL}},{{0x25L,0x483EEB86F7745285LL}}},{{{0x25L,0x483EEB86F7745285LL}},{{0x25L,0x483EEB86F7745285LL}}},{{{0x25L,0x483EEB86F7745285LL}},{{0x25L,0x483EEB86F7745285LL}}},{{{0x25L,0x483EEB86F7745285LL}},{{0x25L,0x483EEB86F7745285LL}}},{{{0x25L,0x483EEB86F7745285LL}},{{0x25L,0x483EEB86F7745285LL}}}},{{{{0x25L,0x483EEB86F7745285LL}},{{0x25L,0x483EEB86F7745285LL}}},{{{0x25L,0x483EEB86F7745285LL}},{{0x25L,0x483EEB86F7745285LL}}},{{{0x25L,0x483EEB86F7745285LL}},{{0x25L,0x483EEB86F7745285LL}}},{{{0x25L,0x483EEB86F7745285LL}},{{0x25L,0x483EEB86F7745285LL}}},{{{0x25L,0x483EEB86F7745285LL}},{{0x25L,0x483EEB86F7745285LL}}},{{{0x25L,0x483EEB86F7745285LL}},{{0x25L,0x483EEB86F7745285LL}}}},{{{{0x25L,0x483EEB86F7745285LL}},{{0x25L,0x483EEB86F7745285LL}}},{{{0x25L,0x483EEB86F7745285LL}},{{0x25L,0x483EEB86F7745285LL}}},{{{0x25L,0x483EEB86F7745285LL}},{{0x25L,0x483EEB86F7745285LL}}},{{{0x25L,0x483EEB86F7745285LL}},{{0x25L,0x483EEB86F7745285LL}}},{{{0x25L,0x483EEB86F7745285LL}},{{0x25L,0x483EEB86F7745285LL}}},{{{0x25L,0x483EEB86F7745285LL}},{{0x25L,0x483EEB86F7745285LL}}}},{{{{0x25L,0x483EEB86F7745285LL}},{{0x25L,0x483EEB86F7745285LL}}},{{{0x25L,0x483EEB86F7745285LL}},{{0x25L,0x483EEB86F7745285LL}}},{{{0x25L,0x483EEB86F7745285LL}},{{0x25L,0x483EEB86F7745285LL}}},{{{0x25L,0x483EEB86F7745285LL}},{{0x25L,0x483EEB86F7745285LL}}},{{{0x25L,0x483EEB86F7745285LL}},{{0x25L,0x483EEB86F7745285LL}}},{{{0x25L,0x483EEB86F7745285LL}},{{0x25L,0x483EEB86F7745285LL}}}},{{{{0x25L,0x483EEB86F7745285LL}},{{0x25L,0x483EEB86F7745285LL}}},{{{0x25L,0x483EEB86F7745285LL}},{{0x25L,0x483EEB86F7745285LL}}},{{{0x25L,0x483EEB86F7745285LL}},{{0x25L,0x483EEB86F7745285LL}}},{{{0x25L,0x483EEB86F7745285LL}},{{0x25L,0x483EEB86F7745285LL}}},{{{0x25L,0x483EEB86F7745285LL}},{{0x25L,0x483EEB86F7745285LL}}},{{{0x25L,0x483EEB86F7745285LL}},{{0x25L,0x483EEB86F7745285LL}}}},{{{{0x25L,0x483EEB86F7745285LL}},{{0x25L,0x483EEB86F7745285LL}}},{{{0x25L,0x483EEB86F7745285LL}},{{0x25L,0x483EEB86F7745285LL}}},{{{0x25L,0x483EEB86F7745285LL}},{{0x25L,0x483EEB86F7745285LL}}},{{{0x25L,0x483EEB86F7745285LL}},{{0x25L,0x483EEB86F7745285LL}}},{{{0x25L,0x483EEB86F7745285LL}},{{0x25L,0x483EEB86F7745285LL}}},{{{0x25L,0x483EEB86F7745285LL}},{{0x25L,0x483EEB86F7745285LL}}}}};
            int i, j, k;
            for (i = 0; i < 4; i++)
                l_756[i] = &l_757;
            (*p_31) ^= ((safe_mod_func_int64_t_s_s((((*l_758) = l_756[3]) == (((safe_lshift_func_uint8_t_u_s(0xBBL, (safe_rshift_func_int16_t_s_s((safe_sub_func_int64_t_s_s(g_358, ((*l_722) = p_30))), g_119)))) >= (safe_sub_func_int32_t_s_s((l_767[0][5][1] , (safe_div_func_uint16_t_u_u(l_721, g_193[1]))), g_684[0][3]))) , (void*)0)), l_721)) && p_27.f0);
            g_770 = (**g_406);
            l_767[0][5][1].f0 = p_27;
            (*p_28) ^= (*p_29);
        }
        for (p_27.f1 = 0; (p_27.f1 <= 3); p_27.f1 += 1)
        { 
            union U1 l_775 = {{0x0DL,0x334A9F6CFFCECFF8LL}};
            uint32_t l_785 = 1UL;
            int16_t *l_794 = &g_526[1];
            uint16_t l_796 = 0x4B10L;
            const int64_t l_810 = (-1L);
            int32_t l_811 = 0x15D100FBL;
            int i;
            for (g_298 = 0; (g_298 <= 5); g_298 += 1)
            { 
                int i;
                return g_581[p_27.f1];
            }
            if ((safe_add_func_int64_t_s_s(g_581[p_27.f1], (safe_div_func_uint64_t_u_u(((g_636[5] , l_775) , (safe_sub_func_uint8_t_u_u(((((((l_797[2] ^= (safe_mod_func_int32_t_s_s((safe_unary_minus_func_uint16_t_u((safe_rshift_func_int16_t_s_u((p_27.f0 , (((safe_add_func_int64_t_s_s(l_785, ((*l_724)--))) < (safe_lshift_func_int16_t_s_s((g_193[(p_27.f1 + 2)] = l_790), (((*l_794) = (safe_div_func_int8_t_s_s((l_775.f0 , 0x11L), l_793))) == l_795)))) && l_796)), 1)))), g_635))) ^ p_27.f1) || g_57) , (void*)0) == l_798) <= p_27.f0), p_27.f0))), 0x1A2A3A1AEA2D3ADELL)))))
            { 
                return l_721;
            }
            else
            { 
                int16_t *l_806 = &g_193[4];
                int32_t l_807 = 5L;
                uint32_t *l_808[4] = {&g_565,&g_565,&g_565,&g_565};
                struct S0 l_813 = {0x63L,0xED7C079769FF54B8LL};
                uint64_t ****l_822 = &g_820;
                int i;
                l_814 = l_813;
                (*p_31) = (p_27.f1 , (((*l_806) = 0L) != (g_581[p_27.f1] &= (((safe_add_func_int8_t_s_s((safe_mul_func_uint8_t_u_u(((void*)0 == l_819), (l_819 == ((*l_822) = g_820)))), ((safe_sub_func_int16_t_s_s(((((((((safe_add_func_uint64_t_u_u((p_27.f0 == 0xAEC8L), p_27.f0)) == p_27.f1) >= g_571[2]) > p_30) != 0L) , p_27.f0) || (-1L)) || l_775.f1), l_797[2])) , g_636[0]))) | (**g_617)) < p_27.f0))));
                return l_793;
            }
        }
    }
    for (p_30 = 14; (p_30 == 35); p_30++)
    { 
        int32_t l_829 = 0x5120F688L;
        int32_t *l_830 = (void*)0;
        int32_t *l_831[6] = {(void*)0,&g_57,&g_57,(void*)0,&g_57,&g_57};
        int64_t l_835 = 0xAB969DB850869115LL;
        int32_t l_839 = 0x7EB1CF75L;
        int64_t *l_855 = (void*)0;
        int64_t *l_856[3];
        uint32_t l_857 = 4UL;
        int i;
        for (i = 0; i < 3; i++)
            l_856[i] = &g_530;
        g_842[6]++;
        l_837 = ((l_836 | (safe_div_func_int32_t_s_s(((*p_31) = ((*g_83) >= ((((safe_sub_func_uint8_t_u_u((((safe_mod_func_uint64_t_u_u(((safe_sub_func_int64_t_s_s(l_833, (safe_add_func_uint8_t_u_u(0x26L, ((l_840[2][2] |= p_30) , l_857))))) , l_833), p_27.f1)) < p_27.f0) , l_840[5][1]), l_812)) || 0x51C7L) >= p_30) || p_30))), 0x6E9352E1L))) <= 0x45L);
    }
    if ((*p_31))
    { 
        struct S0 l_858[7] = {{0xC3L,0UL},{0x70L,0UL},{0x70L,0UL},{0xC3L,0UL},{0x70L,0UL},{0x70L,0UL},{0xC3L,0UL}};
        int i;
        (*g_240) = l_858[6];
        (*p_31) = (-5L);
    }
    else
    { 
        int16_t *l_865 = &g_526[1];
        int32_t l_866 = 0x6DE923E9L;
        int32_t l_867 = (-9L);
        union U1 *****l_868[1];
        struct S0 l_874 = {0xCBL,18446744073709551615UL};
        uint8_t **l_902 = &g_640;
        int32_t l_903[7];
        int64_t l_986 = 1L;
        int i;
        for (i = 0; i < 1; i++)
            l_868[i] = (void*)0;
        for (i = 0; i < 7; i++)
            l_903[i] = 0xF4655A0CL;
        (*p_31) &= (g_119 , (((((safe_rshift_func_uint16_t_u_s(p_27.f0, (l_866 = (safe_sub_func_uint8_t_u_u(((0x2DL <= (p_30 != g_161)) < (((safe_mod_func_int16_t_s_s(((*l_865) = (g_103 , g_581[3])), p_30)) , p_30) >= l_866)), l_721))))) > 0xEAD66D3353D2BFFCLL) != l_836) == l_834) > l_867));
        g_869[1] = l_868[0];
    }
    return l_814.f0;
}



static struct S0  func_32(int32_t * p_33, int32_t * p_34)
{ 
    int32_t *l_72 = &g_2;
    const uint64_t *l_116[4] = {&g_112.f0.f1,&g_112.f0.f1,&g_112.f0.f1,&g_112.f0.f1};
    int8_t l_157 = 0x7FL;
    int32_t l_160 = 0xEDEBB4D1L;
    int32_t ***l_173[3][3][3] = {{{&g_82,&g_82,&g_82},{&g_82,&g_82,&g_82},{&g_82,&g_82,&g_82}},{{&g_82,&g_82,&g_82},{&g_82,&g_82,&g_82},{&g_82,&g_82,&g_82}},{{&g_82,&g_82,&g_82},{&g_82,&g_82,&g_82},{&g_82,&g_82,&g_82}}};
    uint64_t *l_208 = (void*)0;
    uint64_t *l_209 = &g_71;
    int8_t l_215 = 0x3CL;
    const uint64_t l_220 = 3UL;
    int16_t *l_221 = &g_198;
    int16_t *l_222 = &g_195;
    int16_t *l_223 = (void*)0;
    int16_t *l_224[1];
    struct S0 l_237 = {0L,0xC25036159998129CLL};
    struct S0 *l_245 = (void*)0;
    const int32_t *l_261[7];
    const int32_t **l_260[1][4][6] = {{{&l_261[3],&l_261[3],&l_261[3],(void*)0,&l_261[3],&l_261[3]},{&l_261[3],&l_261[3],(void*)0,(void*)0,&l_261[3],&l_261[3]},{&l_261[3],&l_261[3],&l_261[3],&l_261[6],&l_261[3],&l_261[3]},{(void*)0,&l_261[6],&l_261[6],(void*)0,&l_261[3],(void*)0}}};
    const int32_t ***l_259 = &l_260[0][0][0];
    union U1 l_272 = {{-1L,18446744073709551615UL}};
    int32_t l_274[6][3] = {{0x6EDB1092L,8L,0x6EDB1092L},{8L,0x61EA9DAAL,0L},{8L,8L,0x61EA9DAAL},{0x6EDB1092L,0x61EA9DAAL,0x61EA9DAAL},{0x61EA9DAAL,8L,0L},{0x6EDB1092L,8L,0x6EDB1092L}};
    uint64_t l_293 = 2UL;
    const uint64_t l_323[4] = {0x8DB4B3ED0F16C230LL,0x8DB4B3ED0F16C230LL,0x8DB4B3ED0F16C230LL,0x8DB4B3ED0F16C230LL};
    uint16_t l_333 = 0x949DL;
    int32_t l_367 = 0x0023740FL;
    struct S0 l_638 = {0x05L,0UL};
    int32_t l_679 = 0x7AE5BBB1L;
    uint32_t l_700[6][3][4] = {{{8UL,0x81CEE52FL,0xCBE910AAL,0UL},{0x9C593780L,2UL,0x4948A77BL,0x929CA0BBL},{0UL,0x6A3DFAFBL,18446744073709551615UL,0x6A3DFAFBL}},{{0UL,0x4948A77BL,0xD02FF824L,18446744073709551606UL},{0x4948A77BL,2UL,0x9C593780L,0x334C5D3AL},{18446744073709551615UL,8UL,18446744073709551607UL,18446744073709551615UL}},{{18446744073709551615UL,0x929CA0BBL,0x9C593780L,0xB649CEFEL},{0x4948A77BL,18446744073709551615UL,0xD02FF824L,0UL},{0UL,1UL,18446744073709551615UL,3UL}},{{0UL,0xCBE910AAL,0x4948A77BL,0xB649CEFEL},{0x9C593780L,18446744073709551606UL,0xCBE910AAL,0xCBE910AAL},{8UL,8UL,18446744073709551612UL,0UL}},{{0xD98EC9D3L,18446744073709551613UL,0x4948A77BL,18446744073709551606UL},{0xD02FF824L,0x6A3DFAFBL,0x334C5D3AL,0x4948A77BL},{0UL,0x6A3DFAFBL,1UL,18446744073709551606UL}},{{0x6A3DFAFBL,18446744073709551613UL,0x9C593780L,0UL},{0xCBE910AAL,8UL,0x81CEE52FL,0xCBE910AAL},{18446744073709551615UL,18446744073709551606UL,7UL,0xB649CEFEL}}};
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_224[i] = &g_193[4];
    for (i = 0; i < 7; i++)
        l_261[i] = &g_2;
    for (g_49 = (-10); (g_49 != (-10)); g_49 = safe_add_func_uint8_t_u_u(g_49, 7))
    { 
        int64_t l_108 = 1L;
        int32_t l_110 = 0x142722C0L;
        uint64_t *l_120[5];
        int32_t **l_145[3][3][2] = {{{&g_83,(void*)0},{&l_72,&g_83},{&g_83,&l_72}},{{(void*)0,&g_83},{(void*)0,&l_72},{&g_83,&g_83}},{{&l_72,(void*)0},{&g_83,(void*)0},{&l_72,&g_83}}};
        int8_t l_155 = 0x35L;
        int i, j, k;
        for (i = 0; i < 5; i++)
            l_120[i] = (void*)0;
        for (g_53 = 0; (g_53 == (-27)); g_53 = safe_sub_func_uint32_t_u_u(g_53, 1))
        { 
            int32_t *l_56 = &g_53;
            int64_t l_105[6] = {0x42272BDBE1E68A7DLL,0x42272BDBE1E68A7DLL,0x42272BDBE1E68A7DLL,0x42272BDBE1E68A7DLL,0x42272BDBE1E68A7DLL,0x42272BDBE1E68A7DLL};
            int32_t l_111[6][4][1] = {{{1L},{1L},{1L},{1L}},{{1L},{1L},{1L},{1L}},{{1L},{1L},{1L},{1L}},{{1L},{1L},{1L},{1L}},{{1L},{1L},{1L},{1L}},{{1L},{1L},{1L},{1L}}};
            int32_t **l_122 = &l_56;
            uint64_t *l_132 = &g_112.f0.f1;
            int32_t l_179[6][6] = {{0xBCA523A4L,7L,4L,0xA31D65C5L,4L,7L},{0xBCA523A4L,7L,4L,0xA31D65C5L,4L,7L},{0xBCA523A4L,7L,4L,0xA31D65C5L,4L,7L},{0xBCA523A4L,7L,4L,0xA31D65C5L,4L,7L},{0xBCA523A4L,7L,4L,0xA31D65C5L,4L,7L},{0xBCA523A4L,7L,4L,0xA31D65C5L,4L,7L}};
            int8_t l_200 = 1L;
            int i, j, k;
            if ((&g_49 != l_56))
            { 
                int32_t l_70 = 0x9523668FL;
                for (g_57 = (-25); (g_57 <= 13); g_57++)
                { 
                    int32_t **l_67 = &l_56;
                    int32_t ***l_84 = (void*)0;
                    int32_t ***l_85 = &g_82;
                    uint16_t *l_100 = &g_101;
                    int64_t *l_102[4] = {&g_103,&g_103,&g_103,&g_103};
                    uint64_t *l_104[2][6] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
                    int32_t *l_106 = &g_107;
                    int i, j;
                    g_71 &= (+(safe_rshift_func_int8_t_s_u(((safe_sub_func_int16_t_s_s((g_57 > (g_53 > ((((g_2 < (((safe_div_func_int16_t_s_s((l_67 != ((g_2 & (g_57 <= ((safe_sub_func_uint64_t_u_u((((-3L) || 1L) , g_49), (*l_56))) & l_70))) , l_67)), g_2)) > (*l_56)) ^ (*l_56))) && l_70) , &g_53) == &g_53))), (*l_56))) ^ g_53), l_70)));
                    l_56 = l_72;
                    if ((*p_34))
                        continue;
                    (*l_106) = (((((safe_lshift_func_uint8_t_u_s((((l_70 = (safe_add_func_int64_t_s_s((g_103 = (!((l_56 != ((safe_div_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_u((((*l_85) = g_82) != &p_34), 6)), (safe_mul_func_uint16_t_u_u(((*l_100) = (((((void*)0 == &l_72) , (g_99 &= ((~(safe_rshift_func_uint16_t_u_s(((((safe_sub_func_int64_t_s_s((safe_div_func_int16_t_s_s(((((safe_rshift_func_int8_t_s_u((*l_56), 0)) == (safe_div_func_uint64_t_u_u((0x0FADE0F7L ^ (*g_83)), l_70))) , g_2) == 0xD62BAD2CC01E3B40LL), (*l_72))), 0xBEE99B4D81485852LL)) | 1UL) , 1UL) != g_53), (*l_72)))) <= 0x47519AD364BFA3C5LL))) < 1UL) <= (*l_72))), (*l_72))))) , (void*)0)) > 2L))), 1UL))) , (*g_83)) , (*l_56)), (*l_56))) <= 0L) < l_105[1]) | 0UL) < (*l_72));
                    l_108 = (*p_34);
                }
            }
            else
            { 
                int64_t *l_109[2][7] = {{(void*)0,&l_105[1],(void*)0,(void*)0,&l_108,&l_108,(void*)0},{(void*)0,&l_105[1],(void*)0,(void*)0,&l_108,&l_108,(void*)0}};
                int32_t l_125 = 0xD4AC9C96L;
                int i, j;
                if ((*g_83))
                    break;
                if ((*p_33))
                    continue;
                l_111[2][2][0] = (0x2FFF4405564AC20FLL != (l_110 = 0xB875039639DBCFCCLL));
                for (g_107 = 1; (g_107 <= 5); g_107 += 1)
                { 
                    int32_t *l_113 = &l_111[1][2][0];
                    const uint64_t **l_117[5];
                    uint64_t **l_121 = &l_120[1];
                    int i;
                    for (i = 0; i < 5; i++)
                        l_117[i] = &l_116[1];
                    (*l_113) ^= (l_110 ^= (g_112 , (-1L)));
                    (*l_113) = (l_110 | ((g_118 = l_116[0]) == ((*l_121) = l_120[3])));
                    (*l_113) = ((*l_72) != ((((((l_122 = &l_72) == &g_83) , (safe_mul_func_int8_t_s_s((l_125 , (((((((&g_101 == (void*)0) >= (safe_add_func_int32_t_s_s((safe_add_func_int8_t_s_s((safe_lshift_func_uint16_t_u_u(((g_112.f0 , l_120[3]) != l_132), (*l_72))), g_57)), (*g_83)))) , (*l_113)) || (*p_33)) ^ l_108) < l_108) < g_99)), l_108))) == (*l_72)) > (*l_72)) ^ 0x22502BEA846250C5LL));
                }
            }
            for (g_57 = 0; (g_57 <= 4); g_57 += 1)
            { 
                int32_t ***l_143 = (void*)0;
                int32_t ***l_144 = &l_122;
                struct S0 l_167 = {8L,0x17FA558AB68CB1B8LL};
                int i;
                if ((safe_lshift_func_uint8_t_u_u((((safe_mul_func_int16_t_s_s((safe_lshift_func_int8_t_s_u((safe_div_func_uint8_t_u_u(((4UL >= (((*l_144) = &p_34) != l_145[0][2][0])) >= (safe_lshift_func_int16_t_s_s((+(safe_mod_func_int32_t_s_s(6L, (safe_mul_func_int8_t_s_s(((l_105[(g_57 + 1)] || (-1L)) >= (safe_sub_func_uint64_t_u_u(g_2, g_112.f1))), g_107))))), 15))), (*l_56))), 6)), 0x57B4L)) <= g_53) , g_99), l_155)))
                { 
                    int64_t l_156 = (-6L);
                    int32_t l_158 = 0L;
                    int32_t l_159 = (-5L);
                    g_161--;
                    g_164[2]--;
                    if ((*g_83))
                        continue;
                    if ((*p_33))
                        break;
                }
                else
                { 
                    return l_167;
                }
            }
            for (g_112.f0.f1 = 0; (g_112.f0.f1 != 44); g_112.f0.f1 = safe_add_func_uint64_t_u_u(g_112.f0.f1, 4))
            { 
                int8_t l_170 = 7L;
                uint8_t *l_174 = &g_175[4][5];
                int32_t l_178 = 0L;
                uint64_t **l_189 = &l_120[3];
                int16_t *l_192 = &g_193[4];
                int16_t *l_194 = &g_195;
                int16_t *l_196 = (void*)0;
                int16_t *l_197[7];
                uint32_t *l_199[7];
                int i;
                for (i = 0; i < 7; i++)
                    l_197[i] = &g_198;
                for (i = 0; i < 7; i++)
                    l_199[i] = &g_161;
                l_178 ^= ((--g_71) >= (((g_112 , &g_82) != l_173[0][2][1]) != ((*l_174)++)));
                (*g_82) = (*l_122);
                if (l_179[0][2])
                    break;
                g_57 |= ((((((safe_lshift_func_uint16_t_u_s((0x99L & ((safe_add_func_int32_t_s_s(((g_161 = (safe_add_func_uint32_t_u_u(((!((g_198 = (g_112.f0 , ((1L == ((*l_194) = ((&g_118 != l_189) || ((*l_192) = ((safe_sub_func_int64_t_s_s(g_71, (((**l_122) , (*l_56)) <= 0x32L))) == g_53))))) < 65535UL))) >= g_175[0][1])) & g_112.f2), (**l_122)))) > l_170), 0x1016E8ACL)) > l_200)), l_178)) == (*l_72)) == l_178) , l_170) > (-1L)) || (-1L));
            }
        }
    }
    if ((+(safe_rshift_func_int16_t_s_s((g_193[4] = (safe_div_func_uint8_t_u_u((safe_sub_func_uint64_t_u_u(((*l_209) = g_119), ((safe_add_func_int32_t_s_s((*l_72), (((~((*p_34) = (0x0BB03CE5L || (safe_mul_func_int8_t_s_s(((3L >= ((*l_222) = (l_215 <= (safe_sub_func_int32_t_s_s((((*l_221) = (safe_mod_func_int32_t_s_s((((l_220 , 0xD9266CD422BFBABALL) == 1UL) | 0xC1L), 0x0FC74B46L))) , (*p_33)), (*p_34)))))) >= 0L), (-10L)))))) < 251UL) != g_161))) && 0xBDDCB5EBL))), g_164[4]))), 3))))
    { 
        uint16_t l_225 = 65529UL;
        int32_t l_238[1][2];
        const uint64_t l_256 = 0xFDA3CCD9C671D187LL;
        int32_t *** const l_263 = &g_82;
        uint32_t l_264 = 0x111EAA1AL;
        int16_t *l_273 = (void*)0;
        uint16_t *l_288[7];
        uint8_t * const l_301 = &g_298;
        struct S0 l_312 = {1L,5UL};
        uint8_t l_316 = 1UL;
        int32_t l_357 = 0x56C7C8E0L;
        uint32_t *l_375 = &g_161;
        int8_t *l_380 = &g_112.f0.f0;
        uint8_t l_384 = 0x94L;
        uint16_t *l_416 = &g_101;
        int i, j;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 2; j++)
                l_238[i][j] = 1L;
        }
        for (i = 0; i < 7; i++)
            l_288[i] = &g_101;
        --l_225;
        (*p_34) |= (g_112.f0.f0 == 0x40F3676AL);
        for (l_225 = 2; (l_225 == 54); l_225++)
        { 
            uint64_t l_239 = 0xBCADEBA3FE0BE34ELL;
            const int32_t ****l_262 = &l_259;
            struct S0 l_267 = {-1L,1UL};
            union U1 l_271 = {{-1L,0UL}};
            int32_t l_292[3][4] = {{7L,7L,7L,7L},{7L,7L,7L,7L},{7L,7L,7L,7L}};
            int16_t l_315 = (-1L);
            struct S0 **l_343[1];
            int i, j;
            for (i = 0; i < 1; i++)
                l_343[i] = &l_245;
            for (g_49 = 0; (g_49 <= (-5)); g_49 = safe_sub_func_uint32_t_u_u(g_49, 1))
            { 
                uint16_t l_236 = 65535UL;
                struct S0 **l_241 = &g_240;
                struct S0 **l_242 = (void*)0;
                struct S0 *l_244[3];
                struct S0 **l_243[2][7][4] = {{{&l_244[0],&l_244[2],&l_244[0],&l_244[2]},{&l_244[0],&l_244[2],&l_244[0],&l_244[2]},{&l_244[0],&l_244[2],&l_244[0],&l_244[2]},{&l_244[0],&l_244[2],&l_244[0],&l_244[2]},{&l_244[0],&l_244[2],&l_244[0],&l_244[2]},{&l_244[0],&l_244[2],&l_244[0],&l_244[2]},{&l_244[0],&l_244[2],&l_244[0],&l_244[2]}},{{&l_244[0],&l_244[2],&l_244[0],&l_244[2]},{&l_244[0],&l_244[2],&l_244[0],&l_244[2]},{&l_244[0],&l_244[2],&l_244[0],&l_244[2]},{&l_244[0],&l_244[2],&l_244[0],&l_244[2]},{&l_244[0],&l_244[2],&l_244[0],&l_244[2]},{&l_244[0],&l_244[2],&l_244[0],&l_244[2]},{&l_244[0],&l_244[2],&l_244[0],&l_244[2]}}};
                int i, j, k;
                for (i = 0; i < 3; i++)
                    l_244[i] = &l_237;
                l_239 = (safe_sub_func_int32_t_s_s((*l_72), ((0x9C788934L == (safe_mul_func_int32_t_s_s(l_236, ((g_103 ^= g_195) > ((l_237 , 1UL) || (l_238[0][0] = (*p_34))))))) , 0x5780539EL)));
                l_245 = ((*l_241) = g_240);
            }
        }
        if ((safe_lshift_func_int8_t_s_s((safe_add_func_int8_t_s_s(((*l_380) &= (0L >= ((+((g_379 = (((safe_add_func_uint32_t_u_u((0xD1AF3A4FL < 4294967295UL), (1UL > (g_101 >= (((*l_375)++) ^ g_193[3]))))) | (g_378 &= ((1L <= 0x3EE53BEDF84B7907LL) , (***l_263)))) , &g_71)) == (void*)0)) && 0x7E2C166499E2A42ALL))), 0xC3L)), 1)))
        { 
            int16_t l_383 = 0x0A56L;
            uint64_t l_399 = 0x510060A83E5F9AAELL;
            uint32_t l_400 = 4UL;
            if (((((((((safe_mod_func_uint32_t_u_u(((l_383 != (l_384 = 65528UL)) ^ ((((safe_rshift_func_uint8_t_u_u((((*l_380) = (safe_rshift_func_int8_t_s_u((safe_lshift_func_uint16_t_u_s((safe_sub_func_uint64_t_u_u((~(***l_263)), (safe_add_func_int8_t_s_s((safe_mul_func_int16_t_s_s(l_383, (***l_263))), ((~(((((l_399 <= 0xD2L) , g_164[2]) | 0xF71BL) , l_400) > 1UL)) >= g_164[0]))))), 3)), 3))) && g_112.f2), g_119)) != l_383) <= l_399) > (*l_72))), (**g_82))) <= l_399) >= g_53) , g_193[4]) , (***l_263)) , g_175[4][3]) <= 0x1842E83CD52AF359LL) <= 0x4A3A9000L))
            { 
                p_33 = (*g_82);
            }
            else
            { 
                return l_312;
            }
        }
        else
        { 
            const uint32_t l_414 = 0UL;
            int16_t l_415[6] = {9L,9L,(-9L),9L,9L,(-9L)};
            int i;
            l_238[0][0] |= (safe_sub_func_int8_t_s_s((-3L), (safe_sub_func_uint32_t_u_u((g_405 == &l_263), (safe_mod_func_uint64_t_u_u((safe_mod_func_uint32_t_u_u(((*l_375) = ((249UL | (safe_div_func_int16_t_s_s(l_414, (g_2 ^ (l_415[5] == g_198))))) == (*p_34))), 4294967290UL)), l_414))))));
        }
        (*p_34) = ((void*)0 != l_416);
    }
    else
    { 
        struct S0 l_422[4] = {{1L,0xEE1D05D98FEF239FLL},{1L,0xEE1D05D98FEF239FLL},{1L,0xEE1D05D98FEF239FLL},{1L,0xEE1D05D98FEF239FLL}};
        uint8_t *l_448 = &g_175[0][0];
        struct S0 l_451 = {0xFAL,18446744073709551615UL};
        uint64_t * const l_460 = &g_461;
        uint64_t * const *l_459 = &l_460;
        int32_t l_520 = 0L;
        int32_t l_521 = 0xBE682127L;
        int32_t l_523 = (-1L);
        int32_t l_527 = 0L;
        int32_t l_528 = 0x87B35AFDL;
        struct S0 **l_541[7][6][2] = {{{(void*)0,&g_240},{(void*)0,&g_240},{&g_240,&g_240},{&g_240,&g_240},{&l_245,&g_240},{&g_240,(void*)0}},{{(void*)0,&l_245},{&l_245,&g_240},{&l_245,&g_240},{&l_245,&l_245},{(void*)0,(void*)0},{&g_240,&g_240}},{{&l_245,&g_240},{&g_240,&g_240},{&g_240,&g_240},{(void*)0,&g_240},{(void*)0,&g_240},{&g_240,&g_240}},{{&g_240,&g_240},{&l_245,&g_240},{&g_240,(void*)0},{(void*)0,&l_245},{&l_245,&g_240},{&l_245,&g_240}},{{&l_245,&l_245},{(void*)0,(void*)0},{&g_240,&g_240},{&l_245,&g_240},{&g_240,&g_240},{&g_240,&g_240}},{{(void*)0,&g_240},{(void*)0,&g_240},{&g_240,&g_240},{&g_240,&g_240},{&l_245,&g_240},{&g_240,(void*)0}},{{(void*)0,&l_245},{&l_245,&g_240},{&l_245,&g_240},{&l_245,&l_245},{(void*)0,(void*)0},{&g_240,&g_240}}};
        int32_t ****l_558 = &l_173[0][2][1];
        const int32_t *l_593[5];
        const int32_t *l_595 = &l_520;
        uint16_t l_642 = 0x6033L;
        const int32_t **l_660 = (void*)0;
        uint32_t l_661 = 3UL;
        int32_t l_701 = 0x457C9464L;
        int i, j, k;
        for (i = 0; i < 5; i++)
            l_593[i] = &g_594;
        for (g_112.f0.f1 = 1; (g_112.f0.f1 <= 5); g_112.f0.f1 += 1)
        { 
            uint16_t l_419[2][7];
            int32_t *l_473 = &g_53;
            int i, j;
            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 7; j++)
                    l_419[i][j] = 0x7467L;
            }
            if (g_193[g_112.f0.f1])
                break;
            for (g_57 = 0; (g_57 <= 0); g_57 += 1)
            { 
                struct S0 *l_423 = &l_422[3];
                int64_t *l_430 = &g_103;
                const uint8_t *l_449 = &g_175[3][3];
                uint32_t l_450 = 0x08813479L;
                uint16_t l_472 = 0x6FC8L;
                int i, j;
                (*p_34) &= l_274[g_112.f0.f1][g_57];
                for (l_237.f0 = 0; (l_237.f0 <= 0); l_237.f0 += 1)
                { 
                    const struct S0 *l_418 = &g_365;
                    const struct S0 **l_417 = &l_418;
                    (*g_82) = p_34;
                    (*l_417) = (void*)0;
                    l_419[1][6]++;
                }
                (*l_423) = l_422[3];
                if ((((((((safe_mul_func_int16_t_s_s((((++g_164[2]) , ((safe_rshift_func_int8_t_s_s((((l_422[1] , &g_118) == (((((*l_430) = l_274[g_112.f0.f1][g_57]) != g_365.f0) , (safe_mul_func_int8_t_s_s((((safe_mod_func_int8_t_s_s((safe_mul_func_uint16_t_u_u((((((safe_sub_func_uint8_t_u_u(((safe_add_func_int8_t_s_s((((safe_mul_func_uint16_t_u_u((safe_mod_func_int16_t_s_s(0x2149L, (((safe_mod_func_uint32_t_u_u((!g_365.f1), 2UL)) | 255UL) , g_71))), g_112.f1)) >= 0L) <= 0xCD95A64DL), 0UL)) ^ g_193[g_112.f0.f1]), g_99)) , g_195) <= l_419[1][0]) <= g_101) & 7UL), 0xC33BL)), l_422[3].f1)) != 0x0CEEA609L) , g_365.f1), l_274[g_112.f0.f1][(g_57 + 2)]))) , &g_118)) , l_422[3].f1), g_349)) , l_448)) == l_449), l_274[g_112.f0.f1][(g_57 + 2)])) == 0xC2L) == l_450) != l_422[3].f1) >= g_175[3][3]) || l_422[3].f1) , (*p_34)))
                { 
                    return l_451;
                }
                else
                { 
                    int16_t l_452 = (-1L);
                    uint32_t *l_453 = &g_164[2];
                    uint64_t * const l_458 = (void*)0;
                    uint64_t * const *l_457 = &l_458;
                    uint64_t * const **l_456[5][6] = {{&l_457,&l_457,&l_457,&l_457,&l_457,&l_457},{&l_457,&l_457,&l_457,&l_457,&l_457,&l_457},{&l_457,&l_457,&l_457,&l_457,&l_457,&l_457},{&l_457,&l_457,&l_457,&l_457,&l_457,&l_457},{&l_457,&l_457,&l_457,&l_457,&l_457,&l_457}};
                    int32_t l_470 = (-1L);
                    int64_t l_471 = 9L;
                    int i, j;
                    (*p_34) &= ((((*l_453) = l_452) , (safe_mul_func_int8_t_s_s((&l_116[1] == (l_459 = &g_379)), ((safe_sub_func_int16_t_s_s((&g_365 == l_423), ((*l_72) , (safe_lshift_func_uint16_t_u_s((safe_div_func_int32_t_s_s(((safe_mul_func_uint8_t_u_u(((l_419[0][4] <= l_422[3].f0) , 0xD5L), (-10L))) ^ l_470), l_274[g_112.f0.f1][(g_57 + 2)])), l_452))))) && l_450)))) | l_471);
                    l_472 ^= (*p_34);
                }
                for (g_99 = 0; (g_99 <= 0); g_99 += 1)
                { 
                    l_473 = (l_451.f1 , &l_274[g_112.f0.f1][(g_57 + 2)]);
                    if ((*p_33))
                        continue;
                    if ((*p_34))
                        continue;
                }
            }
        }
lbl_637:
        for (l_333 = 0; (l_333 < 38); l_333++)
        { 
            uint64_t l_478[5][1][5];
            uint8_t *l_512 = &g_175[2][4];
            uint8_t *l_517 = &g_175[4][5];
            uint8_t l_518 = 0x62L;
            int32_t l_522 = 7L;
            int32_t l_524[1];
            int i, j, k;
            for (i = 0; i < 5; i++)
            {
                for (j = 0; j < 1; j++)
                {
                    for (k = 0; k < 5; k++)
                        l_478[i][j][k] = 0x0E264AE2606BC8ABLL;
                }
            }
            for (i = 0; i < 1; i++)
                l_524[i] = 0x099546FFL;
            for (l_451.f0 = (-28); (l_451.f0 < 1); ++l_451.f0)
            { 
                uint64_t l_485[2][1];
                int32_t l_519 = 0L;
                int32_t l_525 = 0x8B82233BL;
                int32_t l_529 = (-1L);
                int i, j;
                for (i = 0; i < 2; i++)
                {
                    for (j = 0; j < 1; j++)
                        l_485[i][j] = 18446744073709551609UL;
                }
                (*p_33) |= (((l_478[1][0][2] || 0L) | (g_2 ^ g_349)) , (safe_unary_minus_func_uint8_t_u((safe_sub_func_uint16_t_u_u(g_349, (l_451.f1 >= (g_112 , 0x36C449B651B81445LL)))))));
                for (g_112.f1 = 24; (g_112.f1 > 7); g_112.f1--)
                { 
                    struct S0 l_486 = {0x35L,0xD54F683153090CB6LL};
                    int32_t l_503 = (-5L);
                    int64_t *l_504[7][3][2];
                    int32_t l_505[1];
                    uint8_t **l_513 = &l_512;
                    int i, j, k;
                    for (i = 0; i < 7; i++)
                    {
                        for (j = 0; j < 3; j++)
                        {
                            for (k = 0; k < 2; k++)
                                l_504[i][j][k] = (void*)0;
                        }
                    }
                    for (i = 0; i < 1; i++)
                        l_505[i] = (-6L);
                    l_505[0] |= ((!(l_485[0][0] && g_461)) != ((((l_486 , (l_451 , g_119)) != (safe_mul_func_uint8_t_u_u((((g_99 = (safe_mod_func_int8_t_s_s((l_503 = ((((safe_sub_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_s(((safe_mod_func_uint32_t_u_u((l_272 , ((safe_rshift_func_uint8_t_u_u((safe_mod_func_int32_t_s_s((safe_rshift_func_int16_t_s_s(l_478[3][0][4], g_358)), g_101)), l_486.f1)) , 4294967292UL)), (*p_34))) || 0x2B54289F8F8C14BDLL), l_422[3].f1)), g_195)) , p_33) != p_34) , g_53)), 1UL))) || (-1L)) ^ l_478[1][0][2]), g_175[0][6]))) , 0x8B12L) >= g_198));
                    if ((****g_405))
                        break;
                    (*p_33) = ((((safe_div_func_uint64_t_u_u(((*l_460) = (safe_mod_func_uint16_t_u_u((safe_add_func_int32_t_s_s((((*l_513) = l_512) != ((l_486.f0 || ((g_112.f1 ^ l_478[1][0][2]) && (safe_unary_minus_func_int32_t_s((safe_sub_func_uint8_t_u_u(l_478[1][0][2], (g_53 >= (*l_72)))))))) , l_517)), l_485[1][0])), g_49))), g_71)) ^ g_49) > l_518) == (****g_405));
                    (*p_34) = (**g_407);
                }
                ++g_531;
                return l_451;
            }
            return l_451;
        }
        for (g_349 = 13; (g_349 == (-15)); g_349--)
        { 
            int8_t *l_538 = &l_451.f0;
            int32_t l_548 = 0x84551AEDL;
            int32_t l_572 = 0x9901AA01L;
            int32_t l_573 = 0xA2A8B329L;
            int32_t l_574 = 0x24950B99L;
            struct S0 l_587 = {-1L,3UL};
            uint32_t l_612 = 0UL;
            const union U1 ***l_623 = (void*)0;
            int32_t l_681 = 0x3A94DDCBL;
            uint16_t *l_689 = &l_642;
            struct S0 l_697 = {1L,0UL};
            if ((((((*l_538) = 0xB6L) == 0x09L) , (*p_34)) == (l_528 <= (safe_mod_func_uint16_t_u_u(((l_541[1][4][1] != &g_240) & (g_175[4][5] , (*g_379))), g_175[4][5])))))
            { 
                uint32_t l_555 = 18446744073709551613UL;
                int32_t l_561 = 0x74F7FBE5L;
                int32_t l_564[7];
                int i;
                for (i = 0; i < 7; i++)
                    l_564[i] = 0x4FE59565L;
                if ((safe_mul_func_int8_t_s_s((((*l_209) = (g_161 ^ (safe_mul_func_int8_t_s_s((safe_lshift_func_int8_t_s_s(g_112.f2, 4)), ((l_548 >= g_526[1]) , ((g_358 , (-9L)) && (safe_add_func_uint16_t_u_u((safe_sub_func_int16_t_s_s(((safe_div_func_int8_t_s_s(l_528, l_555)) , g_161), l_555)), g_103)))))))) == l_555), 0x5BL)))
                { 
                    int64_t l_559 = (-4L);
                    struct S0 l_560 = {0xF3L,1UL};
                    (*p_33) |= ((g_164[2] >= (((*l_538) = ((((((((safe_lshift_func_uint16_t_u_s(((void*)0 != l_558), 10)) , (g_298 == g_71)) != 5UL) != 0xC7ED08E0EE5D0737LL) , l_548) , 18446744073709551615UL) ^ l_548) > l_559)) || g_112.f0.f0)) != l_548);
                    g_365 = (*g_240);
                    l_560 = (*g_240);
                    (*g_82) = p_33;
                    (****g_405) &= 0x446446AFL;
                }
                else
                { 
                    int32_t l_562 = 0x45D0DB4EL;
                    int32_t l_563 = 0xC241B179L;
                    int32_t l_568 = 0x41D02CC9L;
                    int32_t l_569[4];
                    int i;
                    for (i = 0; i < 4; i++)
                        l_569[i] = 0xB9E4ED3AL;
                    if (l_548)
                        break;
                    ++g_565;
                    if ((**g_407))
                        continue;
                    g_575--;
                }
                for (l_215 = 0; (l_215 <= 18); ++l_215)
                { 
                    struct S0 l_580 = {0x09L,0x427D57D716232499LL};
                    return l_580;
                }
                for (g_530 = 0; (g_530 >= 0); g_530 -= 1)
                { 
                    if ((***g_406))
                        break;
                    ++g_581[1];
                    if ((***g_406))
                        break;
                    if ((**g_82))
                        continue;
                }
            }
            else
            { 
                struct S0 *l_599 = &l_451;
                int32_t l_633 = 6L;
                for (l_157 = 5; (l_157 > 16); l_157++)
                { 
                    int32_t **l_586 = &l_72;
                    struct S0 l_588 = {0x1DL,3UL};
                    uint16_t *l_589 = (void*)0;
                    uint16_t *l_590 = &l_333;
                    (*l_586) = (***g_405);
                    l_588 = l_587;
                    (*p_33) = (g_365.f0 != (--(*l_590)));
                    if ((*l_72))
                        continue;
                    l_595 = (l_593[3] = (*g_82));
                }
                for (l_548 = 8; (l_548 == 7); l_548--)
                { 
                    struct S0 *l_598[1][5];
                    const struct S0 *l_601 = &g_602;
                    const struct S0 **l_600 = &l_601;
                    const int32_t ****l_611 = &l_259;
                    uint16_t *l_615 = &l_333;
                    int i, j;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 5; j++)
                            l_598[i][j] = &g_365;
                    }
                    l_574 |= (-9L);
                    (*p_33) &= (((((l_599 = (l_598[0][4] = l_598[0][0])) == ((*l_600) = &g_365)) | ((*l_615) ^= (g_602.f0 , (safe_mul_func_uint8_t_u_u(((((((safe_mod_func_uint32_t_u_u((~(((*l_611) = g_608[5][0]) == (void*)0)), (l_612 ^ (safe_mul_func_uint16_t_u_u(65528UL, l_548))))) , 0xA61ADB1D3F37E458LL) || 1L) , &g_112) == &g_112) != 18446744073709551615UL), g_2))))) <= 0x74A6L) && 0x5A8813FAL);
                    l_574 ^= ((~(((*l_72) < ((void*)0 != g_617)) , 1L)) >= (*l_595));
                    if ((*p_33))
                        continue;
                    (*p_33) ^= ((--(**l_459)) || ((-1L) == 8UL));
                }
                for (l_521 = 0; (l_521 >= 10); l_521 = safe_add_func_int8_t_s_s(l_521, 5))
                { 
                    const union U1 ****l_624 = &l_623;
                    const union U1 *l_628 = (void*)0;
                    const union U1 **l_627 = &l_628;
                    const union U1 ***l_626 = &l_627;
                    const union U1 ****l_625 = &l_626;
                    int32_t l_634[6][4][7] = {{{(-9L),0xC39F590BL,0x6EC60416L,5L,0x16632540L,0xBE42D5A3L,0x22C91C23L},{(-1L),0x46EF3BAEL,1L,0x39626313L,5L,(-1L),1L},{0xC416FDFDL,(-1L),0xC1253F84L,(-9L),0x08EABC92L,(-4L),(-1L)},{0x067C8B26L,0x9E632E76L,5L,(-1L),0xE7A60EF6L,0x39626313L,0xFB4A0D39L}},{{0xC435061EL,0xBE42D5A3L,0x067C8B26L,0xC39F590BL,1L,0xE7A60EF6L,0x6EC60416L},{0x9E632E76L,0x16632540L,0x088349CAL,0xC39F590BL,(-4L),0x9B032083L,(-9L)},{0L,(-1L),0x2EA93D2EL,(-1L),0xBE42D5A3L,1L,1L},{0xAB535326L,(-1L),(-9L),(-9L),(-1L),0xAB535326L,1L}},{{0xA60079A4L,0L,0xB7F2EA35L,0x39626313L,0x6EC60416L,0L,0L},{1L,0xB7F2EA35L,(-1L),5L,1L,(-1L),(-1L)},{(-9L),0L,(-1L),0L,0x7B874B2DL,(-6L),0xA60079A4L},{9L,(-1L),(-5L),0x46EF3BAEL,0x2EA93D2EL,(-9L),(-1L)}},{{1L,(-1L),(-1L),0x454E4DFBL,(-1L),0L,0x088349CAL},{0xB7F2EA35L,0x16632540L,0x49CD6EBAL,(-9L),(-1L),(-4L),0x088349CAL},{0x39626313L,0xBE42D5A3L,0L,0xC416FDFDL,0x088349CAL,0x6EC60416L,(-1L)},{0x08EABC92L,0x9E632E76L,0xA60079A4L,1L,(-1L),1L,0xA60079A4L}},{{(-1L),(-1L),0xBE42D5A3L,0x9E632E76L,(-1L),1L,(-1L)},{0L,0x46EF3BAEL,0xAB535326L,0L,0xC39F590BL,0x454E4DFBL,0L},{0x85443044L,0xC39F590BL,(-6L),1L,(-1L),0L,1L},{(-1L),0xE7A60EF6L,0L,0L,(-1L),0xC54F13C0L,1L}},{{0x6EC60416L,0xFB4A0D39L,9L,(-1L),0x088349CAL,0x7B874B2DL,(-9L)},{(-1L),(-1L),0L,0x2EA93D2EL,(-1L),0xC416FDFDL,0x6EC60416L},{(-1L),0L,0L,(-1L),(-1L),0xA60079A4L,0xFB4A0D39L},{(-4L),0L,0x49CD6EBAL,0xC1253F84L,0x22C91C23L,0x39626313L,0x39626313L}}};
                    int i, j, k;
                    (*l_625) = ((*l_624) = l_623);
                    (*p_34) = (safe_rshift_func_int16_t_s_u((safe_add_func_int8_t_s_s((((*g_379) != l_633) , (g_635 = ((*l_538) = l_634[3][3][2]))), (&g_575 != &g_565))), 9));
                    if (l_634[3][3][2])
                        continue;
                    if (g_636[3])
                        continue;
                    g_53 |= (*p_33);
                }
                for (l_521 = 4; (l_521 >= 0); l_521 -= 1)
                { 
                    int i;
                    l_593[l_521] = &l_633;
                    if (g_112.f0.f0)
                        goto lbl_637;
                    (*p_33) = (l_587 , (0x87FDD525A2CE99A6LL >= 0xCAC9D5BB174DB169LL));
                }
            }
            for (g_53 = 2; (g_53 >= 0); g_53 -= 1)
            { 
                uint32_t l_645 = 0x823976A3L;
                int32_t l_680[6][5][4] = {{{(-5L),0x36159A04L,(-1L),(-6L)},{0L,0L,(-1L),0L},{(-5L),3L,(-1L),0x36159A04L},{0xACEAA2F2L,1L,0x3EAFB20BL,1L},{0x3EAFB20BL,1L,0xACEAA2F2L,0x36159A04L}},{{(-1L),3L,(-5L),0L},{(-1L),0L,0L,(-6L)},{(-1L),0x36159A04L,(-5L),0L},{(-1L),(-6L),0xACEAA2F2L,0xF7BC8DB8L},{0x3EAFB20BL,0xE7ABBF8FL,0x3EAFB20BL,0xF7BC8DB8L}},{{0xACEAA2F2L,(-6L),(-1L),0L},{(-5L),0x36159A04L,(-1L),(-6L)},{0L,0L,(-1L),0L},{(-5L),3L,(-1L),0x36159A04L},{0xACEAA2F2L,1L,0x3EAFB20BL,1L}},{{0x3EAFB20BL,1L,0xACEAA2F2L,0x36159A04L},{(-1L),3L,(-5L),0L},{(-1L),0L,0L,(-6L)},{(-1L),0x36159A04L,(-5L),0L},{(-1L),(-6L),0xACEAA2F2L,0xF7BC8DB8L}},{{0x3EAFB20BL,0xE7ABBF8FL,0x3EAFB20BL,0xF7BC8DB8L},{0xACEAA2F2L,(-6L),(-1L),0L},{(-5L),0x36159A04L,(-1L),(-6L)},{0L,0L,(-1L),0L},{(-5L),3L,(-1L),0x36159A04L}},{{0xACEAA2F2L,1L,0x3EAFB20BL,1L},{0x3EAFB20BL,1L,0xACEAA2F2L,0x36159A04L},{(-1L),3L,(-5L),0L},{(-1L),0L,0L,(-6L)},{(-1L),0x36159A04L,(-5L),0L}}};
                uint32_t *l_696 = &g_575;
                int i, j, k;
                if ((l_638 , (g_639[0][0] != &g_640)))
                { 
                    int32_t l_641 = 0xA99022CDL;
                    uint8_t ***l_649 = &g_639[0][0];
                    uint8_t ****l_648 = &l_649;
                    int i, j;
                    l_642--;
                    l_645--;
                    (*l_648) = &g_639[0][0];
                    (*p_34) = (safe_mod_func_int8_t_s_s((safe_sub_func_int16_t_s_s((!g_71), 1UL)), (safe_mod_func_uint64_t_u_u((((((safe_lshift_func_int8_t_s_u((((*g_618) &= ((((**g_82) , (!((void*)0 != l_660))) , l_595) == ((&g_240 == l_541[1][4][1]) , p_34))) == 8L), l_641)) ^ g_53) | g_112.f0.f1) != (*p_33)) , (*g_379)), g_571[0]))));
                }
                else
                { 
                    union U1 * const l_677 = (void*)0;
                    int32_t l_678 = 0xF3650F29L;
                    int32_t l_682 = (-3L);
                    l_661--;
                    (*p_34) = (safe_add_func_uint8_t_u_u(((l_548 || (safe_add_func_int64_t_s_s((*l_595), g_358))) , (((((safe_add_func_int8_t_s_s(((+(l_587.f0 < (safe_sub_func_int64_t_s_s((7L | (safe_rshift_func_int8_t_s_u((safe_mul_func_uint8_t_u_u(0UL, ((l_677 == (void*)0) >= l_645))), l_678))), 4UL)))) || l_645), l_548)) & 0x759897D75B43022ELL) && l_679) != l_612) != 0x65L)), 9UL));
                    if ((*p_34))
                        break;
                    g_684[0][3]++;
                }
                (*p_34) ^= (((*l_696) = ((safe_add_func_uint8_t_u_u(((l_587 , &l_642) != l_689), (safe_mod_func_int8_t_s_s((safe_lshift_func_int8_t_s_u((0L ^ l_645), 5)), (safe_mul_func_int8_t_s_s((l_587 , ((*l_538) |= (-4L))), l_681)))))) == (-1L))) >= g_71);
                for (l_272.f0.f1 = 0; (l_272.f0.f1 <= 5); l_272.f0.f1 += 1)
                { 
                    return l_697;
                }
            }
            g_706 &= ((((l_587.f1 >= ((safe_rshift_func_uint8_t_u_u(l_700[2][0][1], l_572)) >= l_701)) && ((safe_mul_func_uint16_t_u_u((safe_div_func_int8_t_s_s(l_548, l_681)), 5L)) || (*l_72))) && 0L) || l_587.f0);
            if ((*g_610))
                continue;
        }
    }
    return l_638;
}



static uint8_t  func_39(int32_t * p_40, int32_t * p_41, uint64_t  p_42, int32_t * p_43)
{ 
    return p_42;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_49, "g_49", print_hash_value);
    transparent_crc(g_53, "g_53", print_hash_value);
    transparent_crc(g_57, "g_57", print_hash_value);
    transparent_crc(g_71, "g_71", print_hash_value);
    transparent_crc(g_99, "g_99", print_hash_value);
    transparent_crc(g_101, "g_101", print_hash_value);
    transparent_crc(g_103, "g_103", print_hash_value);
    transparent_crc(g_107, "g_107", print_hash_value);
    transparent_crc(g_112.f0.f0, "g_112.f0.f0", print_hash_value);
    transparent_crc(g_112.f0.f1, "g_112.f0.f1", print_hash_value);
    transparent_crc(g_112.f1, "g_112.f1", print_hash_value);
    transparent_crc(g_112.f2, "g_112.f2", print_hash_value);
    transparent_crc(g_119, "g_119", print_hash_value);
    transparent_crc(g_161, "g_161", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_164[i], "g_164[i]", print_hash_value);

    }
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(g_175[i][j], "g_175[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_193[i], "g_193[i]", print_hash_value);

    }
    transparent_crc(g_195, "g_195", print_hash_value);
    transparent_crc(g_198, "g_198", print_hash_value);
    transparent_crc(g_298, "g_298", print_hash_value);
    transparent_crc(g_349, "g_349", print_hash_value);
    transparent_crc(g_358, "g_358", print_hash_value);
    transparent_crc(g_365.f0, "g_365.f0", print_hash_value);
    transparent_crc(g_365.f1, "g_365.f1", print_hash_value);
    transparent_crc(g_378, "g_378", print_hash_value);
    transparent_crc(g_461, "g_461", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_526[i], "g_526[i]", print_hash_value);

    }
    transparent_crc(g_530, "g_530", print_hash_value);
    transparent_crc(g_531, "g_531", print_hash_value);
    transparent_crc(g_565, "g_565", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_570[i][j][k], "g_570[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_571[i], "g_571[i]", print_hash_value);

    }
    transparent_crc(g_575, "g_575", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_581[i], "g_581[i]", print_hash_value);

    }
    transparent_crc(g_594, "g_594", print_hash_value);
    transparent_crc(g_602.f0, "g_602.f0", print_hash_value);
    transparent_crc(g_602.f1, "g_602.f1", print_hash_value);
    transparent_crc(g_635, "g_635", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_636[i], "g_636[i]", print_hash_value);

    }
    transparent_crc(g_683, "g_683", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_684[i][j], "g_684[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_706, "g_706", print_hash_value);
    transparent_crc(g_838, "g_838", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_841[i], "g_841[i]", print_hash_value);

    }
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_842[i], "g_842[i]", print_hash_value);

    }
    transparent_crc(g_887, "g_887", print_hash_value);
    transparent_crc(g_889, "g_889", print_hash_value);
    transparent_crc(g_890, "g_890", print_hash_value);
    transparent_crc(g_914, "g_914", print_hash_value);
    transparent_crc(g_942, "g_942", print_hash_value);
    transparent_crc(g_1021, "g_1021", print_hash_value);
    transparent_crc(g_1104, "g_1104", print_hash_value);
    transparent_crc(g_1111, "g_1111", print_hash_value);
    transparent_crc(g_1583, "g_1583", print_hash_value);
    transparent_crc(g_1643, "g_1643", print_hash_value);
    transparent_crc(g_1679, "g_1679", print_hash_value);
    transparent_crc(g_1701, "g_1701", print_hash_value);
    transparent_crc(g_1838, "g_1838", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_1894[i][j], "g_1894[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_1909, "g_1909", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_2075[i], "g_2075[i]", print_hash_value);

    }
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
