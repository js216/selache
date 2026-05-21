// SPDX-License-Identifier: MIT
// cctest_csmith_78814f8e.c --- cctest case csmith_78814f8e (csmith seed 2021740430)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x66774419 */

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

// Options:   -s 2021740430 -o /tmp/csmith_gen_wtwnzcp4/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   uint8_t  f0;
   int64_t  f1;
};
#pragma pack(pop)

union U1 {
   const uint32_t  f0;
   int64_t  f1;
   struct S0  f2;
};


static int32_t g_2[5] = {1L,1L,1L,1L,1L};
static const struct S0 g_29 = {0x26L,0x4F32B7B88CDF8ABFLL};
static uint16_t g_33 = 0x4DE5L;
static struct S0 g_54 = {255UL,0L};
static uint64_t g_69 = 0x16A37A54743E03EBLL;
static int8_t g_88 = (-1L);
static int8_t g_91 = (-1L);
static uint16_t g_106 = 65527UL;
static int16_t g_123 = 0x56C0L;
static int32_t g_142 = 0x846699B5L;
static int32_t g_143[1] = {0x25B6AC95L};
static int8_t g_144[2] = {0x21L,0x21L};
static uint16_t g_145 = 0x7035L;
static uint8_t g_192 = 1UL;



static int8_t  func_1(void);
static int32_t  func_5(uint32_t  p_6, uint64_t  p_7, uint32_t  p_8, uint16_t  p_9);
static uint64_t  func_13(uint64_t  p_14, const int32_t  p_15, int16_t  p_16);
static int32_t  func_21(int16_t  p_22, const struct S0  p_23, int32_t  p_24, int16_t  p_25);




