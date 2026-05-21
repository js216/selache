// SPDX-License-Identifier: MIT
// cctest_csmith_fc9f34c3.c --- cctest case csmith_fc9f34c3 (csmith seed 4238292163)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xfc6f633a */

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

// Options:   -s 4238292163 -o /tmp/csmith_gen_1s6ost57/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   const uint32_t  f0;
};
#pragma pack(pop)

union U1 {
   int32_t  f0;
   struct S0  f1;
   struct S0  f2;
};

union U2 {
   int16_t  f0;
   struct S0  f1;
};

union U3 {
   struct S0  f0;
   int32_t  f1;
   struct S0  f2;
   int8_t  f3;
};


static int32_t g_2 = 0x64F14790L;
static union U3 g_12 = {{3UL}};
static union U2 g_31 = {3L};
static int8_t g_33 = 0x99L;
static uint16_t g_37 = 1UL;
static uint32_t g_47 = 4294967288UL;
static int16_t g_48 = 0x39ABL;
static int32_t g_52 = 0L;
static int32_t g_53 = 0xFCB277CEL;
static int64_t g_69[3] = {(-1L),(-1L),(-1L)};
static uint32_t g_71 = 6UL;
static int64_t g_77 = 0x0E7A75E415B52D1ALL;
static uint64_t g_78 = 0x9C3C7D9ACC98CB2CLL;
static uint32_t g_81 = 0xD880D918L;
static uint32_t g_92 = 0x6A3F29A3L;
static uint32_t g_96 = 2UL;
static union U1 g_115 = {0x859F89EBL};
static int64_t g_134 = (-7L);
static uint32_t g_153 = 0UL;
static uint64_t g_161 = 0UL;
static uint64_t g_171 = 0x9B5EA5FD5C3A27A7LL;
static uint64_t g_174 = 0UL;
static uint16_t g_181 = 0x124DL;
static int16_t g_190 = 0x9D7EL;
static int32_t g_195 = (-5L);
static int16_t g_197 = 0x564EL;
static uint32_t g_198 = 0x44C08691L;
static uint32_t g_204 = 4294967295UL;
static int16_t g_219 = 0L;
static uint32_t g_220 = 0x8057C8D3L;
static uint32_t g_223 = 0x9074867DL;
static uint32_t g_241 = 0x0E68A72DL;



static struct S0  func_1(void);
static uint16_t  func_9(union U3  p_10, uint32_t  p_11);
static uint8_t  func_19(int32_t  p_20, const uint16_t  p_21, union U3  p_22, int64_t  p_23);
static int32_t  func_24(uint64_t  p_25, union U3  p_26, union U2  p_27, uint32_t  p_28);




