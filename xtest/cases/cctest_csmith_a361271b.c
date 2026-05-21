// SPDX-License-Identifier: MIT
// cctest_csmith_a361271b.c --- cctest case csmith_a361271b (csmith seed 2741053211)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x8c3699e3 */

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

// Options:   -s 2741053211 -o /tmp/csmith_gen_r5jvngo1/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   uint32_t  f0;
};
#pragma pack(pop)

union U1 {
   const int32_t  f0;
   int16_t  f1;
   int64_t  f2;
};


static uint8_t g_6 = 1UL;
static int32_t g_13[5] = {(-1L),(-1L),(-1L),(-1L),(-1L)};
static uint32_t g_18 = 0xBB5A2755L;
static uint32_t g_19 = 4294967295UL;
static int32_t g_30[1] = {0x97847253L};
static uint8_t g_32 = 255UL;
static uint8_t g_49 = 0xA4L;
static int32_t g_88 = (-8L);
static int32_t g_90 = (-1L);
static uint32_t g_91[5] = {18446744073709551607UL,18446744073709551607UL,18446744073709551607UL,18446744073709551607UL,18446744073709551607UL};
static int32_t g_94 = 1L;
static uint16_t g_95 = 65535UL;
static struct S0 g_101 = {0x893BA86AL};
static uint8_t g_115 = 0xB7L;
static uint32_t g_133[3][4] = {{4294967295UL,0x3FBCBB49L,0x9413DEA6L,0x3FBCBB49L},{0x3FBCBB49L,0UL,0x9413DEA6L,0x9413DEA6L},{4294967295UL,4294967295UL,0x3FBCBB49L,0x9413DEA6L}};
static uint16_t g_134 = 65535UL;
static uint32_t g_136[2] = {1UL,1UL};
static int8_t g_170 = 0xC1L;
static uint64_t g_171 = 0x6DA6D5B5E94B15D7LL;



static uint32_t  func_1(void);
static int32_t  func_2(int8_t  p_3, uint32_t  p_4, int16_t  p_5);
static const struct S0  func_20(int8_t  p_21);
static uint64_t  func_24(int64_t  p_25, uint64_t  p_26, uint32_t  p_27, const uint32_t  p_28);




static uint32_t  func_1(void)
{ 
    const int8_t l_7 = 0x4BL;
    int32_t l_12 = (-7L);
    int32_t l_174[1];
    uint64_t l_205[4][2][4] = {{{0UL,0UL,0x45C538B7FA9453C7LL,0UL},{0UL,0xE5D604C13849F51ELL,0xE5D604C13849F51ELL,0UL}},{{0xE5D604C13849F51ELL,0UL,0xE5D604C13849F51ELL,0xE5D604C13849F51ELL},{0UL,0UL,0x45C538B7FA9453C7LL,0UL}},{{0UL,0xE5D604C13849F51ELL,0xE5D604C13849F51ELL,0UL},{0xE5D604C13849F51ELL,0xE5D604C13849F51ELL,0x45C538B7FA9453C7LL,0x45C538B7FA9453C7LL}},{{0xE5D604C13849F51ELL,0xE5D604C13849F51ELL,0UL,0xE5D604C13849F51ELL},{0xE5D604C13849F51ELL,0x45C538B7FA9453C7LL,0x45C538B7FA9453C7LL,0xE5D604C13849F51ELL}}};
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_174[i] = 0xE4973F2DL;
    if (func_2(g_6, (g_6 , (((l_7 < ((g_13[4] = (((safe_mul_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u(((l_12 = ((g_6 >= 0x0D62E65251C6076FLL) <= g_6)) >= l_7), 0xB5L)), l_7)) != 6L) ^ l_7)) == l_7)) && l_12) ^ l_7)), g_6))
    { 
        uint32_t l_17 = 0x0E426067L;
        for (g_6 = 0; (g_6 < 48); g_6++)
        { 
            return l_17;
        }
        g_19 |= (g_18 = (-1L));
    }
    else
    { 
        int8_t l_175[3][3];
        int32_t l_185 = 0xC042F281L;
        struct S0 l_200 = {0xC45A4569L};
        int i, j;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
                l_175[i][j] = (-3L);
        }
        if (((func_20((func_2(l_12, (func_2((l_174[0] = ((l_7 == (safe_add_func_int8_t_s_s(((func_24((!l_7), g_13[3], l_12, l_7) || 0UL) > g_94), g_13[3]))) >= g_90)), l_7, l_175[0][0]) ^ g_19), l_7) != g_18)) , 0x31L) ^ 0x90L))
        { 
lbl_189:
            g_88 = 9L;
            return l_174[0];
        }
        else
        { 
            uint8_t l_184 = 251UL;
            for (g_90 = 0; (g_90 <= (-12)); g_90--)
            { 
                return g_171;
            }
            g_101 = func_20(l_184);
            for (g_19 = 0; (g_19 <= 1); g_19 += 1)
            { 
                uint32_t l_186 = 0xD74FDE4BL;
                ++l_186;
                if (l_12)
                    goto lbl_189;
            }
        }
        g_101 = func_20(((safe_lshift_func_int16_t_s_s(((g_171 = (g_88 , (safe_sub_func_uint64_t_u_u(g_91[1], g_18)))) || ((((safe_mod_func_uint32_t_u_u(((((l_174[0] ^= (g_30[0] & 8L)) != 0x66A5L) || l_174[0]) <= 0xC5L), g_88)) && l_174[0]) <= 65535UL) | (-1L))), 8)) ^ 0xDC97L));
        for (g_134 = 0; (g_134 >= 53); g_134 = safe_add_func_uint64_t_u_u(g_134, 1))
        { 
            uint16_t l_202 = 5UL;
            for (g_171 = (-6); (g_171 <= 34); g_171++)
            { 
                int64_t l_201 = 0x5780FFA4CDD5964DLL;
                g_101 = l_200;
                l_185 = l_201;
            }
            ++l_202;
        }
    }
    return l_205[0][0][2];
}



