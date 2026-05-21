// SPDX-License-Identifier: MIT
// cctest_csmith_afdbae39.c --- cctest case csmith_afdbae39 (csmith seed 2950409785)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xcadebae1 */

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

// Options:   -s 2950409785 -o /tmp/csmith_gen_jfvznd7l/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   uint32_t  f0;
   int32_t  f1;
};
#pragma pack(pop)

union U1 {
   uint32_t  f0;
};


static uint32_t g_19 = 0x8664A116L;
static int8_t g_20 = 0x3EL;
static uint32_t g_38 = 1UL;
static int32_t g_42[4][3][5] = {{{(-1L),0x72A6DD75L,(-1L),0L,(-1L)},{0xC7EEBEAAL,0xC7EEBEAAL,(-7L),0xD5B94995L,(-5L)},{0x90DC6CE9L,0xE3B5251BL,(-2L),0L,(-1L)}},{{0L,(-7L),8L,(-7L),0L},{(-8L),0xE3B5251BL,1L,0x11EE15D1L,0L},{0xD5B94995L,0xC7EEBEAAL,(-5L),1L,1L}},{{0x11EE15D1L,0x72A6DD75L,0x11EE15D1L,0xE3B5251BL,0L},{0x1A1FBCDAL,1L,0xC7EEBEAAL,1L,0L},{0L,(-1L),0L,0L,(-1L)}},{{(-5L),(-5L),(-7L),1L,8L},{(-8L),1L,0L,0x72A6DD75L,0x90DC6CE9L},{0xC7EEBEAAL,5L,5L,0xC7EEBEAAL,9L}}};
static uint8_t g_65 = 0x3CL;
static uint16_t g_66 = 0xBF73L;
static uint64_t g_69 = 8UL;
static int64_t g_72 = 0x4EF7FEE68117D142LL;
static int64_t g_96 = (-5L);
static int32_t g_97 = (-10L);
static int64_t g_98 = 0x8B87F186A86B27BDLL;
static uint8_t g_99 = 0x2BL;
static struct S0 g_103[3][4] = {{{0x18EFE3DBL,-1L},{0x18EFE3DBL,-1L},{0x18EFE3DBL,-1L},{0x18EFE3DBL,-1L}},{{0x18EFE3DBL,-1L},{0x18EFE3DBL,-1L},{0x18EFE3DBL,-1L},{0x18EFE3DBL,-1L}},{{0x18EFE3DBL,-1L},{0x18EFE3DBL,-1L},{0x18EFE3DBL,-1L},{0x18EFE3DBL,-1L}}};
static int32_t g_131 = 7L;
static int8_t g_132 = (-5L);
static uint8_t g_133[2] = {0xE6L,0xE6L};
static int32_t g_146 = (-6L);
static int32_t g_169[2] = {(-1L),(-1L)};
static int32_t g_200[2] = {0x74AD0AB6L,0x74AD0AB6L};
static uint32_t g_308 = 18446744073709551615UL;



static uint32_t  func_1(void);
static struct S0  func_2(uint8_t  p_3, uint16_t  p_4, uint16_t  p_5);
static uint32_t  func_10(uint8_t  p_11, uint8_t  p_12, uint16_t  p_13, uint32_t  p_14, int16_t  p_15);
static uint16_t  func_30(uint16_t  p_31);




static uint32_t  func_1(void)
{ 
    int16_t l_6[1][3][2] = {{{0x2E56L,0x2E56L},{0x2E56L,0x2E56L},{0x2E56L,0x2E56L}}};
    int32_t l_7 = 0x5FAAFE30L;
    uint32_t l_18 = 0x5145CCB9L;
    struct S0 l_321 = {0x97FB2388L,0L};
    int i, j, k;
    l_321 = func_2((l_7 = l_6[0][0][0]), (safe_add_func_int32_t_s_s(((g_308 ^= func_10(l_6[0][0][0], l_6[0][1][1], (safe_lshift_func_uint16_t_u_u((l_18 <= 18446744073709551611UL), l_6[0][0][1])), l_18, l_6[0][0][0])) == g_169[1]), (-2L))), l_18);
    return g_169[1];
}