static struct S0  func_1(void)
{ 
    uint32_t l_209[5][3] = {{0UL,0UL,0UL},{5UL,0x027805F1L,5UL},{0UL,0UL,0UL},{5UL,0x027805F1L,5UL},{0UL,0UL,0UL}};
    int32_t l_210 = 0x7EE634B2L;
    int32_t l_212[2];
    uint32_t l_237 = 0x74D3E126L;
    int16_t l_267[5][5][3] = {{{0x85B5L,0xED15L,0x85B5L},{(-7L),0x0F0DL,0L},{(-7L),0L,(-10L)},{0x85B5L,0x0F0DL,(-10L)},{(-10L),0xED15L,0L}},{{0x85B5L,0xED15L,0x85B5L},{(-7L),0x0F0DL,0L},{(-7L),0L,(-10L)},{0x85B5L,0x0F0DL,(-10L)},{(-10L),(-7L),(-1L)}},{{0x4B75L,(-7L),0x4B75L},{0x10DEL,0x85B5L,(-1L)},{0x10DEL,(-10L),0xCE79L},{0x4B75L,0x85B5L,0xCE79L},{0xCE79L,(-7L),(-1L)}},{{0x4B75L,(-7L),0x4B75L},{0x10DEL,0x85B5L,(-1L)},{0x10DEL,(-10L),0xCE79L},{0x4B75L,0x85B5L,0xCE79L},{0xCE79L,(-7L),(-1L)}},{{0x4B75L,(-7L),0x4B75L},{0x10DEL,0x85B5L,(-1L)},{0x10DEL,(-10L),0xCE79L},{0x4B75L,0x85B5L,0xCE79L},{0xCE79L,(-7L),(-1L)}}};
    int32_t l_268 = 0xF2D6737CL;
    struct S0 l_269 = {0x05BAD86DL};
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_212[i] = 0x7151E09FL;
    for (g_2 = 0; (g_2 != 21); g_2 = safe_add_func_int16_t_s_s(g_2, 1))
    { 
        int64_t l_211 = 5L;
        int8_t l_244 = 0xB2L;
        int32_t l_245 = (-1L);
    }
    l_268 &= (g_223 & (g_115.f2.f0 != (safe_sub_func_uint64_t_u_u(g_31.f0, ((l_210 &= (safe_mod_func_uint16_t_u_u(l_212[1], 1UL))) != l_267[4][2][2])))));
    return l_269;
}



static uint16_t  func_9(union U3  p_10, uint32_t  p_11)
{ 
    const struct S0 l_29 = {0xBB35B689L};
    union U3 l_30 = {{0xE8F08877L}};
    g_195 = (((safe_rshift_func_int8_t_s_u(g_12.f0.f0, ((p_10.f0.f0 , (g_204 = (safe_add_func_uint32_t_u_u(((safe_sub_func_uint8_t_u_u(((p_11 > ((func_19(func_24((((l_29 , 7UL) & (-4L)) != g_2), l_30, g_31, g_12.f0.f0), p_10.f1, l_30, l_30.f1) >= p_10.f3) | l_30.f1)) <= g_115.f2.f0), l_29.f0)) , p_10.f3), g_77)))) == 0x9AL))) >= 0x1B83L) & l_30.f3);
    g_12.f1 ^= p_11;
    return l_30.f3;
}