static int32_t  func_2(int8_t  p_3, uint32_t  p_4, int16_t  p_5)
{ 
    uint64_t l_14[3][2][4] = {{{0x2F1FCC1031C36B58LL,0UL,0x2F1FCC1031C36B58LL,0x2F1FCC1031C36B58LL},{0UL,0UL,0x417612D29ED7D413LL,0UL}},{{0UL,0x2F1FCC1031C36B58LL,0x2F1FCC1031C36B58LL,0UL},{0x2F1FCC1031C36B58LL,0UL,0x2F1FCC1031C36B58LL,0x2F1FCC1031C36B58LL}},{{0UL,0UL,0x417612D29ED7D413LL,0UL},{0UL,0x2F1FCC1031C36B58LL,0x2F1FCC1031C36B58LL,0UL}}};
    int i, j, k;
    return l_14[2][0][3];
}



static const struct S0  func_20(int8_t  p_21)
{ 
    uint32_t l_178 = 0x0B5EBE33L;
    int32_t l_179 = 0x91EDA5D4L;
    int32_t l_180 = 0x08496AEBL;
    const struct S0 l_181 = {0x6C0BC80BL};
    g_88 |= (l_180 = ((l_179 = (safe_rshift_func_int16_t_s_s(((l_178 && (g_6 | (p_21 || l_178))) , p_21), l_178))) , l_178));
    return l_181;
}