static struct S0  func_2(uint8_t  p_3, uint16_t  p_4, uint16_t  p_5)
{ 
    struct S0 l_314 = {2UL,2L};
    int32_t l_320 = 0xBFFD309DL;
    for (g_97 = 0; (g_97 < (-20)); g_97 = safe_sub_func_int32_t_s_s(g_97, 4))
    { 
        l_320 = (((safe_add_func_int8_t_s_s(((safe_unary_minus_func_uint32_t_u(g_96)) >= (l_314 , l_314.f1)), ((((safe_add_func_uint16_t_u_u(((safe_lshift_func_uint8_t_u_s((safe_unary_minus_func_uint16_t_u((l_314.f1 <= p_3))), p_3)) == g_19), p_5)) | p_5) > 3UL) == g_66))) ^ 0x7B5CL) && 1L);
    }
    g_146 ^= 0x6FB0A4E4L;
    return l_314;
}



static uint32_t  func_10(uint8_t  p_11, uint8_t  p_12, uint16_t  p_13, uint32_t  p_14, int16_t  p_15)
{ 
    uint64_t l_36 = 0xE75688AFC007DFDCLL;
    int32_t l_39 = 0L;
    uint64_t l_107[2][5][1] = {{{0x4610154D08331434LL},{0UL},{0x4610154D08331434LL},{0UL},{0x4610154D08331434LL}},{{0UL},{0x4610154D08331434LL},{0UL},{0x4610154D08331434LL},{0UL}}};
    union U1 l_129 = {0x60C0AA4CL};
    int32_t l_144 = 1L;
    int32_t l_145 = 0x808CFBF8L;
    int64_t l_167 = 1L;
    int32_t l_172 = 0x0AF76FFFL;
    int32_t l_174 = (-1L);
    int32_t l_176[5][5][4] = {{{0xE7CFBBA9L,0xF50AE741L,(-2L),0x24F8E990L},{(-1L),(-1L),0xF50AE741L,0x3B4F5F1FL},{0xF50AE741L,0x3B4F5F1FL,0x06F47B0EL,5L},{0x813D76F3L,0xE7CFBBA9L,0xB22ED0F4L,(-1L)},{0xB35A4D2AL,0L,(-1L),0L}},{{(-7L),0x4B46092DL,0L,1L},{5L,0x3211C853L,(-1L),(-1L)},{0x06F47B0EL,0x27E75256L,0L,0x24F8E990L},{8L,(-7L),(-7L),8L},{0x27E75256L,0xAE6E0BB0L,0x06F47B0EL,0xE53A4A4FL}},{{0xB22ED0F4L,(-7L),(-1L),0L},{(-1L),0L,0xDA7FE7BAL,0L},{0x4B46092DL,(-7L),0x24F8E990L,0xE53A4A4FL},{5L,0xAE6E0BB0L,(-6L),8L},{0x03C422D2L,(-7L),9L,0x24F8E990L}},{{0x3211C853L,0x27E75256L,0x1001A1CCL,(-1L)},{(-7L),0x3211C853L,0x06F47B0EL,1L},{0x1001A1CCL,0x4B46092DL,0x27E75256L,0L},{0x3B4F5F1FL,0L,0x48D21F10L,(-1L)},{0x05D2FD92L,0xE7CFBBA9L,0L,5L}},{{5L,0x3B4F5F1FL,0x54994F79L,0x3B4F5F1FL},{4L,(-1L),0L,0x24F8E990L},{0xAE6E0BB0L,0xF50AE741L,0x813D76F3L,0x3211C853L},{(-1L),8L,0x06F47B0EL,0L},{(-1L),0x05D2FD92L,0x813D76F3L,0xDA7FE7BAL}}};
    uint32_t l_236 = 1UL;
    int64_t l_238[3];
    uint32_t l_269 = 2UL;
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_238[i] = 1L;
    if ((g_20 ^= g_19))
    { 
        int8_t l_21[5][1] = {{0xBAL},{1L},{0xBAL},{1L},{0xBAL}};
        struct S0 l_49 = {0UL,0xC01E3B40L};
        int32_t l_50 = (-1L);
        int32_t l_94 = 0x586C6A20L;
        int i, j;
        for (g_19 = 0; (g_19 <= 0); g_19 += 1)
        { 
            uint32_t l_67 = 0xD83399F1L;
            int32_t l_68 = (-4L);
            for (p_15 = 0; (p_15 <= 0); p_15 += 1)
            { 
                uint32_t l_37 = 0UL;
                int i, j;
                l_39 &= (safe_sub_func_int16_t_s_s(((g_38 ^= (safe_add_func_int32_t_s_s(((safe_rshift_func_int16_t_s_s((safe_lshift_func_uint16_t_u_s((l_36 &= (func_30(((safe_div_func_int8_t_s_s((-3L), l_21[(g_19 + 2)][p_15])) , (g_20 < (g_19 ^ 1UL)))) & p_11)), 12)), l_21[(g_19 + 2)][p_15])) <= l_37), 0UL))) >= g_19), 1UL));
                g_42[1][2][3] = ((safe_add_func_uint8_t_u_u(g_38, p_11)) | 0xC5108D7EL);
                l_50 |= (safe_add_func_int8_t_s_s((safe_rshift_func_int16_t_s_u(7L, l_21[4][0])), (0x6DCE64F81AA30D26LL < (((safe_rshift_func_int8_t_s_u(((l_49 , l_49.f1) != g_38), 0)) < g_19) && g_38))));
            }
            for (g_20 = 0; (g_20 >= 0); g_20 -= 1)
            { 
                int32_t l_64 = 0xB2BF7FA1L;
                int i, j;
                l_68 ^= (safe_mod_func_uint64_t_u_u((+(((l_21[(g_20 + 1)][g_20] = l_21[g_20][g_19]) == (((g_66 |= (safe_div_func_uint64_t_u_u((safe_sub_func_uint16_t_u_u((safe_add_func_int8_t_s_s((g_65 = (0x5F08L ^ (((safe_rshift_func_int8_t_s_s(((safe_rshift_func_int16_t_s_s((l_64 >= 7L), p_12)) == 6UL), 7)) && 1UL) & 0xCD5F09706B0045B3LL))), p_15)), (-2L))), p_13))) , 18446744073709551609UL) || p_11)) != l_67)), p_12));
                g_72 = ((((g_69 = 0x745916079B8BCB0FLL) || (((p_11 & ((safe_lshift_func_int8_t_s_s(((l_50 = l_39) != l_36), p_12)) >= g_42[0][0][4])) <= g_42[1][1][4]) , 0L)) == l_39) > 0x4C63812DL);
            }
            for (l_67 = 0; (l_67 <= 0); l_67 += 1)
            { 
                uint32_t l_95 = 5UL;
                int i, j;
                g_96 = (((safe_mod_func_uint64_t_u_u((l_49 , ((safe_mul_func_int16_t_s_s(((safe_mod_func_int64_t_s_s((((l_94 ^= (((~(safe_div_func_uint32_t_u_u(((safe_sub_func_uint64_t_u_u(((safe_lshift_func_int8_t_s_s(l_21[l_67][l_67], p_15)) <= (safe_mul_func_int16_t_s_s((safe_rshift_func_int8_t_s_s((((((((++g_69) , (safe_add_func_int16_t_s_s((l_50 = (5UL | p_11)), l_21[4][0]))) > 0x46A40847A0C8E20BLL) , l_49.f0) && p_11) < p_15) | l_21[l_67][l_67]), 5)), 3L))), g_20)) == p_15), l_21[0][0]))) != l_39) && 0x1C1FAE94C91969D3LL)) , p_15) ^ p_12), l_95)) < p_14), l_95)) && g_42[0][0][4])), l_21[l_67][l_67])) , 0x41BAC1F96505D7E5LL) < p_13);
                g_99++;
                if (g_42[2][2][0])
                    break;
            }
        }
        l_39 = (l_21[0][0] | ((((safe_unary_minus_func_int8_t_s((g_103[0][0] , (g_20 = l_39)))) , p_11) < l_39) > l_36));
    }
    else
    { 
        int16_t l_104 = 0x66F7L;
        uint8_t l_119[1][1][5];
        int32_t l_120 = (-4L);
        int i, j, k;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 1; j++)
            {
                for (k = 0; k < 5; k++)
                    l_119[i][j][k] = 3UL;
            }
        }
        l_107[1][2][0] = (l_104 && (g_65++));
        l_39 = ((!0xC2L) , g_42[1][2][3]);
        l_120 ^= (((0UL && (((((safe_add_func_uint32_t_u_u(((l_36 , (p_13 ^= ((safe_mod_func_int8_t_s_s((safe_div_func_uint8_t_u_u((++g_65), (l_39 = l_107[1][2][0]))), (p_11++))) ^ (-1L)))) | (-1L)), 0xE32AAFAEL)) | g_97) & l_119[0][0][0]) < 0x41C1L) > p_12)) != p_12) && 0xF110A1B7E2076EB1LL);
    }
    g_97 |= (l_39 = p_15);
    if (g_19)
    { 
        uint32_t l_130 = 1UL;
        const uint32_t l_143[3] = {0xAA90A817L,0xAA90A817L,0xAA90A817L};
        int32_t l_151 = 0xD390861EL;
        int32_t l_166[2][3][3] = {{{6L,6L,6L},{0L,0L,0L},{6L,6L,6L}},{{0L,0L,0L},{6L,6L,6L},{0L,0L,0L}}};
        uint32_t l_180 = 18446744073709551614UL;
        int16_t l_235 = 0x6E11L;
        int64_t l_239 = 0xC234C2428196840DLL;
        uint32_t l_283 = 9UL;
        const uint64_t l_285 = 0x524D7A882262B2D5LL;
        int i, j, k;
        if ((safe_div_func_int64_t_s_s((65535UL > ((((p_15 & (safe_lshift_func_uint16_t_u_s((((safe_rshift_func_int8_t_s_s((((safe_add_func_int8_t_s_s((l_129 , 5L), g_66)) < l_107[1][1][0]) , p_11), g_38)) < 0xDEB9ED2AL) , p_14), 1))) , g_69) >= 0xFDF6L) , l_130)), 0xF369350C07B2B6A9LL)))
        { 
            ++g_133[0];
        }
        else
        { 
            int32_t l_162 = 0L;
            int32_t l_164 = (-3L);
            int32_t l_165 = 0x0AD17BF9L;
            int32_t l_177 = 0xBDDCB5EBL;
            int32_t l_178 = 0L;
            int32_t l_179 = 0x586A3694L;
            if ((l_145 ^= ((((g_20 = (l_39 = 1L)) == ((l_144 = (safe_mod_func_int16_t_s_s((safe_add_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u(0xBDA1L, (p_14 > (~l_143[1])))), p_14)), 65526UL))) || g_133[0])) > g_131) , g_42[1][2][3])))
            { 
                int32_t l_150 = 0L;
                g_146 = g_146;
                l_150 = (g_146 |= ((+(0x11L < ((safe_add_func_int64_t_s_s(g_66, p_12)) <= g_132))) < l_143[0]));
            }
            else
            { 
                l_151 &= l_144;
            }
            if ((((safe_mul_func_uint16_t_u_u((((((safe_add_func_int8_t_s_s(((l_36 , p_12) || (((g_131 ^= ((safe_lshift_func_uint8_t_u_s(((l_36 ^ (safe_rshift_func_int8_t_s_u(((((1UL < 1L) , 0x5993L) || g_103[0][0].f1) && l_36), p_12))) > l_130), 0)) && p_14)) != 9UL) != l_151)), 4UL)) && p_15) >= 253UL) >= p_15) > g_42[1][2][2]), 0xC908L)) != l_162) , 0xD7480F3EL))
            { 
                int32_t l_163 = 0x70253244L;
                l_162 = 0x1B64A918L;
                l_163 &= (-1L);
                l_151 |= (l_165 |= (l_163 = (g_97 = ((l_164 |= (l_162 != g_42[1][1][1])) || p_11))));
            }
            else
            { 
                int32_t l_168 = 0x0C33512AL;
                int32_t l_170 = 0xE69D1332L;
                int32_t l_171 = 0x3A6AC587L;
                int32_t l_173 = 0x1998E242L;
                int32_t l_175[1][1];
                int i, j;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 1; j++)
                        l_175[i][j] = 0xCDFC2080L;
                }
                --l_180;
            }
        }
        for (l_39 = 0; (l_39 != 0); l_39 = safe_add_func_uint16_t_u_u(l_39, 2))
        { 
            int8_t l_195[3];
            const struct S0 l_199 = {0xB3F213AFL,-8L};
            int32_t l_201 = 0x586F0DDEL;
            const int32_t l_213[4] = {0L,0L,0L,0L};
            int64_t l_214[3][4] = {{(-1L),0xBC353FDA3CCD9C67LL,0xBC353FDA3CCD9C67LL,(-1L)},{0xBC353FDA3CCD9C67LL,(-1L),0xBC353FDA3CCD9C67LL,0xBC353FDA3CCD9C67LL},{(-1L),(-1L),0xCD19120BC222C936LL,(-1L)}};
            int i, j;
            for (i = 0; i < 3; i++)
                l_195[i] = 0L;
            if ((safe_mod_func_int32_t_s_s((l_201 = ((-3L) && (safe_lshift_func_int8_t_s_u((safe_div_func_int8_t_s_s((safe_rshift_func_int16_t_s_u(((safe_lshift_func_uint8_t_u_u((l_167 | (g_200[0] |= (((l_195[0] || ((g_66 = (safe_unary_minus_func_uint64_t_u((safe_lshift_func_uint8_t_u_s((l_199 , p_12), 2))))) ^ g_98)) < l_195[0]) == p_15))), 5)) && (-1L)), 2)), 255UL)), 7)))), g_19)))
            { 
                int32_t l_215 = 0x5F1035ACL;
                l_215 &= ((safe_mod_func_uint16_t_u_u(((safe_mod_func_uint16_t_u_u((~(0x29242446L && ((safe_mul_func_uint8_t_u_u(p_12, (((safe_div_func_int32_t_s_s(((((g_97 < (safe_sub_func_int16_t_s_s(9L, g_72))) , 246UL) > (-5L)) | p_13), p_13)) == g_97) != g_103[0][0].f1))) != p_14))), (-1L))) , l_213[1]), g_96)) == l_214[0][3]);
                if (g_132)
                    continue;
                l_201 = g_169[1];
            }
            else
            { 
                l_201 ^= g_96;
            }
            if (l_166[0][2][2])
                break;
            l_172 |= (safe_rshift_func_int16_t_s_s((~((safe_sub_func_uint32_t_u_u((l_166[0][2][0] = (safe_div_func_uint16_t_u_u(((l_180 | (((safe_mod_func_int64_t_s_s((safe_lshift_func_uint8_t_u_s((((p_13 = ((((safe_mod_func_int32_t_s_s((safe_mod_func_uint64_t_u_u(l_195[0], (((safe_mul_func_uint16_t_u_u(l_213[0], (((safe_add_func_uint32_t_u_u((((g_72 = (g_96 = (-3L))) > p_12) == g_98), l_151)) >= g_103[0][0].f0) ^ 8UL))) <= 0x2F97578CL) || l_151))), l_143[1])) & 0xBB03L) | 1L) , 0x8CAAL)) ^ 0UL) ^ 4294967295UL), l_235)), l_236)) != l_130) == p_14)) > p_11), l_107[1][2][0]))), 4294967288UL)) , p_12)), 1));
        }
        if (g_20)
        { 
            int32_t l_237[1];
            uint8_t l_240 = 0UL;
            int i;
            for (i = 0; i < 1; i++)
                l_237[i] = 0xA28B3A16L;
            l_172 &= (l_145 = p_13);
            --l_240;
        }
        else
        { 
            int16_t l_243 = 0x36C7L;
            int32_t l_244 = 6L;
            int32_t l_245 = 0xE6DE8E0CL;
            int32_t l_246 = 1L;
            int32_t l_247 = (-4L);
            int32_t l_248 = 0L;
            int32_t l_249 = 8L;
            int32_t l_250 = 0xB896CBFCL;
            int32_t l_251 = 0x63579EFBL;
            int32_t l_252 = 0xF1679559L;
            int32_t l_253 = 9L;
            int32_t l_254 = 0x348006E1L;
            int32_t l_255 = (-1L);
            int32_t l_256 = 0xABD20069L;
            int32_t l_257 = 2L;
            int32_t l_258 = 8L;
            int32_t l_259 = (-1L);
            int32_t l_260 = 0L;
            int32_t l_261 = 0x11BBB0D9L;
            int32_t l_262 = 0x0F0D5E20L;
            int32_t l_263 = 0x00706006L;
            int32_t l_264 = 0x736B5C2FL;
            int32_t l_265 = 1L;
            int32_t l_266 = 0xFFE85CD8L;
            int32_t l_267 = 0x647D5991L;
            int32_t l_268[3];
            int i;
            for (i = 0; i < 3; i++)
                l_268[i] = (-1L);
            ++l_269;
            for (l_130 = 0; (l_130 > 13); l_130 = safe_add_func_uint16_t_u_u(l_130, 9))
            { 
                uint16_t l_282 = 65535UL;
                l_256 = ((((safe_div_func_int32_t_s_s(((8L == (((safe_add_func_uint16_t_u_u((g_66 = ((safe_rshift_func_int8_t_s_s((safe_sub_func_uint16_t_u_u(0UL, (l_283 = l_282))), 2)) ^ ((safe_unary_minus_func_int16_t_s((g_131 != l_166[1][1][2]))) , l_267))), g_96)) && p_12) != g_103[0][0].f1)) >= p_12), g_146)) != l_285) ^ 4294967295UL) < l_235);
            }
            g_146 ^= ((safe_div_func_int8_t_s_s(((safe_unary_minus_func_int32_t_s((~(safe_add_func_int32_t_s_s(l_254, ((safe_unary_minus_func_uint32_t_u(p_11)) == ((safe_unary_minus_func_uint16_t_u(((~(g_96 = l_107[0][2][0])) || ((safe_mul_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u((((safe_add_func_uint64_t_u_u((((safe_div_func_int32_t_s_s((safe_lshift_func_uint16_t_u_s((((g_131 , p_11) <= 4294967295UL) != p_15), 13)), p_11)) & 5L) == 0xD4D99217BE0B4FA1LL), 0x25476669896BE9DELL)) & g_97) | g_72), p_12)), p_13)) >= 0x49D92129L)))) & p_14))))))) >= l_167), g_66)) <= p_13);
        }
    }
    else
    { 
        for (l_129.f0 = 0; (l_129.f0 != 31); ++l_129.f0)
        { 
            struct S0 l_307 = {18446744073709551613UL,-6L};
            g_103[1][1] = l_307;
        }
    }
    return g_146;
}