static uint8_t  func_19(int32_t  p_20, const uint16_t  p_21, union U3  p_22, int64_t  p_23)
{ 
    struct S0 l_57 = {4294967295UL};
    uint32_t l_68[3][5];
    int32_t l_91 = 1L;
    int32_t l_126[5] = {0x7CCE1356L,0x7CCE1356L,0x7CCE1356L,0x7CCE1356L,0x7CCE1356L};
    uint8_t l_203 = 1UL;
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 5; j++)
            l_68[i][j] = 0UL;
    }
    if (((+(safe_mul_func_int16_t_s_s(((p_22.f2 , 18446744073709551615UL) , (l_57 , (0x8A66BE80DA390E64LL & l_57.f0))), l_57.f0))) > p_23))
    { 
        uint32_t l_66 = 18446744073709551611UL;
        int32_t l_67 = 1L;
        l_68[2][2] = (safe_mul_func_uint16_t_u_u((((safe_rshift_func_uint16_t_u_u((safe_rshift_func_int16_t_s_u(p_22.f2.f0, (safe_rshift_func_int16_t_s_s(((l_67 = l_66) < 0x7BL), p_21)))), g_12.f3)) && l_66) & l_66), 0xE8D1L));
    }
    else
    { 
        int8_t l_76 = 0xDEL;
        int32_t l_86 = 0L;
        int32_t l_95 = 7L;
        for (g_52 = 0; (g_52 <= 2); g_52 += 1)
        { 
            for (g_33 = 0; (g_33 <= 2); g_33 += 1)
            { 
                int32_t l_70[5];
                int i, j;
                for (i = 0; i < 5; i++)
                    l_70[i] = 0x1DDA348DL;
                ++g_71;
                l_76 &= ((safe_div_func_uint8_t_u_u((((l_68[g_33][(g_52 + 1)] != ((l_68[g_52][g_52] >= 4294967295UL) >= 0UL)) != 0x4D86L) <= 0x2C3DA88EL), g_12.f2.f0)) >= 0UL);
                g_78++;
            }
        }
        g_81--;
        for (p_20 = (-19); (p_20 < 6); ++p_20)
        { 
            for (g_48 = 2; (g_48 >= 0); g_48 -= 1)
            { 
                uint32_t l_87[2];
                int32_t l_90 = (-6L);
                int i;
                for (i = 0; i < 2; i++)
                    l_87[i] = 0x485C7020L;
                --l_87[1];
                --g_92;
            }
            if (p_21)
            { 
                return p_22.f2.f0;
            }
            else
            { 
                g_96--;
                return p_21;
            }
        }
    }
    for (g_33 = 2; (g_33 >= 0); g_33 -= 1)
    { 
        union U1 l_116 = {9L};
        int32_t l_125 = (-1L);
        int16_t l_185 = 1L;
        int32_t l_186 = 0xA19F92D8L;
        int32_t l_187 = (-2L);
        int32_t l_188[1][3];
        int i, j;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 3; j++)
                l_188[i][j] = 0x4FAB6BA3L;
        }
        for (g_47 = 0; (g_47 <= 2); g_47 += 1)
        { 
            int32_t l_117 = 0xF19FB563L;
            int i;
            l_117 ^= (safe_rshift_func_int8_t_s_s(((l_116.f0 = (safe_rshift_func_uint16_t_u_s((safe_sub_func_uint8_t_u_u(0UL, (safe_mul_func_int16_t_s_s((safe_mul_func_int8_t_s_s((l_91 ^= 4L), (safe_mod_func_uint8_t_u_u(0x81L, (safe_add_func_int8_t_s_s(((((g_115 , l_116) , 0x3F316246L) > 4294967293UL) == g_69[g_33]), 1UL)))))), g_31.f0)))), g_69[g_33]))) != 0UL), 4));
            l_126[1] |= ((((l_91 = (l_116.f0 &= (safe_mod_func_uint32_t_u_u((~g_69[g_33]), 0x728A6F30L)))) < ((((safe_div_func_uint64_t_u_u(0x2ECD4103A87377D1LL, (l_125 |= g_37))) <= p_23) >= g_96) != 0xB401L)) & 0UL) || p_20);
            for (p_22.f3 = 0; (p_22.f3 <= 2); p_22.f3 += 1)
            { 
                uint16_t l_135[2];
                int i;
                for (i = 0; i < 2; i++)
                    l_135[i] = 0UL;
                p_20 &= (safe_div_func_int8_t_s_s(((p_21 ^ (safe_div_func_int32_t_s_s((!8L), ((l_117 < p_21) | 0L)))) >= l_117), l_116.f0));
                l_126[3] = (p_20 = (safe_add_func_int16_t_s_s(g_52, 65529UL)));
                ++l_135[0];
            }
        }
        p_20 = (~(safe_mul_func_int8_t_s_s((p_22.f3 = (l_57 , ((g_69[g_33] || ((safe_unary_minus_func_uint8_t_u((safe_lshift_func_uint8_t_u_u((((safe_mul_func_uint16_t_u_u((p_22.f3 < (safe_lshift_func_int16_t_s_s((l_116.f0 = ((safe_sub_func_int8_t_s_s(g_33, 1L)) == (-1L))), 11))), g_115.f2.f0)) || g_48) , g_71), g_53)))) & g_33)) ^ 0x00BC0C01L))), g_69[0])));
        for (g_47 = 0; (g_47 <= 2); g_47 += 1)
        { 
            int32_t l_150 = 0xFE3E8DDCL;
            int32_t l_160 = 0x68270EC9L;
            uint8_t l_175 = 0x50L;
            int i;
            if ((p_22.f1 = l_150))
            { 
                int8_t l_170 = 0x02L;
                p_22.f1 = (safe_mul_func_uint8_t_u_u(l_126[4], (++g_153)));
                p_20 &= (safe_mul_func_int8_t_s_s(((safe_sub_func_uint8_t_u_u((l_116.f0 = (g_161++)), (safe_rshift_func_int16_t_s_s((safe_sub_func_uint16_t_u_u((safe_div_func_uint8_t_u_u((g_174 = (((g_171 = l_170) | (safe_rshift_func_int8_t_s_s(p_22.f0.f0, (l_125 = 0x27L)))) == 0xA9L)), 0x2BL)), l_57.f0)), p_23)))) == p_22.f0.f0), g_77));
            }
            else
            { 
                p_20 &= p_22.f2.f0;
            }
            l_116.f0 = ((((((g_69[g_47] ^= (-9L)) && l_150) && p_21) , l_175) ^ l_175) >= g_37);
        }
        for (l_91 = 0; (l_91 <= 2); l_91 += 1)
        { 
            int32_t l_176 = 0L;
            int32_t l_184 = 0x91527C6EL;
            int32_t l_189 = 0x1B28DB73L;
            int32_t l_194 = 0x9ECCD4FDL;
            for (g_53 = 0; (g_53 <= 2); g_53 += 1)
            { 
                int64_t l_177[3][4][5] = {{{(-10L),0x516E1AE6350AEA43LL,0xE07A68DE422643F9LL,0L,0x317D55B7D1A5100ELL},{1L,0xC35E04E333C0195DLL,0xFCC27DDD567FB97FLL,0L,0L},{0L,0xEB7A0ED4F26B9B1ELL,0L,0x516E1AE6350AEA43LL,0x317D55B7D1A5100ELL},{0xB119ECE53CA36A7BLL,0L,0xC35E04E333C0195DLL,(-1L),(-1L)}},{{0x317D55B7D1A5100ELL,0xEAA374F6BAD65AA8LL,(-9L),(-9L),0xEAA374F6BAD65AA8LL},{0xFCC27DDD567FB97FLL,0xE42911447C33E8CDLL,0xC35E04E333C0195DLL,(-1L),0xAC7221F8FFA70AB6LL},{0xEB7A0ED4F26B9B1ELL,0xFB6CEFEB39733121LL,0L,(-1L),0x57577104E18E7CC0LL},{(-1L),0xFCC27DDD567FB97FLL,0xFCC27DDD567FB97FLL,(-1L),0x209D23E52F82C957LL}},{{0xEB7A0ED4F26B9B1ELL,(-9L),0xE07A68DE422643F9LL,(-10L),(-1L)},{0xFCC27DDD567FB97FLL,1L,1L,0xC35E04E333C0195DLL,1L},{0x317D55B7D1A5100ELL,0x317D55B7D1A5100ELL,(-1L),(-10L),0xE07A68DE422643F9LL},{0xB119ECE53CA36A7BLL,(-1L),0x209D23E52F82C957LL,(-1L),0xFCC27DDD567FB97FLL}}};
                int32_t l_178 = (-1L);
                int32_t l_179 = 0x07EA974BL;
                int32_t l_180 = 8L;
                int32_t l_191 = (-10L);
                int32_t l_192 = 0x11E6948FL;
                int32_t l_193 = 3L;
                int32_t l_196 = 0x4A6D0D7EL;
                int i, j, k;
                ++g_181;
                --g_198;
                p_22.f1 = ((253UL | p_21) >= (g_197 = g_31.f0));
            }
            for (g_197 = 2; (g_197 >= 0); g_197 -= 1)
            { 
                l_126[1] = (safe_add_func_uint32_t_u_u(g_190, l_91));
                g_52 = 0x31CB3A65L;
                return p_21;
            }
        }
    }
    l_203 |= 0xF313AD86L;
    return g_69[2];
}