static int8_t  func_1(void)
{ 
    int64_t l_12 = (-8L);
    int32_t l_28 = (-4L);
    int32_t l_140 = 3L;
    int32_t l_141 = (-1L);
    uint64_t l_206[5];
    int8_t l_243 = 0x4EL;
    int i;
    for (i = 0; i < 5; i++)
        l_206[i] = 3UL;
    for (g_2[3] = 0; (g_2[3] >= 24); g_2[3] = safe_add_func_uint16_t_u_u(g_2[3], 1))
    { 
        union U1 l_26[3] = {{1UL},{1UL},{1UL}};
        int32_t l_139 = 0L;
        uint8_t l_177[5][1];
        int32_t l_205 = (-1L);
        const int16_t l_215 = 0L;
        uint64_t l_248[5][3][2] = {{{18446744073709551615UL,18446744073709551615UL},{18446744073709551615UL,18446744073709551615UL},{18446744073709551615UL,18446744073709551615UL}},{{18446744073709551615UL,18446744073709551615UL},{18446744073709551615UL,18446744073709551615UL},{18446744073709551615UL,18446744073709551615UL}},{{18446744073709551615UL,18446744073709551615UL},{18446744073709551615UL,18446744073709551615UL},{18446744073709551615UL,18446744073709551615UL}},{{18446744073709551615UL,18446744073709551615UL},{18446744073709551615UL,18446744073709551615UL},{18446744073709551615UL,18446744073709551615UL}},{{18446744073709551615UL,18446744073709551615UL},{18446744073709551615UL,18446744073709551615UL},{18446744073709551615UL,18446744073709551615UL}}};
        uint32_t l_257[4];
        int i, j, k;
        for (i = 0; i < 5; i++)
        {
            for (j = 0; j < 1; j++)
                l_177[i][j] = 255UL;
        }
        for (i = 0; i < 4; i++)
            l_257[i] = 0UL;
        if (func_5((safe_sub_func_int64_t_s_s(((l_12 != func_13(((safe_sub_func_int64_t_s_s((((safe_mod_func_int16_t_s_s(((((g_91 = func_21((l_26[2] , l_26[2].f0), (((((((~g_2[3]) == g_2[3]) , l_28) >= 7UL) & l_26[2].f0) & 0x8C7FL) , g_29), g_29.f0, l_12)) , 0x4B6C92F0D9F09F7ALL) | g_2[3]) | (-4L)), g_29.f1)) || l_12) , 0xB1200BAF9C35C0EDLL), 18446744073709551613UL)) > 8UL), l_26[2].f0, l_28)) , 0L), g_29.f1)), l_12, g_29.f0, g_29.f0))
        { 
            uint16_t l_163 = 65535UL;
            int32_t l_164 = 1L;
            --g_145;
            if ((safe_mul_func_uint16_t_u_u(g_143[0], (safe_mul_func_uint16_t_u_u((l_139 = (((++g_33) & ((l_164 ^= (safe_sub_func_uint16_t_u_u((((l_141 ^= l_140) != ((+l_12) >= (((((safe_rshift_func_uint16_t_u_s(((safe_sub_func_int16_t_s_s(((safe_mul_func_int8_t_s_s((-1L), l_163)) | 0xC0765CA490DA0945LL), g_2[3])) <= l_12), 14)) > g_145) <= g_2[0]) != 1UL) ^ l_12))) > l_26[2].f0), g_91))) , g_142)) | g_88)), l_163)))))
            { 
                g_54 = ((safe_add_func_uint64_t_u_u(0UL, (safe_mod_func_int8_t_s_s(((safe_add_func_uint64_t_u_u((l_140 = (safe_mod_func_int32_t_s_s((safe_mod_func_uint16_t_u_u((g_145 ^ ((safe_add_func_uint16_t_u_u(g_29.f0, ((l_139 = (((l_177[0][0] & 1L) , g_123) | l_12)) <= l_164))) >= 0L)), 0xE7E0L)), l_141))), 1UL)) ^ 0x866DL), l_177[4][0])))) , g_54);
            }
            else
            { 
                uint32_t l_178 = 4UL;
                l_178--;
            }
        }
        else
        { 
            int8_t l_191 = 0xC3L;
            for (g_88 = 0; (g_88 < 0); ++g_88)
            { 
                g_142 = g_123;
                g_142 = (g_192 &= (l_177[2][0] ^ ((g_144[1] = g_144[1]) == (safe_sub_func_int32_t_s_s(((safe_div_func_uint8_t_u_u((g_143[0] , (safe_mul_func_int8_t_s_s(((safe_div_func_uint32_t_u_u(g_142, g_106)) && l_191), g_145))), g_145)) > l_177[2][0]), 1L)))));
            }
        }
        if (((safe_mul_func_int8_t_s_s((l_205 |= (safe_sub_func_uint32_t_u_u(((((safe_rshift_func_int16_t_s_u(((((g_54.f1 = (safe_lshift_func_uint8_t_u_u((safe_mod_func_uint64_t_u_u(g_33, 0x6761F4025DD51201LL)), 5))) & ((g_142 &= (((safe_sub_func_uint8_t_u_u((l_28 , 255UL), l_140)) | l_26[2].f0) & l_177[0][0])) & g_144[1])) && g_144[1]) >= 0xCA683B8F37F1D822LL), 8)) >= l_139) >= 0x6AE0BEDEDAE182EBLL) || g_145), g_106))), 1UL)) < l_206[1]))
        { 
            return l_177[4][0];
        }
        else
        { 
            for (g_88 = 4; (g_88 >= 0); g_88 -= 1)
            { 
                g_142 |= l_206[1];
                g_142 = 1L;
            }
            g_54 = g_54;
        }
        if ((safe_mul_func_int16_t_s_s((0x0FL <= ((safe_div_func_uint32_t_u_u((safe_add_func_int64_t_s_s((safe_rshift_func_uint8_t_u_s(l_215, (safe_div_func_uint8_t_u_u((safe_mul_func_int8_t_s_s(l_12, 0L)), g_2[3])))), 0x62E4DC6A2FA35CBELL)), 0x1755C12CL)) || g_145)), 0UL)))
        { 
            int32_t l_241 = 0x961142FEL;
            for (g_145 = (-20); (g_145 < 6); ++g_145)
            { 
                const uint16_t l_226 = 0x74A5L;
                int16_t l_242 = 0xCE37L;
                g_142 ^= (safe_sub_func_uint8_t_u_u(((((safe_rshift_func_int8_t_s_s((0L || l_226), ((g_145 != (safe_unary_minus_func_uint64_t_u((safe_div_func_int64_t_s_s(((safe_mod_func_int8_t_s_s((safe_sub_func_int16_t_s_s(((safe_lshift_func_int8_t_s_u(((safe_sub_func_uint32_t_u_u((safe_rshift_func_int8_t_s_s((((+0x61CDC3CA42F718E4LL) >= g_145) && 0x5F69D68153D3BC77LL), g_144[1])), (-7L))) , (-8L)), 7)) & l_241), g_144[0])), 0xDCL)) > l_140), (-3L)))))) , l_242))) || g_144[1]) < 0L) , 0x83L), l_243));
            }
            for (l_140 = 12; (l_140 == (-18)); l_140 = safe_sub_func_uint64_t_u_u(l_140, 6))
            { 
                g_142 = (safe_lshift_func_int8_t_s_u(g_2[3], 2));
                if (g_145)
                    continue;
            }
            return l_248[4][2][0];
        }
        else
        { 
            int16_t l_249 = (-1L);
            int32_t l_258[4] = {0x0431255FL,0x0431255FL,0x0431255FL,0x0431255FL};
            int i;
            if ((l_249 & (safe_lshift_func_uint16_t_u_u(l_206[1], (g_106 = ((safe_lshift_func_int16_t_s_u((g_123 &= (l_249 <= (safe_rshift_func_int8_t_s_s((+(g_88 = ((l_248[4][2][0] & l_257[0]) == g_143[0]))), g_69)))), 12)) && l_258[1]))))))
            { 
                g_142 = (safe_sub_func_uint8_t_u_u((((l_258[3] && ((-7L) && (safe_div_func_int64_t_s_s((((safe_rshift_func_int8_t_s_s(l_206[2], 5)) > (+((4294967287UL >= g_123) >= 7UL))) || g_192), l_141)))) && 0x4F5B66D557B76B94LL) , g_33), 0x76L));
            }
            else
            { 
                g_142 |= 1L;
            }
        }
    }
    return l_28;
}