static uint16_t  func_30(uint16_t  p_31)
{ 
    const struct S0 l_34[3][3][2] = {{{{0UL,0x31AF6658L},{18446744073709551615UL,0x276AC116L}},{{0UL,0x31AF6658L},{0UL,0x31AF6658L}},{{0UL,0x31AF6658L},{18446744073709551615UL,0x276AC116L}}},{{{0UL,0x31AF6658L},{0UL,0x31AF6658L}},{{0UL,0x31AF6658L},{18446744073709551615UL,0x276AC116L}},{{0UL,0x31AF6658L},{0UL,0x31AF6658L}}},{{{0UL,0x31AF6658L},{18446744073709551615UL,0x276AC116L}},{{0UL,0x31AF6658L},{0UL,0x31AF6658L}},{{0UL,0x31AF6658L},{18446744073709551615UL,0x276AC116L}}}};
    struct S0 l_35[3][3][5] = {{{{0xE2FC3C73L,-10L},{18446744073709551606UL,0L},{0x0320BA2CL,0x60EC253DL},{0UL,-1L},{5UL,-1L}},{{0x3231A295L,0xE3164C11L},{18446744073709551613UL,0xE73E4F9FL},{0x7D757520L,-5L},{0x3231A295L,0xE3164C11L},{0xE2FC3C73L,-10L}},{{8UL,0x7A4860C0L},{0UL,-1L},{0x79A1D127L,-1L},{0x79A1D127L,-1L},{0UL,-1L}}},{{{0xE2FC3C73L,-10L},{0x09D89C1CL,0x0D5D742CL},{0x79A1D127L,-1L},{8UL,0L},{0x0320BA2CL,0x60EC253DL}},{{18446744073709551613UL,0xE73E4F9FL},{0xE2FC3C73L,-10L},{0x7D757520L,-5L},{0xAB883EB9L,0x9C826FFEL},{8UL,0L}},{{3UL,1L},{0x3231A295L,0xE3164C11L},{0x0320BA2CL,0x60EC253DL},{8UL,0x7A4860C0L},{0UL,-1L}}},{{{18446744073709551613UL,0xE73E4F9FL},{8UL,0x7A4860C0L},{18446744073709551606UL,0L},{0UL,-1L},{18446744073709551606UL,0L}},{{0xE2FC3C73L,-10L},{0xE2FC3C73L,-10L},{0x519C81B9L,0x497140DAL},{0UL,-1L},{0xEF4FC6A3L,0x0BDE8AFFL}},{{8UL,0x7A4860C0L},{18446744073709551613UL,0xE73E4F9FL},{0x09D89C1CL,0x0D5D742CL},{8UL,0x7A4860C0L},{0xE2FC3C73L,-10L}}}};
    int i, j, k;
    l_35[0][2][1] = l_34[1][2][1];
    return g_19;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_19, "g_19", print_hash_value);
    transparent_crc(g_20, "g_20", print_hash_value);
    transparent_crc(g_38, "g_38", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_42[i][j][k], "g_42[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_65, "g_65", print_hash_value);
    transparent_crc(g_66, "g_66", print_hash_value);
    transparent_crc(g_69, "g_69", print_hash_value);
    transparent_crc(g_72, "g_72", print_hash_value);
    transparent_crc(g_96, "g_96", print_hash_value);
    transparent_crc(g_97, "g_97", print_hash_value);
    transparent_crc(g_98, "g_98", print_hash_value);
    transparent_crc(g_99, "g_99", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_103[i][j].f0, "g_103[i][j].f0", print_hash_value);
            transparent_crc(g_103[i][j].f1, "g_103[i][j].f1", print_hash_value);

        }
    }
    transparent_crc(g_131, "g_131", print_hash_value);
    transparent_crc(g_132, "g_132", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_133[i], "g_133[i]", print_hash_value);

    }
    transparent_crc(g_146, "g_146", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_169[i], "g_169[i]", print_hash_value);

    }
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_200[i], "g_200[i]", print_hash_value);

    }
    transparent_crc(g_308, "g_308", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