static int32_t  func_24(uint64_t  p_25, union U3  p_26, union U2  p_27, uint32_t  p_28)
{ 
    int32_t l_32[5][5][1] = {{{0x25004286L},{0x4B082B00L},{0x25004286L},{6L},{(-9L)}},{{6L},{0x25004286L},{0x4B082B00L},{0x25004286L},{6L}},{{(-9L)},{6L},{0x25004286L},{0x4B082B00L},{0x25004286L}},{{6L},{(-9L)},{6L},{0x25004286L},{0x4B082B00L}},{{0x25004286L},{6L},{(-9L)},{6L},{0x25004286L}}};
    int32_t l_34 = 9L;
    int32_t l_35 = (-10L);
    int32_t l_36 = 0L;
    union U1 l_44 = {7L};
    int i, j, k;
    --g_37;
    for (l_35 = 0; (l_35 <= 0); l_35 += 1)
    { 
        uint64_t l_45 = 0x2820A3D57638FF43LL;
        int32_t l_46 = 0x085CA7DBL;
    }
    g_53 = ((((((g_52 &= ((p_26.f3 = l_44.f1.f0) , (g_33 <= (l_34 | (l_44.f2 , (-1L)))))) > g_12.f3) > 0x3B040F4EB9534DD9LL) == (-4L)) != g_33) != 0x4CL);
    return p_26.f3;
}