static int32_t  func_5(uint32_t  p_6, uint64_t  p_7, uint32_t  p_8, uint16_t  p_9)
{ 
    uint32_t l_138 = 0x52242021L;
    return l_138;
}



static uint64_t  func_13(uint64_t  p_14, const int32_t  p_15, int16_t  p_16)
{ 
    uint32_t l_92 = 0x23B15C07L;
    int32_t l_103 = 0x2E21EF5CL;
    int32_t l_108 = 7L;
    int32_t l_137 = 0x0C4AEE0EL;
    l_92 = g_2[3];
    for (l_92 = 0; (l_92 == 24); l_92 = safe_add_func_uint64_t_u_u(l_92, 1))
    { 
        uint32_t l_107[3][5] = {{0UL,0UL,0UL,0UL,0UL},{18446744073709551610UL,0xDBA6A349L,0xDBA6A349L,18446744073709551610UL,0xDBA6A349L},{0UL,0UL,0x78986B1EL,0UL,0UL}};
        int32_t l_122 = (-4L);
        int i, j;
        l_108 = (safe_mul_func_uint16_t_u_u(((safe_lshift_func_int16_t_s_s((safe_rshift_func_uint16_t_u_s(l_92, (safe_mul_func_uint16_t_u_u(((l_103 ^= ((++g_54.f0) && g_2[3])) == 0xEF3EF0B8C27A4A20LL), ((g_106 = 0L) != p_15))))), p_14)) > l_107[1][1]), l_107[1][1]));
        g_123 = ((g_54.f0--) && (safe_div_func_int32_t_s_s((safe_sub_func_int32_t_s_s(((safe_mod_func_int8_t_s_s(p_15, 1L)) < (0xF7E9L ^ (((l_122 = (!(((safe_sub_func_int16_t_s_s(((safe_rshift_func_int16_t_s_u(0x9450L, 13)) ^ g_54.f1), p_15)) > p_14) >= (-6L)))) > g_88) || 255UL))), p_14)), 4294967287UL)));
    }
    l_108 ^= (8UL <= (safe_div_func_int8_t_s_s((l_103 = l_92), (safe_lshift_func_uint16_t_u_u((safe_sub_func_int32_t_s_s((safe_unary_minus_func_uint16_t_u(((safe_mod_func_int32_t_s_s((safe_rshift_func_int8_t_s_u(p_14, 2)), ((safe_mod_func_int16_t_s_s(l_92, l_137)) & p_14))) <= 0x09A04A83BE9465D9LL))), 4294967286UL)), g_54.f1)))));
    return p_15;
}