static uint64_t  func_24(int64_t  p_25, uint64_t  p_26, uint32_t  p_27, const uint32_t  p_28)
{ 
    uint32_t l_31 = 4294967295UL;
    const struct S0 l_44 = {18446744073709551607UL};
    int32_t l_46 = (-1L);
    union U1 l_159 = {0xD7A66F30L};
    uint32_t l_168 = 0x77C127BBL;
    for (p_25 = 3; (p_25 >= 0); p_25 -= 1)
    { 
        uint16_t l_41 = 0x4471L;
        int32_t l_71 = 0x4AADDA39L;
        int32_t l_75 = 5L;
        union U1 l_100[4][5] = {{{1L},{0x91D89D75L},{1L},{0x91D89D75L},{1L}},{{0x55514738L},{0x55514738L},{0x55514738L},{0x55514738L},{0x55514738L}},{{1L},{0x91D89D75L},{1L},{0x91D89D75L},{1L}},{{0x55514738L},{0x55514738L},{0x55514738L},{0x55514738L},{0x55514738L}}};
        struct S0 l_119 = {0UL};
        uint8_t l_150 = 4UL;
        int i, j;
        if (p_25)
        { 
            int32_t l_45 = 1L;
            g_30[0] ^= g_19;
            for (p_26 = 0; (p_26 <= 4); p_26 += 1)
            { 
                if (l_31)
                    break;
                g_32 = (p_26 <= (0xE0855BBB785AA1EDLL & g_19));
                l_46 ^= ((((safe_add_func_int16_t_s_s((((safe_lshift_func_int16_t_s_s(((safe_add_func_uint16_t_u_u(0x8C0FL, ((((l_41 &= (safe_lshift_func_int8_t_s_u(g_30[0], 3))) > (safe_add_func_uint32_t_u_u((l_44 , (p_27 , 4294967288UL)), 0xF7C0CB0AL))) > 18446744073709551607UL) < l_45))) & g_32), 6)) < p_25) > 0x94BBB87E338AE633LL), 1L)) , l_45) <= 250UL) , g_18);
            }
        }
        else
        { 
            int64_t l_47 = 0L;
            int32_t l_48 = (-6L);
            int8_t l_67[2];
            int i;
            for (i = 0; i < 2; i++)
                l_67[i] = 0x9EL;
            for (l_46 = 0; (l_46 <= 4); l_46 += 1)
            { 
                int64_t l_52[2][5][1];
                int32_t l_68 = (-5L);
                int i, j, k;
                for (i = 0; i < 2; i++)
                {
                    for (j = 0; j < 5; j++)
                    {
                        for (k = 0; k < 1; k++)
                            l_52[i][j][k] = 0xAC6DEA280505B3EALL;
                    }
                }
                g_49--;
                l_52[0][0][0] ^= g_13[4];
                l_68 = (+(safe_mod_func_int8_t_s_s((!((safe_sub_func_int64_t_s_s((safe_lshift_func_int8_t_s_s((((safe_add_func_int8_t_s_s(g_49, (g_6 = g_13[4]))) != g_32) < (safe_mul_func_uint16_t_u_u((((safe_add_func_int32_t_s_s(l_41, l_41)) , l_67[1]) ^ p_25), p_28))), g_19)), g_18)) | 0x619AF7C7L)), 0xD9L)));
            }
        }
        if ((g_18 == (safe_add_func_uint16_t_u_u((g_6 > p_25), (((l_71 = l_41) , g_32) , 0x8F49L)))))
        { 
            uint32_t l_76 = 9UL;
            int32_t l_87 = 0xBFDB46CEL;
            int32_t l_89 = 6L;
            if ((safe_sub_func_uint64_t_u_u(((((((((!(l_76--)) != (g_88 = (l_87 = (safe_rshift_func_int16_t_s_s(g_30[0], (l_75 = (((((safe_sub_func_uint16_t_u_u(0x13C8L, (safe_add_func_int32_t_s_s(((0x609311A0L & (((safe_sub_func_uint8_t_u_u(255UL, g_49)) != 0xDB51L) < 0xBE35A844L)) , 1L), 0x0CEACAB8L)))) & 0x1DL) || p_27) > p_27) >= l_31))))))) ^ l_89) == p_26) || p_25) & 5UL) | g_30[0]) & p_28), g_6)))
            { 
                --g_91[1];
                g_88 = 0x1D562F9BL;
                ++g_95;
            }
            else
            { 
                int32_t l_102 = (-1L);
                const int32_t l_103 = 0x58E765C7L;
                g_88 = ((p_28 > ((safe_rshift_func_int16_t_s_u((l_100[3][4] , (((p_27 = (l_102 = (p_28 > ((g_101 , 0xE2D3E462BFC98A5CLL) > l_44.f0)))) < 1L) , g_19)), 15)) > l_100[3][4].f0)) < l_103);
                l_102 |= ((g_13[3] < g_95) <= 0x3666D709BDCC1C6ALL);
            }
            l_87 = (safe_add_func_int32_t_s_s(l_87, (l_46 |= (safe_sub_func_int16_t_s_s((safe_lshift_func_int8_t_s_u(p_28, 4)), (l_71 = p_27))))));
        }
        else
        { 
            uint64_t l_114 = 9UL;
            int32_t l_120[1][1][4] = {{{0x19E5FB73L,0x19E5FB73L,0x19E5FB73L,0x19E5FB73L}}};
            int16_t l_132 = 0x0424L;
            int i, j, k;
            l_46 = (safe_add_func_uint64_t_u_u((safe_mul_func_uint16_t_u_u(4UL, (p_25 && (g_32 & p_27)))), g_30[0]));
            if ((l_46 ^= ((g_115 = l_114) & l_114)))
            { 
                int32_t l_135 = 0L;
                l_135 ^= ((~((((l_100[3][4].f0 > ((safe_add_func_uint16_t_u_u(4UL, ((l_119 = g_101) , ((l_75 = (++g_115)) > ((g_134 = (safe_sub_func_int32_t_s_s((~((~(safe_rshift_func_uint16_t_u_s(((~(((g_133[0][0] = ((safe_sub_func_uint64_t_u_u(((((g_101.f0 & p_28) || 5UL) >= l_132) != p_26), g_18)) , l_31)) , 0UL) ^ p_28)) == g_88), 5))) ^ g_6)), p_25))) & g_18))))) < 1L)) & p_28) ^ g_6) && 0x1A61B918L)) , p_27);
                g_101 = l_119;
            }
            else
            { 
                uint32_t l_139 = 0x11988AFCL;
                g_136[1]--;
                return l_139;
            }
            if (((l_46 = (-5L)) ^ (((safe_add_func_uint8_t_u_u(((safe_sub_func_int64_t_s_s(p_28, ((!p_25) > ((((safe_mul_func_uint8_t_u_u((safe_mul_func_int16_t_s_s((l_75 = g_134), g_91[1])), l_120[0][0][2])) == l_31) < g_91[0]) != 1UL)))) ^ l_100[3][4].f1), l_120[0][0][2])) > g_88) , g_13[2])))
            { 
                struct S0 l_149 = {1UL};
                l_149 = l_149;
                if (l_100[3][4].f0)
                    continue;
            }
            else
            { 
                int64_t l_160 = 0x428F1AC0AFFF8CD5LL;
                --l_150;
                g_88 &= (l_75 = ((((0x3C67237AF6748267LL && (safe_rshift_func_int8_t_s_u(((safe_rshift_func_int8_t_s_u((2L == (safe_sub_func_uint64_t_u_u(p_28, (((l_159 , l_160) == p_27) | g_49)))), g_30[0])) <= g_101.f0), 2))) && p_27) >= g_133[2][2]) , p_28));
            }
        }
        g_88 = ((safe_sub_func_int16_t_s_s((safe_mul_func_uint16_t_u_u((~(0xC3A6L <= (g_170 = ((safe_mod_func_uint16_t_u_u(g_91[1], (l_168 = l_46))) , (safe_unary_minus_func_int8_t_s(p_26)))))), l_100[3][4].f1)), p_27)) > 0xE382ABCCD47DF34BLL);
    }
    g_171--;
    return p_28;
}





int test_main(void)
{
    int i, j;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_6, "g_6", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_13[i], "g_13[i]", print_hash_value);

    }
    transparent_crc(g_18, "g_18", print_hash_value);
    transparent_crc(g_19, "g_19", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_30[i], "g_30[i]", print_hash_value);

    }
    transparent_crc(g_32, "g_32", print_hash_value);
    transparent_crc(g_49, "g_49", print_hash_value);
    transparent_crc(g_88, "g_88", print_hash_value);
    transparent_crc(g_90, "g_90", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_91[i], "g_91[i]", print_hash_value);

    }
    transparent_crc(g_94, "g_94", print_hash_value);
    transparent_crc(g_95, "g_95", print_hash_value);
    transparent_crc(g_101.f0, "g_101.f0", print_hash_value);
    transparent_crc(g_115, "g_115", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_133[i][j], "g_133[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_134, "g_134", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_136[i], "g_136[i]", print_hash_value);

    }
    transparent_crc(g_170, "g_170", print_hash_value);
    transparent_crc(g_171, "g_171", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