int test_main(void)
{
    int i;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_12.f0.f0, "g_12.f0.f0", print_hash_value);
    transparent_crc(g_12.f1, "g_12.f1", print_hash_value);
    transparent_crc(g_12.f2.f0, "g_12.f2.f0", print_hash_value);
    transparent_crc(g_12.f3, "g_12.f3", print_hash_value);
    transparent_crc(g_31.f0, "g_31.f0", print_hash_value);
    transparent_crc(g_33, "g_33", print_hash_value);
    transparent_crc(g_37, "g_37", print_hash_value);
    transparent_crc(g_47, "g_47", print_hash_value);
    transparent_crc(g_48, "g_48", print_hash_value);
    transparent_crc(g_52, "g_52", print_hash_value);
    transparent_crc(g_53, "g_53", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_69[i], "g_69[i]", print_hash_value);

    }
    transparent_crc(g_71, "g_71", print_hash_value);
    transparent_crc(g_77, "g_77", print_hash_value);
    transparent_crc(g_78, "g_78", print_hash_value);
    transparent_crc(g_81, "g_81", print_hash_value);
    transparent_crc(g_92, "g_92", print_hash_value);
    transparent_crc(g_96, "g_96", print_hash_value);
    transparent_crc(g_115.f0, "g_115.f0", print_hash_value);
    transparent_crc(g_115.f1.f0, "g_115.f1.f0", print_hash_value);
    transparent_crc(g_115.f2.f0, "g_115.f2.f0", print_hash_value);
    transparent_crc(g_134, "g_134", print_hash_value);
    transparent_crc(g_153, "g_153", print_hash_value);
    transparent_crc(g_161, "g_161", print_hash_value);
    transparent_crc(g_171, "g_171", print_hash_value);
    transparent_crc(g_174, "g_174", print_hash_value);
    transparent_crc(g_181, "g_181", print_hash_value);
    transparent_crc(g_190, "g_190", print_hash_value);
    transparent_crc(g_195, "g_195", print_hash_value);
    transparent_crc(g_197, "g_197", print_hash_value);
    transparent_crc(g_198, "g_198", print_hash_value);
    transparent_crc(g_204, "g_204", print_hash_value);
    transparent_crc(g_219, "g_219", print_hash_value);
    transparent_crc(g_220, "g_220", print_hash_value);
    transparent_crc(g_223, "g_223", print_hash_value);
    transparent_crc(g_241, "g_241", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