static int32_t  func_21(int16_t  p_22, const struct S0  p_23, int32_t  p_24, int16_t  p_25)
{ 
    int8_t l_32 = 0x07L;
    int32_t l_49[4] = {0x61A7160CL,0x61A7160CL,0x61A7160CL,0x61A7160CL};
    int32_t l_50 = 0L;
    int8_t l_51 = 1L;
    int32_t l_87 = (-5L);
    struct S0 l_90 = {0x0EL,-9L};
    int i;
    for (p_25 = 0; (p_25 <= (-23)); p_25 = safe_sub_func_int16_t_s_s(p_25, 6))
    { 
        int8_t l_42 = 3L;
        int32_t l_67 = 0x1B63E3B6L;
        int32_t l_68 = 0x778C4B1EL;
        uint64_t l_86 = 0UL;
        if (l_32)
        { 
            g_33 &= l_32;
        }
        else
        { 
            int64_t l_52[2][2][4];
            int32_t l_64[3];
            int i, j, k;
            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 2; j++)
                {
                    for (k = 0; k < 4; k++)
                        l_52[i][j][k] = (-6L);
                }
            }
            for (i = 0; i < 3; i++)
                l_64[i] = (-6L);
            if (((l_52[0][1][0] |= ((safe_lshift_func_uint16_t_u_u((((safe_sub_func_int32_t_s_s((((safe_add_func_uint32_t_u_u(((safe_sub_func_uint8_t_u_u((l_42 = 255UL), l_32)) <= (l_50 &= ((((l_49[2] = (((safe_rshift_func_int8_t_s_u((((safe_mod_func_int8_t_s_s((g_29.f1 , (safe_rshift_func_uint16_t_u_s(2UL, g_33))), p_24)) | 0x89L) < 5L), 5)) , 4L) || 0L)) < p_23.f0) & g_29.f1) ^ 4294967295UL))), p_24)) , g_29.f0) , (-1L)), l_51)) & 4294967293UL) , p_24), 12)) >= 0xC8E11F3177355A2CLL)) && p_25))
            { 
                int8_t l_53 = 0xA1L;
                l_53 = g_29.f0;
                if (p_23.f0)
                    continue;
                g_54 = g_29;
            }
            else
            { 
                int8_t l_63[3];
                int i;
                for (i = 0; i < 3; i++)
                    l_63[i] = 0x37L;
                if (g_33)
                    break;
                l_64[1] = (safe_mul_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u((g_2[3] || (-2L)), ((safe_mul_func_int16_t_s_s((((g_54.f0 = g_29.f0) || ((safe_rshift_func_uint16_t_u_s(p_22, 12)) < 1L)) < l_63[2]), l_49[3])) >= 0x55EA0D0A06037BADLL))), 0x3F99L));
            }
            if (l_49[3])
                continue;
        }
        g_88 |= ((l_87 = (safe_mul_func_uint8_t_u_u((((g_33 >= (((--g_69) == (safe_div_func_uint8_t_u_u((safe_mod_func_uint8_t_u_u((safe_mod_func_int64_t_s_s((((safe_lshift_func_int8_t_s_s((l_49[1] = p_23.f0), 5)) & (safe_add_func_int64_t_s_s(((l_50 = (safe_rshift_func_int16_t_s_u((safe_rshift_func_uint16_t_u_u(g_54.f1, 15)), g_2[3]))) , l_32), 0x1C8BDC662BFFD659LL))) & 0xEDAE8E35L), p_23.f0)), l_51)), l_86))) & 0x09L)) & g_29.f1) || p_22), l_32))) > 0xC5L);
        l_68 = ((l_68 == (+(g_2[3] & (l_67 = 3L)))) & 1UL);
    }
    l_49[2] = (l_90 , g_29.f1);
    g_54 = p_23;
    return g_29.f0;
}





int test_main(void)
{
    int i;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_2[i], "g_2[i]", print_hash_value);

    }
    transparent_crc(g_29.f0, "g_29.f0", print_hash_value);
    transparent_crc(g_29.f1, "g_29.f1", print_hash_value);
    transparent_crc(g_33, "g_33", print_hash_value);
    transparent_crc(g_54.f0, "g_54.f0", print_hash_value);
    transparent_crc(g_54.f1, "g_54.f1", print_hash_value);
    transparent_crc(g_69, "g_69", print_hash_value);
    transparent_crc(g_88, "g_88", print_hash_value);
    transparent_crc(g_91, "g_91", print_hash_value);
    transparent_crc(g_106, "g_106", print_hash_value);
    transparent_crc(g_123, "g_123", print_hash_value);
    transparent_crc(g_142, "g_142", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_143[i], "g_143[i]", print_hash_value);

    }
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_144[i], "g_144[i]", print_hash_value);

    }
    transparent_crc(g_145, "g_145", print_hash_value);
    transparent_crc(g_192, "g_192", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
